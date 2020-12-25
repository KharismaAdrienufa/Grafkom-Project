#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);

    //atap
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(14.5,15); //A
    glVertex2f(17.5,15); //B
    glVertex2f(17.5,13.5); //I
    glVertex2f(14.5,13.5); //M
    glEnd();

    //outline atap
    glLineWidth(5);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(14.5,15); //A
    glVertex2f(17.5,15); //B
    glVertex2f(17.5,13.5); //I
    glVertex2f(14.5,13.5); //M
    glEnd();

    //kaca belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(17.5,15); //B
    glVertex2f(18.5,14); //P
    glVertex2f(18.5,12.5); //O
    glVertex2f(17.5,13.5); //I
    glEnd();

    //outline kaca belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(17.5,15); //B
    glVertex2f(18.5,14); //P
    glVertex2f(18.5,12.5); //O
    glVertex2f(17.5,13.5); //I
    glEnd();

    //kilau kaca belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18,14); //W3
    glVertex2f(18.2,14); //Z3
    glVertex2f(18.2,13.6); //B4
    glVertex2f(18,13.6); //A4
    glEnd();

    //body belakang
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18.5,14); //P
    glVertex2f(19.5,14); //C
    glVertex2f(20,13.5); //F
    glVertex2f(20,12.5); //E
    glVertex2f(19.5,12); //D
    glVertex2f(18.5,12); //R
    glEnd();

    //outline body belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(18.5,14); //P
    glVertex2f(19.5,14); //C
    glVertex2f(20,13.5); //F
    glVertex2f(20,12.5); //E
    glVertex2f(19.5,12); //D
    glVertex2f(18.5,12); //R
    glEnd();

    //body belakang bawah
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18.5,12); //R
    glVertex2f(19.5,12); //D
    glVertex2f(20,12.5); //E
    glVertex2f(20,11.5); //G
    glVertex2f(19.5,11); //H
    glVertex2f(17.8,11); //U2
    glEnd();

    //outline body belakang bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(18.5,12); //R
    glVertex2f(19.5,12); //D
    glVertex2f(20,12.5); //E
    glVertex2f(20,11.5); //G
    glVertex2f(19.5,11); //H
    glVertex2f(17.8,11); //U2
    glEnd();

    //body samping belakang
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(16,12); //Q
    glVertex2f(18.5,12); //R
    glVertex2f(17.8,11); //U2
    glVertex2f(15.6,11); //E2
    glEnd();

    //outline body samping belakang
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(16,12); //Q
    glVertex2f(18.5,12); //R
    glVertex2f(17.8,11); //U2
    glVertex2f(15.6,11); //E2
    glEnd();

    //gagang pintu
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(17.6,11.8); //C3
    glVertex2f(18.1,11.8); //B3
    glVertex2f(18.1,11.7); //E3
    glVertex2f(17.6,11.7); //D3
    glEnd();

    //kaca samping
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(16,13.5); //J
    glVertex2f(17.5,13.5); //I
    glVertex2f(18.5,12.5); //O
    glVertex2f(18.5,12); //R
    glVertex2f(16,12); //Q
    glEnd();

    //kilau kaca samping
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(17,12.8); //V3
    glVertex2f(17,13); //O3
    glVertex2f(17.4,13); //P3
    glVertex2f(17.4,12.8); //Q3
    glVertex2f(17.2,12.8); //R3
    glVertex2f(17.2,12.6); //S3
    glVertex2f(16.6,12.6); //T3
    glVertex2f(16.6,12.8); //U3
    glEnd();

    //outline kaca samping
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(16,13.5); //J
    glVertex2f(17.5,13.5); //I
    glVertex2f(18.5,12.5); //O
    glVertex2f(18.5,12); //R
    glVertex2f(16,12); //Q
    glEnd();

    //kaca sampingg
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(12.5,12.5); //U
    glVertex2f(14.5,13.5); //M
    glVertex2f(16,13.5); //J
    glVertex2f(16,12); //Q
    glVertex2f(12.5,12); //S
    glEnd();

    //outline kaca sampingg
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.5,12.5); //U
    glVertex2f(14.5,13.5); //M
    glVertex2f(16,13.5); //J
    glVertex2f(16,12); //Q
    glVertex2f(12.5,12); //S
    glEnd();

    //kilau kaca sampingg
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(14.8,13); //F3
    glVertex2f(14.2,12.6); //K3
    glVertex2f(14,12.8); //M3
    glVertex2f(14,13); //L3
    glVertex2f(14.2,12.8); //N3
    glVertex2f(14.8,13.2); //J3
    glVertex2f(15,13.1); //H3
    glVertex2f(15,12.9); //I3
    glEnd();

    //spion
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(12.5,12.5); //U
    glVertex2f(12.8,12.4); //K
    glVertex2f(12.8,12.1); //K1
    glVertex2f(12.5,12); //S
    glEnd();

    //outline spion
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.5,12.5); //U
    glVertex2f(12.8,12.4); //K
    glVertex2f(12.8,12.1); //K1
    glVertex2f(12.5,12); //S
    glEnd();


    //body samping depan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(12.5,12); //S
    glVertex2f(16,12); //Q
    glVertex2f(15.6,11); //E2
    glVertex2f(12.6,11); //T2
    glEnd();

    //outline body samping depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.5,12); //S
    glVertex2f(16,12); //Q
    glVertex2f(15.6,11); //E2
    glVertex2f(12.6,11); //T2
    glEnd();

    //gagang pintu2
    glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(15.2,11.8); //V2
    glVertex2f(15.7,11.8); //W2
    glVertex2f(15.7,11.7); //A3
    glVertex2f(15.2,11.7); //Z2
    glEnd();

    //kaca depan
    glBegin(GL_QUADS);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(12.5,14); //T
    glVertex2f(14.5,15); //A
    glVertex2f(14.5,13.5); //M
    glVertex2f(12.5,12.5); //U
    glEnd();

    //outline kaca depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(12.5,14); //T
    glVertex2f(14.5,15); //A
    glVertex2f(14.5,13.5); //M
    glVertex2f(12.5,12.5); //U
    glEnd();

    //kilau kaca depan
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(14,14.4); //J4
    glVertex2f(14.2,14.2); //E4
    glVertex2f(14.2,14); //C4
    glVertex2f(14,14.2); //D4
    glVertex2f(13.4,14); //H4
    glVertex2f(13.4,14.2); //I4
    glEnd();

    //body depan
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(10.5,14); //V
    glVertex2f(12.5,14); //T
    glVertex2f(12.5,12); //S
    glVertex2f(10.5,12); //T1
    glVertex2f(10,12.5); //S1
    glVertex2f(10,13.5); //R1
    glEnd();

    //outline body depan
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(10.5,14); //V
    glVertex2f(12.5,14); //T
    glVertex2f(12.5,12); //S
    glVertex2f(10.5,12); //T1
    glVertex2f(10,12.5); //S1
    glVertex2f(10,13.5); //R1
    glEnd();

    //body depan bawah
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(10,12.5); //S1
    glVertex2f(10.5,12); //T1
    glVertex2f(12.5,12); //S
    glVertex2f(12.6,11); //T2
    glVertex2f(10.5,11); //V1
    glVertex2f(10,11.5); //U1
    glEnd();

    //outline body depan bawah
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(10,12.5); //S1
    glVertex2f(10.5,12); //T1
    glVertex2f(12.5,12); //S
    glVertex2f(12.6,11); //T2
    glVertex2f(10.5,11); //V1
    glVertex2f(10,11.5); //U1
    glEnd();

    //roda depan
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(11.4,11.25); //W1
    glVertex2f(11.6,11.2); //Z1
    glVertex2f(11.8,11.1); //B2
    glVertex2f(11.85,11); //G2
    glVertex2f(11.9,10.9); //I2
    glVertex2f(11.95,10.8); //K2
    glVertex2f(11.9,10.7); //M2
    glVertex2f(11.85,10.6); //N2
    glVertex2f(11.8,10.5); //P2
    glVertex2f(11.6,10.4); //Q2
    glVertex2f(11.4,10.35); //S2
    glVertex2f(11.2,10.4); //R2
    glVertex2f(11,10.5); //O2
    glVertex2f(10.95,10.6); //L2
    glVertex2f(10.9,10.7); //J2
    glVertex2f(10.85,10.8); //H2
    glVertex2f(10.9,10.9); //F2
    glVertex2f(10.95,11); //D2
    glVertex2f(11,11.1); //C2
    glVertex2f(11.2,11.2); //A2
    glEnd();

    //roda belakang
    glBegin(GL_POLYGON);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(18.4,11.25); //L
    glVertex2f(18.6,11.2); //M1
    glVertex2f(18.8,11.1); //G1
    glVertex2f(18.85,11); //N
    glVertex2f(18.9,10.9); //Z
    glVertex2f(18.95,10.8); //P1
    glVertex2f(18.9,10.7); //B1
    glVertex2f(18.85,10.6); //D1
    glVertex2f(18.8,10.5); //I1
    glVertex2f(18.6,10.4); //N1
    glVertex2f(18.4,10.35); //F1
    glVertex2f(18.2,10.4); //O1
    glVertex2f(18,10.5); //J1
    glVertex2f(17.95,10.6); //E1
    glVertex2f(17.9,10.7); //A1
    glVertex2f(17.85,10.8); //Q1
    glVertex2f(17.9,10.9); //C1
    glVertex2f(17.95,11); //W
    glVertex2f(18,11.1); //H1
    glVertex2f(18.2,11.2); //L1
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
