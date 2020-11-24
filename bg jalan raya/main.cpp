#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(728, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("KODOK"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0,10,0,10); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //rumput
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(0,26);
    glVertex2f(30,26);
    glVertex2f(0,0);
    glVertex2f(30,0);
    glEnd();

    //garis kuning bawah sendiri
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(30,2.5);
    glVertex2f(0,2.5);
    glVertex2f(0,3.5);
    glVertex2f(30,3.5);
    glEnd();

    //garis kuning bawah sendiri no 2
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(30,7.8);
    glVertex2f(0,7.8);
    glVertex2f(0,8.8);
    glVertex2f(30,8.8);
    glEnd();

    //garis kuning bawah sendiri no 3
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(30,13);
    glVertex2f(0,13);
    glVertex2f(0,14);
    glVertex2f(30,14);
    glEnd();

    //garis kuning bawah sendiri no 4
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(30,18);
    glVertex2f(0,18);
    glVertex2f(0,19);
    glVertex2f(30,19);
    glEnd();

    //garis KUNING ATAS SENDIRI
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(30,23);
    glVertex2f(0,23);
    glVertex2f(0,24);
    glVertex2f(30,24);
    glEnd();

    //garis ABU ABU
    glBegin(GL_QUADS);
    glColor3b(45,110,62);
    glVertex2f(30,23);
    glVertex2f(0,23);
    glVertex2f(0,3.5);
    glVertex2f(30,3.5);
    glEnd();




    glEnd();

    glutSwapBuffers();
}
