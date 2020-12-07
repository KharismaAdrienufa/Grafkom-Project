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

    //POHON
    //TRANSALATE sb y sebesar -0.7
    glTranslated(0,-0.7,0);
    glBegin(GL_POLYGON);
    glColor3b(45,110,62);
    glVertex2f(8.5,3); //titik pertama A4
    glVertex2f(8.2,3.05);
    glVertex2f(8,3);
    glVertex2f(7.75,2.8);
    glVertex2f(7.7,2.6);
    glVertex2f(7.7, 2.4);
    glVertex2f(7.75,2.2);
    glVertex2f(8,2); //titik kedua
    glVertex2f(7.95,1.8);
    glVertex2f(7.975, 1.6);
    glVertex2f(8.075, 1.4);
    glVertex2f(8.2, 1.3);
    glVertex2f(8.4,1.2);
    glVertex2f(8.6,1.2);
    glVertex2f(8.8,1.3);
    glVertex2f(9,1.5); //titik ketiga
    glVertex2f(9,1.2);
    glVertex2f(9.1, 1);
    glVertex2f(9.2,0.85);
    glVertex2f(9.4, 0.75);
    glVertex2f(9.6,0.7);
    glVertex2f(9.8, 0.75);
    glVertex2f(10, 0.8);
    glVertex2f(10.2,1);
    glVertex2f(10.3,1.2); //titik keempat
    glVertex2f(10.4,1.1);
    glVertex2f(10.6,1);
    glVertex2f(10.8,0.975);
    glVertex2f(11,1);
    glVertex2f(11.2,1.1);
    glVertex2f(11.3,1.2);
    glVertex2f(11.4,1.4);
    glVertex2f(11.45,1.6);
    glVertex2f(11.4,1.8);
    glVertex2f(11.3,2); //titik kelima
    glVertex2f(11.6,1.95);
    glVertex2f(11.8,2);
    glVertex2f(12,2.1);
    glVertex2f(12.1,2.2);
    glVertex2f(12.2,2.3);
    glVertex2f(12.3,2.6);
    glVertex2f(12.3,2.8);
    glVertex2f(12.2,3.05);
    glVertex2f(12,3.3);
    glVertex2f(11.8,3.4); //titik keenam
    glVertex2f(11.85,3.6);
    glVertex2f(11.85,3.8);
    glVertex2f(11.8,4);
    glVertex2f(11.7,4.2);
    glVertex2f(11.5,4.4);
    glVertex2f(11.2,4.5);
    glVertex2f(11,4.575);
    glVertex2f(10.8,4.5);
    glVertex2f(10.6,4.45);
    glVertex2f(10.4,4.3);
    glVertex2f(10.2,4); //titik ketujuh
    glVertex2f(10.25,4.2);
    glVertex2f(10.2,4.4);
    glVertex2f(10,4.6);
    glVertex2f(9.8,4.6);
    glVertex2f(9.6,4.5);
    glVertex2f(9.5,4.4); //titik kedelapan
    glVertex2f(9.2,4.5);
    glVertex2f(9,4.575);
    glVertex2f(8.8,4.5);
    glVertex2f(8.5,4.4);
    glVertex2f(8.3,4.2);
    glVertex2f(8.2,4);
    glVertex2f(8.15,3.8);
    glVertex2f(8.15,3.6);
    glVertex2f(8.2,3.4);
    glVertex2f(8.3,3.2);
    glEnd();


    //TRANSLASI terhadap sb x sebesar 15
    glTranslated(15,0,0);
    glBegin(GL_POLYGON);
    glColor3b(45,110,62);
    glVertex2f(8.5,3); //titik pertama A4
    glVertex2f(8.2,3.05);
    glVertex2f(8,3);
    glVertex2f(7.75,2.8);
    glVertex2f(7.7,2.6);
    glVertex2f(7.7, 2.4);
    glVertex2f(7.75,2.2);
    glVertex2f(8,2); //titik kedua
    glVertex2f(7.95,1.8);
    glVertex2f(7.975, 1.6);
    glVertex2f(8.075, 1.4);
    glVertex2f(8.2, 1.3);
    glVertex2f(8.4,1.2);
    glVertex2f(8.6,1.2);
    glVertex2f(8.8,1.3);
    glVertex2f(9,1.5); //titik ketiga
    glVertex2f(9,1.2);
    glVertex2f(9.1, 1);
    glVertex2f(9.2,0.85);
    glVertex2f(9.4, 0.75);
    glVertex2f(9.6,0.7);
    glVertex2f(9.8, 0.75);
    glVertex2f(10, 0.8);
    glVertex2f(10.2,1);
    glVertex2f(10.3,1.2); //titik keempat
    glVertex2f(10.4,1.1);
    glVertex2f(10.6,1);
    glVertex2f(10.8,0.975);
    glVertex2f(11,1);
    glVertex2f(11.2,1.1);
    glVertex2f(11.3,1.2);
    glVertex2f(11.4,1.4);
    glVertex2f(11.45,1.6);
    glVertex2f(11.4,1.8);
    glVertex2f(11.3,2); //titik kelima
    glVertex2f(11.6,1.95);
    glVertex2f(11.8,2);
    glVertex2f(12,2.1);
    glVertex2f(12.1,2.2);
    glVertex2f(12.2,2.3);
    glVertex2f(12.3,2.6);
    glVertex2f(12.3,2.8);
    glVertex2f(12.2,3.05);
    glVertex2f(12,3.3);
    glVertex2f(11.8,3.4); //titik keenam
    glVertex2f(11.85,3.6);
    glVertex2f(11.85,3.8);
    glVertex2f(11.8,4);
    glVertex2f(11.7,4.2);
    glVertex2f(11.5,4.4);
    glVertex2f(11.2,4.5);
    glVertex2f(11,4.575);
    glVertex2f(10.8,4.5);
    glVertex2f(10.6,4.45);
    glVertex2f(10.4,4.3);
    glVertex2f(10.2,4); //titik ketujuh
    glVertex2f(10.25,4.2);
    glVertex2f(10.2,4.4);
    glVertex2f(10,4.6);
    glVertex2f(9.8,4.6);
    glVertex2f(9.6,4.5);
    glVertex2f(9.5,4.4); //titik kedelapan
    glVertex2f(9.2,4.5);
    glVertex2f(9,4.575);
    glVertex2f(8.8,4.5);
    glVertex2f(8.5,4.4);
    glVertex2f(8.3,4.2);
    glVertex2f(8.2,4);
    glVertex2f(8.15,3.8);
    glVertex2f(8.15,3.6);
    glVertex2f(8.2,3.4);
    glVertex2f(8.3,3.2);
    glEnd();


    //TRANSLASI sb x=-8 sb y=26.6
    glTranslated(-8,26.6,0);
    glBegin(GL_POLYGON);
    glColor3b(45,110,62);
    glVertex2f(8.5,3); //titik pertama A4
    glVertex2f(8.2,3.05);
    glVertex2f(8,3);
    glVertex2f(7.75,2.8);
    glVertex2f(7.7,2.6);
    glVertex2f(7.7, 2.4);
    glVertex2f(7.75,2.2);
    glVertex2f(8,2); //titik kedua
    glVertex2f(7.95,1.8);
    glVertex2f(7.975, 1.6);
    glVertex2f(8.075, 1.4);
    glVertex2f(8.2, 1.3);
    glVertex2f(8.4,1.2);
    glVertex2f(8.6,1.2);
    glVertex2f(8.8,1.3);
    glVertex2f(9,1.5); //titik ketiga
    glVertex2f(9,1.2);
    glVertex2f(9.1, 1);
    glVertex2f(9.2,0.85);
    glVertex2f(9.4, 0.75);
    glVertex2f(9.6,0.7);
    glVertex2f(9.8, 0.75);
    glVertex2f(10, 0.8);
    glVertex2f(10.2,1);
    glVertex2f(10.3,1.2); //titik keempat
    glVertex2f(10.4,1.1);
    glVertex2f(10.6,1);
    glVertex2f(10.8,0.975);
    glVertex2f(11,1);
    glVertex2f(11.2,1.1);
    glVertex2f(11.3,1.2);
    glVertex2f(11.4,1.4);
    glVertex2f(11.45,1.6);
    glVertex2f(11.4,1.8);
    glVertex2f(11.3,2); //titik kelima
    glVertex2f(11.6,1.95);
    glVertex2f(11.8,2);
    glVertex2f(12,2.1);
    glVertex2f(12.1,2.2);
    glVertex2f(12.2,2.3);
    glVertex2f(12.3,2.6);
    glVertex2f(12.3,2.8);
    glVertex2f(12.2,3.05);
    glVertex2f(12,3.3);
    glVertex2f(11.8,3.4); //titik keenam
    glVertex2f(11.85,3.6);
    glVertex2f(11.85,3.8);
    glVertex2f(11.8,4);
    glVertex2f(11.7,4.2);
    glVertex2f(11.5,4.4);
    glVertex2f(11.2,4.5);
    glVertex2f(11,4.575);
    glVertex2f(10.8,4.5);
    glVertex2f(10.6,4.45);
    glVertex2f(10.4,4.3);
    glVertex2f(10.2,4); //titik ketujuh
    glVertex2f(10.25,4.2);
    glVertex2f(10.2,4.4);
    glVertex2f(10,4.6);
    glVertex2f(9.8,4.6);
    glVertex2f(9.6,4.5);
    glVertex2f(9.5,4.4); //titik kedelapan
    glVertex2f(9.2,4.5);
    glVertex2f(9,4.575);
    glVertex2f(8.8,4.5);
    glVertex2f(8.5,4.4);
    glVertex2f(8.3,4.2);
    glVertex2f(8.2,4);
    glVertex2f(8.15,3.8);
    glVertex2f(8.15,3.6);
    glVertex2f(8.2,3.4);
    glVertex2f(8.3,3.2);
    glEnd();


    //TRANSALASI
    glTranslated(-13,0,0);
    glBegin(GL_POLYGON);
    glColor3b(45,110,62);
    glVertex2f(8.5,3); //titik pertama A4
    glVertex2f(8.2,3.05);
    glVertex2f(8,3);
    glVertex2f(7.75,2.8);
    glVertex2f(7.7,2.6);
    glVertex2f(7.7, 2.4);
    glVertex2f(7.75,2.2);
    glVertex2f(8,2); //titik kedua
    glVertex2f(7.95,1.8);
    glVertex2f(7.975, 1.6);
    glVertex2f(8.075, 1.4);
    glVertex2f(8.2, 1.3);
    glVertex2f(8.4,1.2);
    glVertex2f(8.6,1.2);
    glVertex2f(8.8,1.3);
    glVertex2f(9,1.5); //titik ketiga
    glVertex2f(9,1.2);
    glVertex2f(9.1, 1);
    glVertex2f(9.2,0.85);
    glVertex2f(9.4, 0.75);
    glVertex2f(9.6,0.7);
    glVertex2f(9.8, 0.75);
    glVertex2f(10, 0.8);
    glVertex2f(10.2,1);
    glVertex2f(10.3,1.2); //titik keempat
    glVertex2f(10.4,1.1);
    glVertex2f(10.6,1);
    glVertex2f(10.8,0.975);
    glVertex2f(11,1);
    glVertex2f(11.2,1.1);
    glVertex2f(11.3,1.2);
    glVertex2f(11.4,1.4);
    glVertex2f(11.45,1.6);
    glVertex2f(11.4,1.8);
    glVertex2f(11.3,2); //titik kelima
    glVertex2f(11.6,1.95);
    glVertex2f(11.8,2);
    glVertex2f(12,2.1);
    glVertex2f(12.1,2.2);
    glVertex2f(12.2,2.3);
    glVertex2f(12.3,2.6);
    glVertex2f(12.3,2.8);
    glVertex2f(12.2,3.05);
    glVertex2f(12,3.3);
    glVertex2f(11.8,3.4); //titik keenam
    glVertex2f(11.85,3.6);
    glVertex2f(11.85,3.8);
    glVertex2f(11.8,4);
    glVertex2f(11.7,4.2);
    glVertex2f(11.5,4.4);
    glVertex2f(11.2,4.5);
    glVertex2f(11,4.575);
    glVertex2f(10.8,4.5);
    glVertex2f(10.6,4.45);
    glVertex2f(10.4,4.3);
    glVertex2f(10.2,4); //titik ketujuh
    glVertex2f(10.25,4.2);
    glVertex2f(10.2,4.4);
    glVertex2f(10,4.6);
    glVertex2f(9.8,4.6);
    glVertex2f(9.6,4.5);
    glVertex2f(9.5,4.4); //titik kedelapan
    glVertex2f(9.2,4.5);
    glVertex2f(9,4.575);
    glVertex2f(8.8,4.5);
    glVertex2f(8.5,4.4);
    glVertex2f(8.3,4.2);
    glVertex2f(8.2,4);
    glVertex2f(8.15,3.8);
    glVertex2f(8.15,3.6);
    glVertex2f(8.2,3.4);
    glVertex2f(8.3,3.2);
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
