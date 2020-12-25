#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //kotak
    glBegin(GL_POLYGON);
    glColor3f(0.557,0.929,0.863);
    glVertex2f(10,15); //D
    glVertex2f(20,15); //C
    glVertex2f(20.2,14.9); //K
    glVertex2f(20.4,14.7); //L
    glVertex2f(20.5,14.5); //H
    glVertex2f(20.5,10.5); //G
    glVertex2f(20.4,10.3); //M
    glVertex2f(20.2,10.1); //N
    glVertex2f(20,10); //B
    glVertex2f(10,10); //A
    glVertex2f(9.8,10.1); //P
    glVertex2f(9.6,10.3); //O
    glVertex2f(9.5,10.5); //F
    glVertex2f(9.5,14.5); //E
    glVertex2f(9.6,14.7); //J
    glVertex2f(9.8,14.9); //I
    glEnd();

    //outline kotak
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(10,15); //D
    glVertex2f(20,15); //C
    glVertex2f(20.2,14.9); //K
    glVertex2f(20.4,14.7); //L
    glVertex2f(20.5,14.5); //H
    glVertex2f(20.5,10.5); //G
    glVertex2f(20.4,10.3); //M
    glVertex2f(20.2,10.1); //N
    glVertex2f(20,10); //B
    glVertex2f(10,10); //A
    glVertex2f(9.8,10.1); //P
    glVertex2f(9.6,10.3); //O
    glVertex2f(9.5,10.5); //F
    glVertex2f(9.5,14.5); //E
    glVertex2f(9.6,14.7); //J
    glVertex2f(9.8,14.9); //I
    glEnd();

   //lampu merah
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(13,14.6); //Q
    glVertex2f(13.24,14.56); //I2
    glVertex2f(13.44,14.44); //F1
    glVertex2f(13.64,14.25); //L2
    glVertex2f(13.7,14); //W
    glVertex2f(13.64,13.74); //M2
    glVertex2f(13.45,13.54); //E1
    glVertex2f(13.24,13.43); //N2
    glVertex2f(13,13.4); //U
    glVertex2f(12.74,13.42); //O2
    glVertex2f(12.55,13.54); //I1
    glVertex2f(12.34,13.74); //P2
    glVertex2f(12.3,14); //S
    glVertex2f(12.35,14.24); //K2
    glVertex2f(12.54,14.45); //J1
    glVertex2f(12.75,14.56); //J2
    glEnd();

    //outline lampu merah
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(13,14.6); //Q
    glVertex2f(13.24,14.56); //I2
    glVertex2f(13.44,14.44); //F1
    glVertex2f(13.64,14.25); //L2
    glVertex2f(13.7,14); //W
    glVertex2f(13.64,13.74); //M2
    glVertex2f(13.45,13.54); //E1
    glVertex2f(13.24,13.43); //N2
    glVertex2f(13,13.4); //U
    glVertex2f(12.74,13.42); //O2
    glVertex2f(12.55,13.54); //I1
    glVertex2f(12.34,13.74); //P2
    glVertex2f(12.3,14); //S
    glVertex2f(12.35,14.24); //K2
    glVertex2f(12.54,14.45); //J1
    glVertex2f(12.75,14.56); //J2
    glEnd();

    //lampu kuning
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(15,14.6); //V
    glVertex2f(15.24,14.57); //B2
    glVertex2f(15.44,14.45); //H1
    glVertex2f(15.64,14.25); //A2
    glVertex2f(15.7,14); //R
    glVertex2f(15.64,13.74); //F2
    glVertex2f(15.44,13.55); //K1
    glVertex2f(15.24,13.42); //G2
    glVertex2f(15,13.4); //T
    glVertex2f(14.74,13.43); //H2
    glVertex2f(14.54,13.55); //L1
    glVertex2f(14.35,13.74); //E2
    glVertex2f(14.3,14); //Z
    glVertex2f(14.34,14.25); //D2
    glVertex2f(14.55,14.44); //G1
    glVertex2f(14.75,14.57); //C2
    glEnd();

     //outline lampu kuning
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(15,14.6); //V
    glVertex2f(15.24,14.57); //B2
    glVertex2f(15.44,14.45); //H1
    glVertex2f(15.64,14.25); //A2
    glVertex2f(15.7,14); //R
    glVertex2f(15.64,13.74); //F2
    glVertex2f(15.44,13.55); //K1
    glVertex2f(15.24,13.42); //G2
    glVertex2f(15,13.4); //T
    glVertex2f(14.74,13.43); //H2
    glVertex2f(14.54,13.55); //L1
    glVertex2f(14.35,13.74); //E2
    glVertex2f(14.3,14); //Z
    glVertex2f(14.34,14.25); //D2
    glVertex2f(14.55,14.44); //G1
    glVertex2f(14.75,14.57); //C2
    glEnd();

    //lampu hijau
    glBegin(GL_POLYGON);
    glColor3f(0.0,1.0,0.0);
    glVertex2f(17,14.6); //A1
    glVertex2f(17.24,14.57); //W1
    glVertex2f(17.45,14.44); //N1
    glVertex2f(17.65,14.25); //Z1
    glVertex2f(17.7,14); //D1
    glVertex2f(17.65,13.75); //S1
    glVertex2f(17.45,13.55); //O1
    glVertex2f(17.25,13.42); //Q1
    glVertex2f(17,13.4); //C1
    glVertex2f(16.74,13.43); //R1
    glVertex2f(16.54,13.55); //P1
    glVertex2f(16.35,13.74); //T1
    glVertex2f(16.3,14); //B1
    glVertex2f(16.35,14.24); //U1
    glVertex2f(16.55,14.44); //M1
    glVertex2f(16.74,14.57); //V1
    glEnd();

    //outline lampu hijau
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(17,14.6); //A1
    glVertex2f(17.24,14.57); //W1
    glVertex2f(17.45,14.44); //N1
    glVertex2f(17.65,14.25); //Z1
    glVertex2f(17.7,14); //D1
    glVertex2f(17.65,13.75); //S1
    glVertex2f(17.45,13.55); //O1
    glVertex2f(17.25,13.42); //Q1
    glVertex2f(17,13.4); //C1
    glVertex2f(16.74,13.43); //R1
    glVertex2f(16.54,13.55); //P1
    glVertex2f(16.35,13.74); //T1
    glVertex2f(16.3,14); //B1
    glVertex2f(16.35,14.24); //U1
    glVertex2f(16.55,14.44); //M1
    glVertex2f(16.74,14.57); //V1
    glEnd();

   //F
    glBegin(GL_POLYGON);
    glColor3f(0.561,0.871,0.522);
    glVertex2f(10,13); //Q2
    glVertex2f(10.6,13); //S2
    glVertex2f(10.6,12.8); //T2
    glVertex2f(10.2,12.8); //U2
    glVertex2f(10.2,12.6); //V2
    glVertex2f(10.6,12.6); //W2
    glVertex2f(10.6,12.4); //Z2
    glVertex2f(10.2,12.4); //A3
    glVertex2f(10.2,12); //B3
    glVertex2f(10,12); //R2
    glEnd();

    //outline F
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(10,13); //Q2
    glVertex2f(10.6,13); //S2
    glVertex2f(10.6,12.8); //T2
    glVertex2f(10.2,12.8); //U2
    glVertex2f(10.2,12.6); //V2
    glVertex2f(10.6,12.6); //W2
    glVertex2f(10.6,12.4); //Z2
    glVertex2f(10.2,12.4); //A3
    glVertex2f(10.2,12); //B3
    glVertex2f(10,12); //R2
    glEnd();

    //R
    glBegin(GL_POLYGON);
    glColor3f(0.561,0.871,0.522);
    glVertex2f(10.8,13); //C3
    glVertex2f(11,13); //N3
    glVertex2f(11.19,12.95); //M3
    glVertex2f(11.33,12.89); //L3
    glVertex2f(11.38,12.74); //K3
    glVertex2f(11.34,12.61); //J3
    glVertex2f(11.21,12.5); //O3
    glVertex2f(11.12,12.42); //P3
    glVertex2f(11,12.4); //E3
    glVertex2f(11.4,12.2); //F3
    glVertex2f(11.4,12); //G3
    glVertex2f(11,12.2); //H3
    glVertex2f(11,12); //I3
    glVertex2f(10.8,12); //D3
    glEnd();

     //outline R
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(10.8,13); //C3
    glVertex2f(11,13); //N3
    glVertex2f(11.19,12.95); //M3
    glVertex2f(11.33,12.89); //L3
    glVertex2f(11.38,12.74); //K3
    glVertex2f(11.34,12.61); //J3
    glVertex2f(11.21,12.5); //O3
    glVertex2f(11.12,12.42); //P3
    glVertex2f(11,12.4); //E3
    glVertex2f(11.4,12.2); //F3
    glVertex2f(11.4,12); //G3
    glVertex2f(11,12.2); //H3
    glVertex2f(11,12); //I3
    glVertex2f(10.8,12); //D3
    glEnd();

    //O
    glBegin(GL_POLYGON);
    glColor3f(0.561,0.871,0.522);
    glVertex2f(12.1,12.99); //V3
    glVertex2f(12.59,12.49); //A4
    glVertex2f(12.1,12); //Z3
    glVertex2f(11.59,12.5); //W3
    glEnd();

    //outline O
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.1,12.99); //V3
    glVertex2f(12.59,12.49); //A4
    glVertex2f(12.1,12); //Z3
    glVertex2f(11.59,12.5); //W3
    glEnd();

    //G
    glBegin(GL_POLYGON);
    glColor3f(0.561,0.871,0.522);
    glVertex2f(12.8,13); //C4
    glVertex2f(13.6,13); //J4
    glVertex2f(13.6,12.8); //K4
    glVertex2f(13,12.8); //M4
    glVertex2f(13,12.2); //O4
    glVertex2f(13.4,12.2); //N4
    glVertex2f(13.2,12.33); //G4
    glVertex2f(13.4,12.4); //F4
    glVertex2f(13.6,12.4); //E4
    glVertex2f(13.6,12); //D4
    glVertex2f(12.8,12); //B4
    glEnd();

    //outline G
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.8,13); //C4
    glVertex2f(13.6,13); //J4
    glVertex2f(13.6,12.8); //K4
    glVertex2f(13,12.8); //M4
    glVertex2f(13,12.2); //O4
    glVertex2f(13.4,12.2); //N4
    glVertex2f(13.2,12.33); //G4
    glVertex2f(13.4,12.4); //F4
    glVertex2f(13.6,12.4); //E4
    glVertex2f(13.6,12); //D4
    glVertex2f(12.8,12); //B4
    glEnd();

    //G2
    glBegin(GL_POLYGON);
    glColor3f(0.561,0.871,0.522);
    glVertex2f(13.8,13); //I4
    glVertex2f(14.6,13); //P4
    glVertex2f(14.6,12.8); //Q4
    glVertex2f(14,12.8); //R4
    glVertex2f(14,12.2); //S4
    glVertex2f(14.4,12.2); //T4
    glVertex2f(14.2,12.34); //V4
    glVertex2f(14.4,12.4); //W4
    glVertex2f(14.6,12.4); //Z4
    glVertex2f(14.6,12); //A5
    glVertex2f(13.8,12); //B5
    glEnd();

    //outline G2
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(13.8,13); //I4
    glVertex2f(14.6,13); //P4
    glVertex2f(14.6,12.8); //Q4
    glVertex2f(14,12.8); //R4
    glVertex2f(14,12.2); //S4
    glVertex2f(14.4,12.2); //T4
    glVertex2f(14.2,12.34); //V4
    glVertex2f(14.4,12.4); //W4
    glVertex2f(14.6,12.4); //Z4
    glVertex2f(14.6,12); //A5
    glVertex2f(13.8,12); //B5
    glEnd();


    //Y
    glBegin(GL_POLYGON);
    glColor3f(0.561,0.871,0.522);
    glVertex2f(15.3,12.69); //D5
    glVertex2f(15.69,12.94); //F5
    glVertex2f(15.8,12.8); //G5
    glVertex2f(15.4,12.6); //H5
    glVertex2f(15.4,12); //J5
    glVertex2f(15.2,12); //I5
    glVertex2f(15.2,12.6); //E5
    glVertex2f(14.8,12.8); //C5
    glVertex2f(14.89,12.93); //L4
    glEnd();

    //outline Y
    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(15.3,12.69); //D5
    glVertex2f(15.69,12.94); //F5
    glVertex2f(15.8,12.8); //G5
    glVertex2f(15.4,12.6); //H5
    glVertex2f(15.4,12); //J5
    glVertex2f(15.2,12); //I5
    glVertex2f(15.2,12.6); //E5
    glVertex2f(14.8,12.8); //C5
    glVertex2f(14.89,12.93); //L4
    glEnd();

     //r
    glBegin(GL_POLYGON);
    glColor3f(1,0.973,0.439);
    glVertex2f(16,11); //L5
    glVertex2f(16,12); //K5
    glVertex2f(16.5,12); //M5
    glEnd();

    //outline r
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(16,11); //L5
    glVertex2f(16,12); //K5
    glVertex2f(16.5,12); //M5
    glEnd();

    //o
    glBegin(GL_POLYGON);
    glColor3f(1,0.973,0.439);
    glVertex2f(17,12); //N5
    glVertex2f(17.5,12); //Q5
    glVertex2f(17.5,11); //P5
    glVertex2f(17,11); //O5
    glEnd();

    //outline o
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(17,12); //N5
    glVertex2f(17.5,12); //Q5
    glVertex2f(17.5,11); //P5
    glVertex2f(17,11); //O5
    glEnd();

     //a
    glBegin(GL_POLYGON);
    glColor3f(1,0.973,0.439);
    glVertex2f(18.5,12); //R5
    glVertex2f(18.5,11); //T5
    glVertex2f(18,11.5); //S5
    glEnd();

    //outline a
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(18.5,12); //R5
    glVertex2f(18.5,11); //T5
    glVertex2f(18,11.5); //S5
    glEnd();

    //d
    glBegin(GL_POLYGON);
    glColor3f(1,0.973,0.439);
    glVertex2f(19,12); //U5
    glVertex2f(19.5,11.5); //W5
    glVertex2f(19,11); //V5
    glEnd();

    //outline d
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(19,12); //U5
    glVertex2f(19.5,11.5); //W5
    glVertex2f(19,11); //V5
    glEnd();

    glutSwapBuffers();

}

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("PAPAN"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0,30,0,30); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
