#include <windows.h>
#include <GL/glut.h>
#define PI          3.141516
#include<math.h>

void display() {



    glClear(GL_COLOR_BUFFER_BIT);
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f);
       glBegin(GL_QUADS);  //Blue quad
	glColor3f(0.3f, 0.0f, 1.0f);
	glVertex2f(-1.0f, -0.1f);
	glVertex2f(1.0f, -0.1f);
	glVertex2f(1.0f, -1.0f);
	glVertex2f(-1.0f, -1.0f);

	glEnd();

	glBegin(GL_QUADS); //lemon quad
	glColor3f(0.5f, 1.0f, 0.0f);
	glVertex2f(-1.0f, 0.3f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(1.0f, -0.1);
	glVertex2f(-1.0f, -0.1f);

	glEnd();


	glBegin(GL_QUADS); //ups light blue quad
	glColor3f(0.0f, 1.0f, 1.0f);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.3f);
	glVertex2f(-1.0f, 0.3f);

	glEnd();

	glBegin(GL_TRIANGLES); // left triangle
	glColor3f(0.0f, 0.4f, 0.0f);

	glVertex2f(-0.9f, 0.1f);
	glVertex2f(-0.75f, 0.6f);
	glVertex2f(-0.6f,  0.1f);

	glEnd();

glBegin(GL_TRIANGLES); //right triangle
	glColor3f(0.0f, 0.4f, 0.0f);

	glVertex2f(-0.5f, 0.1f);
	glVertex2f(-0.35f, 0.6f);
	glVertex2f(-0.2f,  0.1f);

	glEnd();

	glBegin(GL_TRIANGLES); //middle triangle
	glColor3f(0.0f, 0.4f, 0.0f);

	glVertex2f(-0.75f, 0.15f);
	glVertex2f(-0.55f, 0.5f);
	glVertex2f(-0.35f,  0.15f);

	glEnd();


	glBegin(GL_QUADS); //quad right tree
	glColor3f(0.0f, 0.4f, .0f);
	glVertex2f(0.8f, 0.3f);
	glVertex2f(0.8f, 0.4f);
	glVertex2f(0.85f,0.4f);
	glVertex2f(0.85f,0.3f);

	glEnd();

	glBegin(GL_TRIANGLES); //triangle tree down
	glColor3f(0.0f, 0.4f, 0.0f);

	glVertex2f(0.7f, 0.4f);
	glVertex2f(0.825f, 0.6f);
	glVertex2f(0.95f,  0.4f);

	glEnd();

	glBegin(GL_TRIANGLES); //triangle tree up
	glColor3f(0.0f, 0.4f, 0.0f);

	glVertex2f(0.71f, 0.5f);
	glVertex2f(0.825f, 0.65f);
	glVertex2f(0.94f,  0.5f);

	glEnd();










	int i;

    GLfloat p1=0.65f; GLfloat q1= 0.7f; GLfloat r1 = 0.15f;
    int tringle2=40;

    GLfloat tp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (p1,q1);
    for(i= 0;i<=tringle2; i++)
    {
        glVertex2f (
                    p1+(r1*cos(i*tp2/tringle2)),
                    q1+(r1*sin(i*tp2/tringle2))
                    );


    }
    glEnd ();

    int j;

    GLfloat pp1=0.45f; GLfloat qq1= 0.7f; GLfloat rr1 = 0.20f;
    int ttringle2=40;

    GLfloat ttp2 =2.0f *PI;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (pp1,qq1);
    for(j= 0;j<=tringle2; j++)
    {
        glVertex2f (
                    pp1+(rr1*cos(j*ttp2/tringle2)),
                    qq1+(rr1*sin(j*ttp2/tringle2))
                    );


    }
    glEnd ();

    int k;

    GLfloat ppp1=0.25f; GLfloat qqq1= 0.7f; GLfloat rrr1 = 0.15f;
    int tttringle2=40;

    GLfloat tttp2 =2.0f * PI  ;

    glBegin (GL_TRIANGLE_FAN);
    glColor3ub ( 255,255,255);
    glVertex2f (ppp1,qqq1);
    for(k= 0;k<=tttringle2; k++)
    {
        glVertex2f (
                    ppp1+(rrr1*cos(k*tttp2/tttringle2)),
                    qqq1+(rrr1*sin(k*tttp2/tttringle2))
                    );


    }
    glEnd ();

    glFlush();

}





int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitWindowSize(900, 600);

glutCreateWindow("Circle");


glutInitWindowPosition(10,10);

glutDisplayFunc(display);

glutMainLoop();

return 0;

}
