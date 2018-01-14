#include <cmath>
#include "cylinder.h"

Cylinder::Cylinder(float radius, float r, float g, float b)  : cylinder_r(r), cylinder_g(g), cylinder_b(b){
	cylinder_position_x = 0;
	cylinder_position_y = 3.1;
	cylinder_position_z = 0;
	cylinder_radius = radius;
}

void Cylinder::DrawCircle()  
{  
    glBegin(GL_TRIANGLE_FAN);//扇形连续填充三角形串  
    glVertex3f(0.0f, 0.0f, 0.0f);  
    int i = 0;  
    for (i = 0; i <= 390; i += 15)  
    {  
        float p = i * 3.14 / 180;  
        glVertex3f(cylinder_radius * sin(p), 0.0, cylinder_radius * cos(p));  
    }  
    glEnd();  
}  

void Cylinder::DrawCylinder()  
{  
    glBegin(GL_QUAD_STRIP);//连续填充四边形串  
    int i = 0;  
    for (i = 0; i <= 390; i += 15)  
    {  
        float p = i * 3.14 / 180;  
        glVertex3f(cylinder_radius * sin(p), 0.1f, cylinder_radius * cos(p));  
        glVertex3f(cylinder_radius * sin(p), 0.0f, cylinder_radius * cos(p));  
    }  
    glEnd();  
    DrawCircle();  
    glTranslatef(0, 0.1, 0);  
    DrawCircle();  
}  

void Cylinder::DisplayCylinder() {
	glPushMatrix();
	glColor3f(cylinder_r, cylinder_g, cylinder_b);  
	glTranslatef(cylinder_position_x, cylinder_position_y, cylinder_position_z);  
    DrawCylinder();  
	glPopMatrix();
}

void Cylinder::SetCylinderPosition(float x, float y, float z) {
	cylinder_position_x = x;
	cylinder_position_y = y;
	cylinder_position_z = z;
}