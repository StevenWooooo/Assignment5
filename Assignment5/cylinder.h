#ifndef ASSIGNMENT5_CYLINDER_H
#define ASSIGNMENT5_CYLINDER_H

#include <GL\glut.h>

class Cylinder {
private:
	GLfloat cylinder_position_x, cylinder_position_y, cylinder_position_z, cylinder_radius;
	GLfloat cylinder_r, cylinder_g, cylinder_b;
	void DrawCircle();
	void DrawCylinder();
public:
	Cylinder(float radius, float r, float g, float b);
	~Cylinder(){}

	GLfloat GetCylinderPositionX() { return cylinder_position_x;}
	void  SetCylinderPositionX(float x) {cylinder_position_x = x;}

	GLfloat GetCylinderPositionY() { return cylinder_position_y;}
	void  SetCylinderPositionY(float y) {cylinder_position_y = y;}

	GLfloat GetCylinderPositionZ() { return cylinder_position_z;}
	void  SetCylinderPositionZ(float z) {cylinder_position_z = z;}

	void SetCylinderPosition(float x, float y, float z);

	void DisplayCylinder();
};

#endif //~ASSIGNMENT5_PUCK_H