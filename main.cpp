#include <GL/glut.h>  // GLUT, include glu.h and gl.h

void init(){
  glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
  glutInitWindowSize(640,480);
  glutInitWindowPosition(0,0);
  glutCreateWindow("My GUI App");
}

void display(){
  glClearColor(1.0,1.0,1.0,0.0);
  glClear(GL_COLOR_BUFFER_BIT);
  glFlush();
}

int main(int argc,char **argv){
  glutInit(&argc,argv);
  init();
  glutDisplayFunc(display);
  glutMainLoop();	
  return 0;
}
