
#include <GL/gl.h>
#include <GL/glext.h>
#include <GL/glut.h>
#include <math.h>

float theta1 = M_PI/4;
float theta2 = M_PI/4;
/*
void display(void)
{
	glClearColor(0.0,0.0,1.0,1.0);
	glClear(GL_COLOR_BUFFER_BIT);

	GLfloat x,y,r1=0.2,r2=0.5;

	glColor3f(1.0,0.0,0.0);
	x=r1*cos(theta1)+r2*cos(theta2);
	y=r1*sin(theta1)+r2*sin(theta2);

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glVertex2f(x,y);
	glEnd();

	glFlush();
	return;
}

void MyIdle()
{

	theta1 -= 0.01;
	theta2 -= 0.001;
	GLfloat x,y,r1=0.2,r2=0.5;
	x=r1*cos(theta1)+r2*cos(theta2);
	y=r1*sin(theta1)+r2*sin(theta2);

	glPointSize(3.0);
	glBegin(GL_POINTS);
	glVertex2f(x,y);
	glEnd();

	glFlush();
	return;

}

int main(int argc, char **argv)
{
	glutInit(&argc, argv);
	glutCreateWindow("epicycloid");
	glutDisplayFunc(display);
	glutIdleFunc(MyIdle);


	glutMainLoop();
}
*/
