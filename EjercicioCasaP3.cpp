//Semestre 2019 - 2
// Alumno: L�pez P�rez Marcos Emiliano*************************//
// Pr�ctica #3 ************************************************//
// Microsoft Visual Studio 2017 *******************************//
//*************************************************************//
//#include <gl/gl.h>     // The GL Header File
//#include <GL/glut.h>   // The GL Utility Toolkit (Glut) Header
//#include <stdlib.h>
#include "Main.h"

float angleX = 0.0f;
float angleY = 0.0f;
float angleZ = 0.0f;
float transX = 0.0f;
float transY = 0.0f;
float transZ = -5.0f;


void InitGL ( GLvoid )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f);				// Blanco de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

//Patito de Crossy Road

void cuerpo(void)
{
	GLfloat vertice[8][3] = {
	{ 5.0 ,-15.0, 11.0 },       //Coordenadas V�rtice 0 V0
	{ -5.0 ,-15.0, 11.0 },      //Coordenadas V�rtice 1 V1
	{ -5.0 ,-15.0, 0.0 },     //Coordenadas V�rtice 2 V2
	{ 5.0 ,-15.0, 0.0 },      //Coordenadas V�rtice 3 V3
	{ 5.0 ,15.0, 11.0 },       //Coordenadas V�rtice 4 V4
	{ 5.0 ,15.0, 0.0 },      //Coordenadas V�rtice 5 V5
	{ -5.0 ,15.0, 0.0 },     //Coordenadas V�rtice 6 V6
	{ -5.0 ,15.0, 11.0 },      //Coordenadas V�rtice 7 V7

				};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void cola(void)
{
	GLfloat vertice[8][3] = {
	{ 5.0 ,-15.0, 16.0 },       //Coordenadas V�rtice 0 V0
	{ -5.0 ,-15.0, 16.0 },      //Coordenadas V�rtice 1 V1
	{ -5.0 ,-15.0, 12.0 },     //Coordenadas V�rtice 2 V2
	{ 5.0 ,-15.0, 12.0 },      //Coordenadas V�rtice 3 V3
	{ 5.0 ,-3.0, 16.0 },       //Coordenadas V�rtice 4 V4
	{ 5.0 ,-3.0, 12.0 },      //Coordenadas V�rtice 5 V5
	{ -5.0 ,-3.0, 12.0 },     //Coordenadas V�rtice 6 V6
	{ -5.0 ,-3.0, 16.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void cola2(void)
{
	GLfloat vertice[8][3] = {
	{ 4.0 ,-3.0, 16.0 },       //Coordenadas V�rtice 0 V0
	{ -4.0 ,-3.0, 16.0 },      //Coordenadas V�rtice 1 V1
	{ -4.0 ,-3.0, 12.0 },     //Coordenadas V�rtice 2 V2
	{ 4.0 ,-3.0, 12.0 },      //Coordenadas V�rtice 3 V3
	{ 4.0 ,-0.0, 16.0 },       //Coordenadas V�rtice 4 V4
	{ 4.0 ,-0.0, 12.0 },      //Coordenadas V�rtice 5 V5
	{ -4.0 ,-0.0, 12.0 },     //Coordenadas V�rtice 6 V6
	{ -4.0 ,-0.0, 16.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void pierna(void)
{
	GLfloat vertice[8][3] = {
	{ 0.0 ,-9.0, 0.0 },       //Coordenadas V�rtice 0 V0
	{ -1.0 ,-9.0, 0.0 },      //Coordenadas V�rtice 1 V1
	{ -1.0 ,-9.0, -1.0 },     //Coordenadas V�rtice 2 V2
	{ 0.0 ,-9.0, -1.0 },      //Coordenadas V�rtice 3 V3
	{ 0.0 ,0.0, 0.0 },       //Coordenadas V�rtice 4 V4
	{ 0.0 ,0.0, -1.0 },      //Coordenadas V�rtice 5 V5
	{ -1.0 ,0.0, -1.0 },     //Coordenadas V�rtice 6 V6
	{ -1.0 ,0.0, 0.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void pata(void)
{
	GLfloat vertice[8][3] = {
	{ 2.0 ,-2.0, 2.0 },       //Coordenadas V�rtice 0 V0
	{ -2.0 ,-2.0, 2.0 },      //Coordenadas V�rtice 1 V1
	{ -2.0 ,-2.0, -2.0 },     //Coordenadas V�rtice 2 V2
	{ 2.0 ,-2.0, -2.0 },      //Coordenadas V�rtice 3 V3
	{ 2.0 ,0.0, 2.0 },       //Coordenadas V�rtice 4 V4
	{ 2.0 ,0.0, -2.0 },      //Coordenadas V�rtice 5 V5
	{ -2.0 ,0.0, -2.0 },     //Coordenadas V�rtice 6 V6
	{ -2.0 ,0.0, 2.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void pico(void)
{
	GLfloat vertice[8][3] = {
	{ 3.0 ,-4.0, 2.0 },       //Coordenadas V�rtice 0 V0
	{ -3.0 ,-4.0, 2.0 },      //Coordenadas V�rtice 1 V1
	{ -3.0 ,-4.0, -2.0 },     //Coordenadas V�rtice 2 V2
	{ 3.0 ,-4.0, -2.0 },      //Coordenadas V�rtice 3 V3
	{ 3.0 ,0.0, 2.0 },       //Coordenadas V�rtice 4 V4
	{ 3.0 ,0.0, -2.0 },      //Coordenadas V�rtice 5 V5
	{ -3.0 ,0.0, -2.0 },     //Coordenadas V�rtice 6 V6
	{ -3.0 ,0.0, 2.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 0.5, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void ala(void)
{
	GLfloat vertice[8][3] = {
	{ 3.0 ,-10.0, 6.0 },       //Coordenadas V�rtice 0 V0
	{ 0.0 ,-10.0, 6.0 },      //Coordenadas V�rtice 1 V1
	{ 0.0 ,-10.0, -2.0 },     //Coordenadas V�rtice 2 V2
	{ 3.0 ,-10.0, -2.0 },      //Coordenadas V�rtice 3 V3
	{ 3.0 ,0.0, 6.0 },       //Coordenadas V�rtice 4 V4
	{ 3.0 ,0.0, -2.0 },      //Coordenadas V�rtice 5 V5
	{ 0.0 ,0.0, -2.0 },     //Coordenadas V�rtice 6 V6
	{ 0.0 ,0.0, 6.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(1.0, 1.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void ojo(void)
{
	GLfloat vertice[8][3] = {
	{ 2.0 ,-2.0, 2.0 },       //Coordenadas V�rtice 0 V0
	{ 1.0 ,-2.0, 2.0 },      //Coordenadas V�rtice 1 V1
	{ 1.0 ,-2.0, 1.0 },     //Coordenadas V�rtice 2 V2
	{ 2.0 ,-2.0, 1.0 },      //Coordenadas V�rtice 3 V3
	{ 2.0 ,0.0, 2.0 },       //Coordenadas V�rtice 4 V4
	{ 2.0 ,0.0, 1.0 },      //Coordenadas V�rtice 5 V5
	{ 1.0 ,0.0, 1.0 },     //Coordenadas V�rtice 6 V6
	{ 1.0 ,0.0, 2.0 },      //Coordenadas V�rtice 7 V7

	};

	glBegin(GL_POLYGON);	//Front
	glColor3f(0.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[1]);
	glEnd();

	glBegin(GL_POLYGON);	//Right
	glColor3f(0.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[4]);
	glEnd();

	glBegin(GL_POLYGON);	//Back
	glColor3f(0.0, 0.0, 0.0);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[3]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Left
	glColor3f(0.0, 0.0, 0.0);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[7]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[2]);
	glEnd();

	glBegin(GL_POLYGON);   //Bottom

	glColor3f(0.0, 0.0, 0.0);
	glVertex3fv(vertice[0]);
	glVertex3fv(vertice[1]);
	glVertex3fv(vertice[2]);
	glVertex3fv(vertice[3]);
	glEnd();

	glBegin(GL_POLYGON);   //Top
	glColor3f(0.0, 0.0, 0.0);
	glVertex3fv(vertice[4]);
	glVertex3fv(vertice[5]);
	glVertex3fv(vertice[6]);
	glVertex3fv(vertice[7]);
	glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		//Poner C�digo Aqu�.

	glTranslatef(transX, transY, transZ);
	cuerpo(); //Dibujamos el prisma predeclardo (arriba)
	glTranslatef(0.0, 0.0, -15.0);
	cola(); //Dibujamos el prisma predeclardo (arriba)
	glTranslatef(0.0, 0.0, 0.0);
	cola2();
	glTranslatef(-2.0, -15.0, 23.0);
	pierna();
	glTranslatef(5.0, 0.0, 0.0);
	pierna();
	glTranslatef(0.0, -8.0, 0.0);
	pata();
	glTranslatef(-6.0, 0.0, 0.0);
	pata();
	glTranslatef(3.0, 32.0, 2.0);
	pico();
	glTranslatef(-6.0, 2.0, -3.0);
	ojo();
	glTranslatef(9.0, 0.0, 0.0);
	ojo();
	glTranslatef(-10.0, -9d.0, -8.0);
	ala();
	glTranslatef(12.0, 0.0, 0.0);
	ala();

    glutSwapBuffers ( );
    //glFlush();
    // Swap The Buffers
}

void reshape ( int width , int height )   // Creamos funcion Reshape
{
  if (height==0)										// Prevenir division entre cero
	{
		height=1;
	}

	glViewport(0,0,width,height);	

	glMatrixMode(GL_PROJECTION);						// Seleccionamos Projection Matrix
	glLoadIdentity();

	//Tipo de Vista
	//glOrtho(-10,10,-5,5,0.1,20);	//Vista ortogonal 2D
	glFrustum (-0.2, 0.2,-0.2, 0.2, 0.2, 50.0);  //Vista con perspectiva 3d
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 's':
		case 'S':
			transZ -=0.2f;
			printf("Posicion en Z: %f\n", transZ);
			break;
		case 'a':
		case 'A':
			transX -=0.2f;
			break;
		case 'd':
		case 'D':
			transX +=0.2f;
			break;
	//Agrego los casos para mover arriba y abajo utilizando Q y E
		case 'q':   //Caso q, Q (Arriba)
		case 'Q':
			transY += 0.2f;
			break; 
		case 'e':   //Caso e, E (Abajo)
		case 'E':
			transY -= 0.2f;
				break;
		case 27:        // Cuando Esc es presionado...
			exit ( 0 );   // Salimos del programa
		break;        
		default:        // Cualquier otra
		break;
  }
	glutPostRedisplay();
}

void arrow_keys ( int a_keys, int x, int y )  // Funcion para manejo de teclas especiales (arrow keys)
{
  switch ( a_keys ) {
    case GLUT_KEY_UP:     // Presionamos tecla ARRIBA...
		angleX += 1.0f;
		break;
      //glutFullScreen ( ); // Full Screen Mode
      //break;
    case GLUT_KEY_DOWN:               // Presionamos tecla ABAJO...
		angleX -= 1.0f;
		break;
      //glutReshapeWindow ( 500, 500 ); // Cambiamos tamano de Ventana
      //break;
	case GLUT_KEY_LEFT:
		angleY += 1.0f;
		break;
	case GLUT_KEY_RIGHT:
		angleY -= 1.0f;
		break;
    default:
      break;
  }
  glutPostRedisplay();
}


int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  //glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitDisplayMode (GLUT_RGB | GLUT_DOUBLE | GLUT_DEPTH); // Display Mode (Clores RGB y alpha | Buffer Doble )
  glutInitWindowSize  (1000, 700);	// Tama�o de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 3 Ejercicio Casa"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut funci�n de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut funci�n en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut funci�n de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



