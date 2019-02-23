//Semestre 2019 - 2
//************************************************************//
//Alumno: López Pérez Marcos Emiliano ************************//
//Practica #2 Ejercicio de casa						******//
//Microsoft Visual Studio 2017							******//
//************************************************************//
#include "Main.h"
void InitGL ( GLvoid )     // Inicializamos parametros
{
	//glShadeModel(GL_FLAT);							// Habilitamos Smooth Shading
	glClearColor(0.90f, 0.80f, 0.0f, 1.0f);				// (Color)  de fondo
	//glClearDepth(1.0f);									// Configuramos Depth Buffer
	//glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	
	
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer	
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();									// Reinicializamos la actual matriz Modelview

	//Poner aqui codigo ha dibujar
	/*La funcion de glBegin es la funcion principal para dibugar poligonos
	en este caso, se dibuja la cabeza de un perrito con poligonos, con colores
	lisos y un contorno negro ademas del fondo amarillo. */

	//Perrito
	//Cabeza
	glBegin(GL_POLYGON); 
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-3.0f, -3.0f, 0.0f);
	glVertex3f(4.0f, -3.0f, 0.0f);
	glVertex3f(4.0f, 5.0f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glEnd();

	//orejas
	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(4.0f, 1.0f, 0.0f);
	glVertex3f(7.0f, 1.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glVertex3f(4.0f, 4.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(1.0f, 1.0f, 1.0f);
	glVertex3f(-6.0f, 1.0f, 0.0f);
	glVertex3f(-3.0f, 1.0f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glVertex3f(-6.0f, 5.0f, 0.0f);
	glEnd();

	//Manchas

	glBegin(GL_POLYGON);
	glColor3f(0.7f, 0.10f, 0.2f);
	glVertex3f(-2.0f, -1.0f, 0.0f);
	glVertex3f(0.0f, -1.0f, 0.0f);
	glVertex3f(0.0f, 3.0f, 0.0f);
	glVertex3f(-3.0f, 3.0f, 0.0f);
	glVertex3f(-3.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, 0.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.70f, 0.10f, 0.20f);
	glVertex3f(3.0f, 3.0f, 0.0f);
	glVertex3f(7.0f, 3.0f, 0.0f);
	glVertex3f(7.0f, 5.0f, 0.0f);
	glVertex3f(3.0f, 5.0f, 0.0f);
	glEnd();

	//ojos
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, 2.0f, 0.0f);
	glVertex3f(-2.0f, 2.0f, 0.0f);
	glEnd();	
	
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(2.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, 2.0f, 0.0f);
	glVertex3f(2.0f, 2.0f, 0.0f);
	glEnd();

	//Contorno
	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, -4.0f, 0.0f);
	glVertex3f(3.0f, -4.0f, 0.0f);
	glVertex3f(3.0f, -3.0f, 0.0f);
	glVertex3f(-2.0f, -3.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(0.0f, -3.0f, 0.0f);
	glVertex3f(1.0f, -3.0f, 0.0f);
	glVertex3f(1.0f, -2.0f, 0.0f);
	glVertex3f(0.0f, -2.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-1.0f, -2.0f, 0.0f);
	glVertex3f(2.0f, -2.0f, 0.0f);
	glVertex3f(2.0f, -1.0f, 0.0f);
	glVertex3f(-1.0f, -1.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, -3.0f, 0.0f);
	glVertex3f(4.0f, -3.0f, 0.0f);
	glVertex3f(4.0f, -2.0f, 0.0f);
	glVertex3f(3.0f, -2.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(4.0f, -2.0f, 0.0f);
	glVertex3f(5.0f, -2.0f, 0.0f);
	glVertex3f(5.0f, 3.0f, 0.0f);
	glVertex3f(4.0f, 3.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, 1.0f, 0.0f);
	glVertex3f(6.0f, 1.0f, 0.0f);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glVertex3f(5.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(5.0f, 1.0f, 0.0f);
	glVertex3f(6.0f, 1.0f, 0.0f);
	glVertex3f(6.0f, 2.0f, 0.0f);
	glVertex3f(5.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(6.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, 1.0f, 0.0f);
	glVertex3f(6.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(7.0f, 0.0f, 0.0f);
	glVertex3f(8.0f, 0.0f, 0.0f);
	glVertex3f(8.0f, 4.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(6.0f, 4.0f, 0.0f);
	glVertex3f(7.0f, 4.0f, 0.0f);
	glVertex3f(7.0f, 5.0f, 0.0f);
	glVertex3f(6.0f, 5.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(4.0f, 5.0f, 0.0f);
	glVertex3f(6.0f, 5.0f, 0.0f);
	glVertex3f(6.0f, 6.0f, 0.0f);
	glVertex3f(4.0f, 6.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(3.0f, 4.0f, 0.0f);
	glVertex3f(4.0f, 4.0f, 0.0f);
	glVertex3f(4.0f, 5.0f, 0.0f);
	glVertex3f(3.0f, 5.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-2.0f, 5.0f, 0.0f);
	glVertex3f(3.0f, 5.0f, 0.0f);
	glVertex3f(3.0f, 6.0f, 0.0f);
	glVertex3f(-2.0f, 6.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, 4.0f, 0.0f);
	glVertex3f(-2.0f, 4.0f, 0.0f);
	glVertex3f(-2.0f, 5.0f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, 5.0f, 0.0f);
	glVertex3f(-3.0f, 5.0f, 0.0f);
	glVertex3f(-3.0f, 6.0f, 0.0f);
	glVertex3f(-5.0f, 6.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 4.0f, 0.0f);
	glVertex3f(-5.0f, 4.0f, 0.0f);
	glVertex3f(-5.0f, 5.0f, 0.0f);
	glVertex3f(-6.0f, 5.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-7.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 4.0f, 0.0f);
	glVertex3f(-7.0f, 4.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-6.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, 1.0f, 0.0f);
	glVertex3f(-6.0f, 1.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-5.0f, 1.0f, 0.0f);
	glVertex3f(-4.0f, 1.0f, 0.0f);
	glVertex3f(-4.0f, 2.0f, 0.0f);
	glVertex3f(-5.0f, 2.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-4.0f, -2.0f, 0.0f);
	glVertex3f(-3.0f, -2.0f, 0.0f);
	glVertex3f(-3.0f, 3.0f, 0.0f);
	glVertex3f(-4.0f, 3.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex3f(-3.0f, -3.0f, 0.0f);
	glVertex3f(-2.0f, -3.0f, 0.0f);
	glVertex3f(-2.0f, -2.0f, 0.0f);
	glVertex3f(-3.0f, -2.0f, 0.0f);
	glEnd();

	glFlush();
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

	// Ortogonal
	glOrtho(-15,15,-15,15,-1,2);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
	glLoadIdentity();									
}

// Termina la ejecucion del programa cuando se presiona ESC
void keyboard(unsigned char key, int x, int y)
{
	 switch (key) 
	 {
		case 27: exit(0);
				 break;
	 }
	  glutPostRedisplay();
}    

int main ( int argc, char** argv )   // Main Function
{
  glutInit            (&argc, argv); // Inicializamos OpenGL
  glutInitDisplayMode (GLUT_RGBA | GLUT_SINGLE); // Display Mode (Clores RGB y alpha | Buffer Sencillo )
  glutInitWindowSize  (500, 500);	// Tamaño de la Ventana
  glutInitWindowPosition (0, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 2 CasaMELP"); // Nombre de la Ventana
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc	  (keyboard);	//Indicamos a Glut función de manejo de teclado
  glutMainLoop        ( );          // 

  return 0;
}

