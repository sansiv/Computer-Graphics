#include<GL/glut.h>
void myInit()
{
	glClearColor(0.0,0.0,0.0,0.0);
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0,200.0,0.0,200.0);
}

void line()
{
glLineWidth(10.0);
glColor3f(1.0,2.0,0.0);
glBegin(GL_LINES);
glVertex2i(60,60);
glVertex2i(60,20);
glEnd();
glFlush();
}

void main(int argc, char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(600,600);
	glutCreateWindow("MY FIRST CG PROGRAM");
	glutDisplayFunc(line);
	myInit();
	glutMainLoop();
}

