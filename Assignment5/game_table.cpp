#include "game_table.h"

void DisplayGameTable() {
	/* ���Ƶײ��Ĵ��� */
	glPushMatrix();
	glTranslatef(0.0, 1.5, 0.0);
	glColor3f(1.0, 1.0, 1.0);
	glScalef(4.4, 3, 8.4);
	glutSolidCube(1.0); 
	glPopMatrix();

	/* ���Ʒ������ĸ���Ե */
	glPushMatrix();
	glTranslatef(2.1, 3.0, 0.0);
	glColor3f(0.0, 1.0, 1.0);
	glScalef(0.2, 0.6, 8.4);
	glutSolidCube(1.0); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-2.1, 3.0, 0.0);
	glColor3f(0.0, 1.0, 1.0);
	glScalef(0.2, 0.6, 8.4);
	glutSolidCube(1.0); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.4, 3.0, 4.1);
	glColor3f(0.0, 1.0, 1.0);
	glScalef(1.2, 0.6, 0.2);
	glutSolidCube(1.0); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.4, 3.0, 4.1);
	glColor3f(0.0, 1.0, 1.0);
	glScalef(1.2, 0.6, 0.2);
	glutSolidCube(1.0); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(1.4, 3.0, -4.1);
	glColor3f(0.0, 1.0, 1.0);
	glScalef(1.2, 0.6, 0.2);
	glutSolidCube(1.0); 
	glPopMatrix();

	glPushMatrix();
	glTranslatef(-1.4, 3.0, -4.1);
	glColor3f(0.0, 1.0, 1.0);
	glScalef(1.2, 0.6, 0.2);
	glutSolidCube(1.0); 
	glPopMatrix();

	/* ������̨�м����ɫ��ƺ */
	glPushMatrix();
	glTranslatef(0.0, 3.0, 0.0);
	glColor3f(1.0, 0.0, 1.0);
	glScalef(4.0, 0.2, 8.0);
	glutSolidCube(1.0); 
	glPopMatrix();
}