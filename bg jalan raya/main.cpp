#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //rumput atas
    glBegin(GL_POLYGON);
    glColor3f(0.133, 0.545, 0.008);
    glVertex2f(0,31);
    glVertex2f(30,31);
    glVertex2f(30,28);
    glVertex2f(0,28);
    glEnd();

    //garis kuning 1
    glBegin(GL_POLYGON);
    glColor3f(1, 0.933, 0.322);
    glVertex2f(0,28);
    glVertex2f(0,27);
    glVertex2f(30,27);
    glVertex2f(30,28);
    glEnd();

    //jalan raya 1
    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(0,27);
    glVertex2f(0,22);
    glVertex2f(30,22);
    glVertex2f(30,27);
    glEnd();

    //garis kuning 2
    glBegin(GL_POLYGON);
    glColor3f(1, 0.933, 0.322);
    glVertex2f(0,22);
    glVertex2f(0,21);
    glVertex2f(30,21);
    glVertex2f(30,22);
    glEnd();

    //jalan raya 2
    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(0,21);
    glVertex2f(0,16);
    glVertex2f(30,16);
    glVertex2f(30,21);
    glEnd();

    //garis kuning 3
    glBegin(GL_POLYGON);
    glColor3f(1, 0.933, 0.322);
    glVertex2f(30,16);
    glVertex2f(30,15);
    glVertex2f(0,15);
    glVertex2f(0,16);
    glEnd();

    //jalan raya 3
    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(0,15);
    glVertex2f(0,10);
    glVertex2f(30,10);
    glVertex2f(30,15);
    glEnd();

    //garis kuning 4
    glBegin(GL_POLYGON);
    glColor3f(1, 0.933, 0.322);
    glVertex2f(0,10);
    glVertex2f(0,9);
    glVertex2f(30,9);
    glVertex2f(30,10);
    glEnd();

    //jalan raya 4
    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(0,9);
    glVertex2f(0,4);
    glVertex2f(30,4);
    glVertex2f(30,9);
    glEnd();

    //garis kuning 5
    glBegin(GL_POLYGON);
    glColor3f(1, 0.933, 0.322);
    glVertex2f(0,4);
    glVertex2f(0,3);
    glVertex2f(30,3);
    glVertex2f(30,4);
    glEnd();

    //rumput bawah
    glBegin(GL_POLYGON);
    glColor3f(0.133, 0.545, 0.008);
    glVertex2f(0,3);
    glVertex2f(0,0);
    glVertex2f(30,0);
    glVertex2f(30,3);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(1,7);
    glVertex2f(5,7);
    glVertex2f(5,6);
    glVertex2f(1,6);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(7,7);
    glVertex2f(11,7);
    glVertex2f(11,6);
    glVertex2f(7,6);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(13,7);
    glVertex2f(17,7);
    glVertex2f(17,6);
    glVertex2f(13,6);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(19,7);
    glVertex2f(23,7);
    glVertex2f(23,6);
    glVertex2f(19,6);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,7);
    glVertex2f(29,7);
    glVertex2f(29,6);
    glVertex2f(25,6);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,7);
    glVertex2f(29,7);
    glVertex2f(29,6);
    glVertex2f(25,6);
    glEnd();

     //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(1,13);
    glVertex2f(5,13);
    glVertex2f(5,12);
    glVertex2f(1,12);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(7,13);
    glVertex2f(11,13);
    glVertex2f(11,12);
    glVertex2f(7,12);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(13,13);
    glVertex2f(17,13);
    glVertex2f(17,12);
    glVertex2f(13,12);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(19,13);
    glVertex2f(23,13);
    glVertex2f(23,12);
    glVertex2f(19,12);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,13);
    glVertex2f(29,13);
    glVertex2f(29,12);
    glVertex2f(25,12);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,13);
    glVertex2f(29,13);
    glVertex2f(29,12);
    glVertex2f(25,12);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(1,19);
    glVertex2f(5,19);
    glVertex2f(5,18);
    glVertex2f(1,18);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(7,19);
    glVertex2f(11,19);
    glVertex2f(11,18);
    glVertex2f(7,18);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(13,19);
    glVertex2f(17,19);
    glVertex2f(17,18);
    glVertex2f(13,18);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(19,19);
    glVertex2f(23,19);
    glVertex2f(23,18);
    glVertex2f(19,18);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,19);
    glVertex2f(29,19);
    glVertex2f(29,18);
    glVertex2f(25,18);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,19);
    glVertex2f(29,19);
    glVertex2f(29,18);
    glVertex2f(25,18);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(1,25);
    glVertex2f(5,25);
    glVertex2f(5,24);
    glVertex2f(1,24);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(7,25);
    glVertex2f(11,25);
    glVertex2f(11,24);
    glVertex2f(7,24);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(13,25);
    glVertex2f(17,25);
    glVertex2f(17,24);
    glVertex2f(13,24);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(19,25);
    glVertex2f(23,25);
    glVertex2f(23,24);
    glVertex2f(19,24);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,25);
    glVertex2f(29,25);
    glVertex2f(29,24);
    glVertex2f(25,24);
    glEnd();

    //garis tengah abu abu
    glBegin(GL_POLYGON);
    glColor3b(105,105,105);
    glVertex2f(25,25);
    glVertex2f(29,25);
    glVertex2f(29,24);
    glVertex2f(25,24);
    glEnd();

    glutSwapBuffers();
}

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("Jalan"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0,30,0,31); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
