#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //kotak atap vertikal
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(9,10); //A
    glVertex2f(13,10); //B
    glVertex2f(13,1); //L
    glVertex2f(9,1); //M

    //kotak atap
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(7,9); //T
    glVertex2f(15,9); //E
    glVertex2f(15,2); //J
    glVertex2f(7,2); //O

    //kotak atap horizontal
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(6,7); //R
    glVertex2f(16,7); //G
    glVertex2f(16,4); //H
    glVertex2f(6,4); //Q

    //kaca depan kecil1
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(6,10); //V
    glVertex2f(7,10); //U
    glVertex2f(7,7); //S
    glVertex2f(6,7); //R

    //kaca depan kecil2
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(6,4); //Q
    glVertex2f(7,4); //P
    glVertex2f(7,1); //P1
    glVertex2f(6,1); //O1

    //kaca depan vertic
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(4,11); //Z
    glVertex2f(6,11); //W
    glVertex2f(6,0); //N1
    glVertex2f(4,0); //M1

    //kaca depan vertic2
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(3,10); //B1
    glVertex2f(4,10); //A1
    glVertex2f(4,1); //L1
    glVertex2f(3,1); //K1

    //kaca depan vertic3
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(2,9); //D1
    glVertex2f(3,9); //C1
    glVertex2f(3,2); //J1
    glVertex2f(2,2); //I1

    //kaca depan vertic4
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(1,7); //F1
    glVertex2f(2,7); //E1
    glVertex2f(2,4); //H1
    glVertex2f(1,4); //G1

    //kotak depan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-3,10); //U2
    glVertex2f(1,10); //U3
    glVertex2f(1,1); //V3
    glVertex2f(-3,1); //B3

    //kotak paling depan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-4,8); //W2
    glVertex2f(-3,8); //V2
    glVertex2f(-3,3); //A3
    glVertex2f(-4,3); //Z2

    //kotak kanan depan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-2,11); //S2
    glVertex2f(4,11); //Z
    glVertex2f(4,10); //A1
    glVertex2f(-2,10); //T2

    //kotak kanan depan kecil1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1,10); //U3
    glVertex2f(3,10); //B1
    glVertex2f(3,9); //C1
    glVertex2f(1,9); //W3

    //kotak kanan depan kecil2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1,9); //W3
    glVertex2f(2,9); //D1
    glVertex2f(2,7); //E1
    glVertex2f(1,7); //F1

    //kotak kiri depan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(-2,1); //C3
    glVertex2f(4,1); //L1
    glVertex2f(4,0); //M1
    glVertex2f(-2,0); //D3

    //kotak kiri depan kecil1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1,2); //Z3
    glVertex2f(3,2); //J1
    glVertex2f(3,1); //K1
    glVertex2f(1,1); //V3

    //kotak kiri depan kecil2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(1,4); //G1
    glVertex2f(2,4); //H1
    glVertex2f(2,2); //I1
    glVertex2f(1,2); //Z3

    //bemper depan kecil1
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-4,11); //E3
    glVertex2f(-2,11); //S2
    glVertex2f(-2,10); //T2
    glVertex2f(-4,10); //F3

    //bemper depan sedang1
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-5,10); //G3
    glVertex2f(-3,10); //U2
    glVertex2f(-3,8); //V2
    glVertex2f(-5,8); //H3

    //bemper depan
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-6,8); //I3
    glVertex2f(-4,8); //W2
    glVertex2f(-4,3); //Z2
    glVertex2f(-6,3); //L3

    //bemper depan sedang2
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(-5,3); //J3
    glVertex2f(-3,3); //A3
    glVertex2f(-3,1); //B3
    glVertex2f(-5,1); //K3

    //bemper depan kecil2
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-4,1); //M3
    glVertex2f(-2,1); //C3
    glVertex2f(-2,0); //D3
    glVertex2f(-4,0); //N3

    //kaca kanan1
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(6,11); //W
    glVertex2f(10,11); //A2
    glVertex2f(10,10); //C2
    glVertex2f(6,10); //V

    //kaca kanan kecil1
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(7,10); //U
    glVertex2f(9,10); //A
    glVertex2f(9,9); //D
    glVertex2f(7,9); //T

    //kaca kanan2
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(10,11); //A2
    glVertex2f(14,11); //B2
    glVertex2f(14,10); //D2
    glVertex2f(10,10); //C2

    //kaca kiri1
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(6,1); //O1
    glVertex2f(10,1); //G2
    glVertex2f(10,0); //H2
    glVertex2f(6,0); //N1

    //kaca kiri kecil1
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(7,2); //O
    glVertex2f(9,2); //N
    glVertex2f(9,1); //M
    glVertex2f(7,1); //P1

    //kaca kiri2
    glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(10,1); //G2
    glVertex2f(14,1); //I2
    glVertex2f(14,0); //J2
    glVertex2f(10,0); //H2

    //kotak belakang1
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(15,10); //Q1
    glVertex2f(18,10); //R1
    glVertex2f(18,7); //O3
    glVertex2f(15,7); //F

    //kotak belakang2
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(16,7); //G
    glVertex2f(18,7); //O3
    glVertex2f(18,4); //R3
    glVertex2f(16,4); //H

    //kotak belakang3
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(15,4); //I
    glVertex2f(18,4); //R3
    glVertex2f(18,1); //W1
    glVertex2f(15,1); //Z1

    //bemper belakang
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(18,9); //S1
    glVertex2f(19,9); //T1
    glVertex2f(19,2); //U1
    glVertex2f(18,2); //V1

    //samping kanan belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(14,11); //B2
    glVertex2f(17,11); //E2
    glVertex2f(17,10); //F2
    glVertex2f(14,10); //D2

    //samping kanan
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(13,10); //B
    glVertex2f(15,10); //Q1
    glVertex2f(15,9); //E
    glVertex2f(13,9); //C

    //samping kiri belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(14,1); //I2
    glVertex2f(17,1); //L2
    glVertex2f(17,0); //K2
    glVertex2f(14,0); //J2

    //samping kiri
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(13,2); //K
    glVertex2f(15,2); //J
    glVertex2f(15,1); //Z1
    glVertex2f(13,1); //L

    //lighting1 vertic
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18,10); //R1
    glVertex2f(18.5,10); //S3
    glVertex2f(18.5,9); //O2
    glVertex2f(18,9); //S1

    //lighting1 horizon
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(17,10.5); //M2
    glVertex2f(18.5,10.5); //N2
    glVertex2f(18.5,10); //S3
    glVertex2f(17,10); //F2

    //lighting1 vertic
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18,10); //R1
    glVertex2f(18.5,10); //S3
    glVertex2f(18.5,9); //O2
    glVertex2f(18,9); //S1

    //lighting2 horizon
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(17,1); //L2
    glVertex2f(18.5,1); //T3
    glVertex2f(18.5,0.5); //Q2
    glVertex2f(17,0.5); //P2

    //lighting2 vertic
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18,2); //V1
    glVertex2f(18.5,2); //R2
    glVertex2f(18.5,1); //T3
    glVertex2f(18,1); //W1

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
	gluOrtho2D(-40,40,-30,30); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
