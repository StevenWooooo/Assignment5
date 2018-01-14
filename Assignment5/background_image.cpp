#include <fstream>
#include <cstdio>

#include "background_image.h"

GLuint LoadBackgroudImage(const char* filename, int width, int height) {
	GLuint texture;
	unsigned char* data;
	FILE* file;

	file = fopen(filename, "rb");
	if(file == NULL) {
		printf("Can not open %s\n", filename);
	}
	printf("Open %s\n", filename);

	data = (unsigned char*)malloc(width * height * 3);
	fread(data, width * height * 3, 1, file);  
	fclose(file);

	glGenTextures(1, &texture);
	glBindTexture(GL_TEXTURE_2D, texture); 
	glTexEnvf(GL_TEXTURE_ENV, GL_TEXTURE_ENV_MODE, GL_MODULATE); 

	glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_LINEAR);  
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_LINEAR);      
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_REPEAT);  
    glTexParameterf(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_REPEAT);  
  
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGB, width, height, 0, GL_BGR_EXT, GL_UNSIGNED_BYTE, data);  
    free(data);
    return texture;   
}

void DisplayBackgroundImage() {
	GLuint texture = LoadBackgroudImage("floor.bmp", 128, 128);
	glEnable(GL_TEXTURE_2D);  
	for(int i = -100; i <= 100; ++ i) {
		for(int j = -100; j <= 100; ++ j) {
			glPushMatrix();    
			glTranslatef(i, 0, j);  
			glBindTexture(GL_TEXTURE_2D, texture);  
  
			glBegin(GL_QUADS);  
			glTexCoord2d(0.0, 0.0);  glVertex3d(-1.0, 0.0, -1.0);  
			glTexCoord2d(1.0, 0.0);  glVertex3d(+1.0, 0.0, -1.0);  
			glTexCoord2d(1.0, 1.0);  glVertex3d(+1.0, 0.0, +1.0);  
			glTexCoord2d(0.0, 1.0);  glVertex3d(-1.0, 0.0, +1.0);  
			glEnd();  
			glPopMatrix();
		}
	}
    return ;
}