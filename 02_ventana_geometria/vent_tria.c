#include <GL/glut.h>

void dibujar(void)
{
  //COLOR DEL FONDO DE LA VENTANA
  glClearColor(0,0.2,1,0);
  glClear(GL_COLOR_BUFFER_BIT );

  glBegin(GL_TRIANGLES); 
  glVertex3f(0, 1, 0);	//PRIMER VÉRTICE
  glVertex3f(-1, 0, 0); //SEGUNDO VÉRTICE
  glVertex3f(1, 0, 1); //TERCER VÉRTICE	
  glEnd();
  glFlush();
	
}

int main(int argc, char **argv)
{
  glutInit(&argc, argv);

  //BUFFER
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
  glutInitWindowPosition(100,25); //POSICIÓN DE LA VENTANA
  glutInitWindowSize(800,650); //TAMAÑO DE LA VENTANA
  glutCreateWindow("Ventana triangulos");
  //SE LLAMA A LA FUNCIÓN "DIBUJAR"
  glutDisplayFunc(dibujar);
  glutMainLoop();
  return 0;

}
