//Semestre 2017 - 2
//************************************************************//
//************************************************************//
//************* Alumno: López Pérez Marcos Emiliano *********//
//*************	Práctica #4 Ejercicio Casa ******************//
//*************	Microsoft Visual Studio 2017 *****************//
//************************************************************//
#include "Main.h"

float angX = 0.0f;
float angY = 0.0f;
float transZ = -5.0f;
int screenW = 0.0;
int screenH = 0.0;


void InitGL ( void )     // Inicializamos parametros
{

	//glShadeModel(GL_SMOOTH);							// Habilitamos Smooth Shading
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f);				// Negro de fondo
	glClearDepth(1.0f);									// Configuramos Depth Buffer
	glEnable(GL_DEPTH_TEST);							// Habilitamos Depth Testing
	//glEnable(GL_LIGHTING);
	glDepthFunc(GL_LEQUAL);								// Tipo de Depth Testing a realizar
	//glEnable ( GL_COLOR_MATERIAL );
	glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);
}

void prisma(void)    //Función a la que se transforma para colocar cada cubo
{
	GLfloat vertice [8][3] = {
				{0.5 ,-0.5, 0.5},    //Coordenadas Vértice 0 V0
				{-0.5 ,-0.5, 0.5},    //Coordenadas Vértice 1 V1
				{-0.5 ,-0.5, -0.5},    //Coordenadas Vértice 2 V2
				{0.5 ,-0.5, -0.5},    //Coordenadas Vértice 3 V3
				{0.5 ,0.5, 0.5},    //Coordenadas Vértice 4 V4
				{0.5 ,0.5, -0.5},    //Coordenadas Vértice 5 V5
				{-0.5 ,0.5, -0.5},    //Coordenadas Vértice 6 V6
				{-0.5 ,0.5, 0.5},    //Coordenadas Vértice 7 V7
				};

		glBegin(GL_POLYGON);	//Front
		//	glColor3f(1.0,0.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[1]);
		glEnd();

		glBegin(GL_POLYGON);	//Right
		//	glColor3f(1.0,1.0,0.0);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[4]);
		glEnd();

		glBegin(GL_POLYGON);	//Back
		//	glColor3f(0.0,1.0,0.0);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[3]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Left
		//	glColor3f(1.0,0.2,0.60);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[7]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[2]);
		glEnd();

		glBegin(GL_POLYGON);  //Bottom
		//	glColor3f(0.4,0.2,0.6);
			glVertex3fv(vertice[0]);
			glVertex3fv(vertice[1]);
			glVertex3fv(vertice[2]);
			glVertex3fv(vertice[3]);
		glEnd();

		glBegin(GL_POLYGON);  //Top
		//	glColor3f(0.0,0.0,1.0);
			glVertex3fv(vertice[4]);
			glVertex3fv(vertice[5]);
			glVertex3fv(vertice[6]);
			glVertex3fv(vertice[7]);
		glEnd();
}

void display ( void )   // Creamos la funcion donde se dibuja
{
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	// Limiamos pantalla y Depth Buffer
	//glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();

		glTranslatef(0.0f, 0.0f, transZ);

		glRotatef(angY, 0, 1, 0);      //Rotar a gusto
		glRotatef(angX, 1, 0, 0);

//Poner Código Aquí.

	//Prisma original, Cabeza
		glColor3f(1.0, 1.0, 1.0);
		glTranslatef(0, 5, 0); 
		glScalef(3, 3, 3);
		prisma();
	//Cuello
		glColor3f(1.0, 0.2, 0.60);
		glTranslatef(0, -0.5, 0);
		glScalef(0.6, 0.3, 0.6);
		prisma();	
	//Cuerpo
		glColor3f(0.1, 0.2, 1.0);
		glScalef(3.0, 6.0, 3.0);
		glTranslatef(0, -0.57, 0);
		prisma();
	//Brazo(s)
		//1D
		glColor3f(0.0, 0.9, 0.0);
		glScalef(0.20, 0.30, 0.30);
		glTranslatef(3.0, 1.2, 0);
		prisma();
		//1I
		glTranslatef(-6.0, 0, 0);
		prisma();
		//2D
		glColor3f(1.0, 0.9, 0.0);
		glTranslatef(7.62, 0.0, 0.0);
		glScalef(2.3, 1.0, 1.0);
		prisma();
		//2I
		glTranslatef(-4.02, 0.0, 0.0);
		prisma();
		//3D
		glColor3f(1.0, 0.20, 0.10);
		glScalef(0.9, 1.0, 1.0);
		glTranslatef(5.52, 0, 0);
		prisma();
		//3I
		glTranslatef(-6.57, 0, 0);
		prisma();
		//4D
		glColor3f(1.0, 1.0, 1.0);
		glScalef(0.6, 1.0, 1.0);
		glTranslatef(12.24, 0, 0);
		prisma();
		//4I
		glTranslatef(-13.59, 0, 0);
		prisma();
		
		//pierna(s)
		//1D
		glTranslatef(6.785, 0, 0);
		glColor3f(1.0, 0.20, 0.10);
		glScalef(1.30, 2.0, 1.0);
		glTranslatef(1.08, -1.93, 0);
		prisma();
		//1I
		glTranslatef(-2.08, 0.0, 0);
		prisma();
		//2I
		glTranslatef(0, -0.63, 0);
		glColor3f(0.0, 0.80, 0.0);
		glScalef(1.0, 0.25, 1.0);
		prisma();
		//2D
		glTranslatef(2.08, 0, 0);
		prisma();
		//3D
		glTranslatef(0, -1.5, 0);
		glColor3f(0.0, 0.0, 0.75);
		glScalef(1.0, 2.0, 1.0);
		prisma();
		//3I
		glTranslatef(-2.08, 0, 0);
		prisma();
		//4I
		glTranslatef(-0.3, -0.65, 0);
		glColor3f(0.10, 0.0, 0.0);
		glScalef(1.70, 0.25, 1.0);
		prisma();
		//4D
		glTranslatef(1.6, 0, 0);
		prisma();
	/*	glColor3f(1.0, 0.2, 0.60);
		glRotatef(-90, 1, 0, 0);
		glRotatef(90, 0, 0, 1);
		glTranslatef(0, 0, -1);
		glRotatef(90, 1, 0, 0);
		glRotatef(90, 0, 1, 0);
		prisma();	*/ //Ejemplo transformaciones
  											
  glutSwapBuffers ( );
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

	// Tipo de Vista
	//glOrtho(-5,5,-5,5,0.2,20);	
	glFrustum (-0.1, 0.1,-0.1, 0.1, 0.1, 50.0);

	glMatrixMode(GL_MODELVIEW);							// Seleccionamos Modelview Matrix
}

void keyboard ( unsigned char key, int x, int y )  // Create Keyboard Function
{
	switch ( key ) {
		case 'w':
		case 'W':
			transZ +=0.3f;
			break;
		case 's':
		case 'S':
			transZ -= 0.3f;
			break;
		case 'a':
		case 'A':
			
			break;
		case 'd':
		case 'D':
	
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
    case GLUT_KEY_UP:		// Presionamos tecla ARRIBA...
		angX += 1.5f;
		break;
    case GLUT_KEY_DOWN:		// Presionamos tecla ABAJO...
		angX -= 1.5f;
		break;
	case GLUT_KEY_LEFT:
		angY += 1.5f;
		break;
	case GLUT_KEY_RIGHT:
		angY -= 1.5f;
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
  screenW = glutGet(GLUT_SCREEN_WIDTH);
  screenH = glutGet(GLUT_SCREEN_HEIGHT);
  glutInitWindowSize  (550, 550);	// Tamaño de la Ventana
  glutInitWindowPosition (500, 0);	//Posicion de la Ventana
  glutCreateWindow    ("Practica 4"); // Nombre de la Ventana
  printf("Resolution H: %i \n", screenW);
  printf("Resolution V: %i \n", screenH);
  InitGL ();						// Parametros iniciales de la aplicacion
  glutDisplayFunc     ( display );  //Indicamos a Glut función de dibujo
  glutReshapeFunc     ( reshape );	//Indicamos a Glut función en caso de cambio de tamano
  glutKeyboardFunc    ( keyboard );	//Indicamos a Glut función de manejo de teclado
  glutSpecialFunc     ( arrow_keys );	//Otras
  glutMainLoop        ( );          // 

  return 0;
}



