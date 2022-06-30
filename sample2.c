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
	glLineWidth(2.0);
	glColor3f(1.0,1.0,0.0);
	glBegin(GL_LINE_STRIP);
	glVertex2i(50,40);
	glVertex2i(60,70);
	glVertex2i(100,50);
	glEnd();
	glBegin(GL_LINE_LOOP);
	glVertex2i(120,40);
	glVertex2i(140,70);
	glVertex2i(160,50);
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
