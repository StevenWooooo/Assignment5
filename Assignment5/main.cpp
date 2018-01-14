#include <Windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <GL/GL.h>
#include <GL/glut.h>

#include "defines.h"
#include "game.h"

Game* my_game = new Game();
Cylinder* puck = my_game->GetPuck();

const GLint kWindowSizeX = 600, kWindowSizeY = 600;

void Initialize()  {  
    glClearColor(0.0, 0.0, 0.0, 1.0); 
	glShadeModel(GL_SMOOTH);
	glClearDepth(10.0f);									
	glEnable(GL_DEPTH_TEST);  
    glDepthFunc(GL_LESS); 
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);    
}  

void Reshape(int w, int h)  {  
    glViewport(0, 0, (GLsizei)w, (GLsizei)h);  
    glMatrixMode(GL_PROJECTION);  
    glLoadIdentity();  
    gluPerspective(60.0, (GLfloat)w / (GLfloat)h, 1.0, 20.0);  
    glMatrixMode(GL_MODELVIEW);  
    glLoadIdentity();  
    gluLookAt(4.0, 9.0, 4.0,  0.0, 0.0, 0.0,  0.0, 1.0, 0.0);
} 

void Display() {
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	gluLookAt(4.0, 9.0, 4.0,  0.0, 0.0, 0.0,  0.0, 1.0, 0.0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	
	my_game->DisplayGame();
	
	glutSwapBuffers();
}

int main(int argc, char **argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
	glutInitWindowPosition(100, 100);
	glutInitWindowSize(kWindowSizeX, kWindowSizeY);
	glutCreateWindow(argv[0]);

	Initialize();

	glutDisplayFunc(&Display);
	glutReshapeFunc(&Reshape);
	//glutKeyboardFunc(&keyboard);
	glutMainLoop();
	return 0;
}