#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //bodi mobil
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(8,6.3); //A
    glVertex2f(8,2.5); //B
    glVertex2f(14.6,2.5); //I
    glVertex2f(14.6,6.3); //M
    glEnd();

    //lampu depan bawah
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(8,2.5); //A
    glVertex2f(8.3,2.5); //B
    glVertex2f(8.3,3); //I
    glVertex2f(8,3); //M
    glEnd();

    //lampu depan atas
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(8,5.7); //A
    glVertex2f(8.3,5.7); //B
    glVertex2f(8.3,6.3); //I
    glVertex2f(8,6.3); //M
    glEnd();

    //roda bawah depan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(8.9,2.5); //A
    glVertex2f(8.9,2.1); //B
    glVertex2f(10,2.1); //I
    glVertex2f(10,2.5); //M
    glEnd();

    //roda bawah belakang
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.6,2.5); //A
    glVertex2f(12.6,2.1); //B
    glVertex2f(13.7,2.1); //I
    glVertex2f(13.7,2.5); //M
    glEnd();

    //lampu belakang bawah
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(14.6,2.5); //A
    glVertex2f(14.6,3.5); //B
    glVertex2f(14.3,3.5); //I
    glVertex2f(14.3,2.5); //M
    glEnd();

    //lampu belakang atas
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(14.6,6.3); //A
    glVertex2f(14.3,6.3); //B
    glVertex2f(14.3,6.3); //I
    glVertex2f(14.3,5.3); //M
    glEnd();

    //roda atas belakng
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.6,6.7); //A
    glVertex2f(13.7,6.7); //B
    glVertex2f(13.7,6.3); //I
    glVertex2f(12.6,6.3); //M
    glEnd();

    //roda atas drpan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(10,6.3); //A
    glVertex2f(10,6.7); //B
    glVertex2f(8.9,6.7); //I
    glVertex2f(8.9,6.3); //M
    glEnd();

    //kaca drpan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(9.4,6); //A
    glVertex2f(10.6,6); //B
    glVertex2f(10.6,3); //I
    glVertex2f(9.4,3); //M
    glEnd();


    glutSwapBuffers();
}

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("MOBIL"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0,30,0,30); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
