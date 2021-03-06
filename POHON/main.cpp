#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

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
	glutCreateWindow("KODOK"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0,30,0,31); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}

