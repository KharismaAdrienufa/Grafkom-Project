#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

//int angle;

//pengaturan collider
float colliderKatak [4] = {5,5,10,10};
float colliderMobil1[4]={50,55,70,50};
float colliderMobil2[4]={10,15,20,10};
float colliderMobil3[4]={50,55,70,50};
float colliderMobil4[4]={10,15,20,10};

float translateKatak [2] = {5,5};

float gerakVertikal1=40;
float gerakVertikal2=0;
float gerakVertikal3=40;
float gerakVertikal4=0;

void init(){
    glClearColor(120,120,120,120);
}

void backgroundJalan(){
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

}

void gambarKatak(){
    //BADAN
    glBegin(GL_POLYGON);
    glColor3b(45,110,62);
    glVertex2f(3,4);
    glVertex2f(1.6,1.8);
    glVertex2f(2,1);
    glVertex2f(4,1);
    glVertex2f(4.4,1.8);
    glEnd();

    //MATA

    //HITAM
    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(2.6,3.4);
    glVertex2f(2.2,3.35);
    glVertex2f(2.25,2.9);
    glVertex2f(2.6,3);
    glEnd();

    //PUTIH
    glBegin(GL_POLYGON);
    glColor3b(120,120,120);
    glVertex2f(2.45,3.3);
    glVertex2f(2.3,3.3);
    glVertex2f(2.3,3.1);
    glEnd();

    //HITAM
    glBegin(GL_POLYGON);
    glColor3b(0,0,0);
    glVertex2f(3.4,3.4);
    glVertex2f(3.4,3);
    glVertex2f(3.75,2.9);
    glVertex2f(3.805,3.35);
    glEnd();

    //PUTIH
    glBegin(GL_POLYGON);
    glColor3b(120,120,120);
    glVertex2f(3.55,3.3);
    glVertex2f(3.7,3.3);
    glVertex2f(3.7,3.1);
    glEnd();

    //KAKI KANAN
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(3.1,1);
    glVertex2f(3.5,0.7);
    glVertex2f(4,0.7);
    glVertex2f(4,1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(4,0.7);
    glVertex2f(4.5,1.3);
    glVertex2f(4.75,1.75);
    glVertex2f(4.5,1.8);
    glVertex2f(4,1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(4.75,1.75);
    glVertex2f(4.85,1.7);
    glVertex2f(4.6,1);
    glVertex2f(4.3,0.7);
    glVertex2f(4.5,1.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(4.3,0.7);
    glVertex2f(4.5,0.6);
    glVertex2f(5.2,1.15);
    glVertex2f(4.9,1.35);
    glVertex2f(4.6,1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(5.2,1.15);
    glVertex2f(5.6,1.3);
    glVertex2f(5.25,1.35);
    glVertex2f(5.4,1.7);
    glVertex2f(5.1,1.5);
    glVertex2f(4.95,1.65);
    glVertex2f(4.9,1.35);
    glEnd();

    //KAKI KIRI
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(2.9,1);
    glVertex2f(2.5,0.7);
    glVertex2f(2,0.7);
    glVertex2f(2,1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(2,0.7);
    glVertex2f(1.5,1.3);
    glVertex2f(1.25,1.75);
    glVertex2f(1.5,1.8);
    glVertex2f(2,1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(1.25,1.75);
    glVertex2f(1.1,1.7);
    glVertex2f(1.4,1);
    glVertex2f(1.7,0.7);
    glVertex2f(1.5,1.3);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(1.7,0.7);
    glVertex2f(1.5,0.6);
    glVertex2f(0.8,1.15);
    glVertex2f(1.15,1.35);
    glVertex2f(1.4,1);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(0.8,1.15);
    glVertex2f(0.4,1.3);
    glVertex2f(0.75,1.35);
    glVertex2f(0.6,1.7);
    glVertex2f(0.9,1.5);
    glVertex2f(1.05,1.65);
    glVertex2f(1.15,1.35);
    glEnd();

    //TANGAN KANAN
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(4.05,2.3);
    glVertex2f(4.4,2.25);
    glVertex2f(4.55,2.6);
    glVertex2f(4.4,2.6);
    glVertex2f(4.4,2.4);
    glVertex2f(3.95,2.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(4.4,2.6);
    glVertex2f(4.3,2.8);
    glVertex2f(4.45,2.75);
    glVertex2f(4.55,3);
    glVertex2f(4.6,2.75);
    glVertex2f(4.8,2.8);
    glVertex2f(4.55,2.6);
    glEnd();

    //TANGAN KIRI
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(1.95,2.3);
    glVertex2f(1.6,2.25);
    glVertex2f(1.45,2.6);
    glVertex2f(1.6,2.6);
    glVertex2f(1.65,2.4);
    glVertex2f(2.05,2.5);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3b(27,72,42);
    glVertex2f(1.6,2.6);
    glVertex2f(1.7,2.8);
    glVertex2f(1.55,2.75);
    glVertex2f(1.45,3);
    glVertex2f(1.4,2.75);
    glVertex2f(1.2,2.8);
    glVertex2f(1.45,2.6);
    glEnd();
}

void mobil1(){
    glPushMatrix();
    glTranslated(gerakVertikal1,0,0);
    glTranslated(-20,-6,0);
    glScaled(0.5,1,0);

    //atap
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(18,14); //W3
    glVertex2f(18.2,14); //Z3
    glVertex2f(18.2,13.6); //B4
    glVertex2f(18,13.6); //A4
    glEnd();

    //body belakang
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
    glVertex2f(16,13.5); //J
    glVertex2f(17.5,13.5); //I
    glVertex2f(18.5,12.5); //O
    glVertex2f(18.5,12); //R
    glVertex2f(16,12); //Q
    glEnd();

    //kilau kaca samping
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(14,14.4); //J4
    glVertex2f(14.2,14.2); //E4
    glVertex2f(14.2,14); //C4
    glVertex2f(14,14.2); //D4
    glVertex2f(13.4,14); //H4
    glVertex2f(13.4,14.2); //I4
    glEnd();

    //body depan
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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

    glPopMatrix();
}

void timerMobil1(int){
    mobil1();
    glutPostRedisplay(); //untuk mengaktifkan display secara berkala
    glutTimerFunc(1000/30,timerMobil1,0); //mengatur lajunya mobil
    if(colliderMobil1[2]>=30){
//        cout << "masuk if " <<"\n";
        gerakVertikal1-=0.5;
        colliderMobil1[0]-=0.5;
        colliderMobil1[2]-=0.5;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal1=40;
        colliderMobil1[0]=50;
        colliderMobil1[2]=70;
    }

    glutPostRedisplay();
}

void mobil2(){
    glPushMatrix();
    glTranslated(gerakVertikal2,0,0);
    glTranslated(-20,1,0);
    glScaled(0.5,1,0);
    glRotated(-180.0,0,6,1);

    //atap
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(18,14); //W3
    glVertex2f(18.2,14); //Z3
    glVertex2f(18.2,13.6); //B4
    glVertex2f(18,13.6); //A4
    glEnd();

    //body belakang
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
    glVertex2f(16,13.5); //J
    glVertex2f(17.5,13.5); //I
    glVertex2f(18.5,12.5); //O
    glVertex2f(18.5,12); //R
    glVertex2f(16,12); //Q
    glEnd();

    //kilau kaca samping
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(14,14.4); //J4
    glVertex2f(14.2,14.2); //E4
    glVertex2f(14.2,14); //C4
    glVertex2f(14,14.2); //D4
    glVertex2f(13.4,14); //H4
    glVertex2f(13.4,14.2); //I4
    glEnd();

    //body depan
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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

    glPopMatrix();
}

void timerMobil2(int){
    mobil2();
    glutPostRedisplay(); //untuk mengaktifkan display secara berkala
    glutTimerFunc(1000/30,timerMobil2,0); //mengatur lajunya mobil
    if( colliderMobil2[2] <= 80){
//        cout << "masuk if " <<"\n";
        gerakVertikal2+=0.5;
        colliderMobil2[0]+=0.5;
        colliderMobil2[2]+=0.5;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal2=0;
        colliderMobil2[0]=0;
        colliderMobil2[2]=0;
    }

    glutPostRedisplay();
}

void mobil3(){
    glPushMatrix();
    glTranslated(gerakVertikal1,0,0);
    glTranslated(-20,6,0);
    glScaled(0.5,1,0);

    //atap
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(18,14); //W3
    glVertex2f(18.2,14); //Z3
    glVertex2f(18.2,13.6); //B4
    glVertex2f(18,13.6); //A4
    glEnd();

    //body belakang
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
    glVertex2f(16,13.5); //J
    glVertex2f(17.5,13.5); //I
    glVertex2f(18.5,12.5); //O
    glVertex2f(18.5,12); //R
    glVertex2f(16,12); //Q
    glEnd();

    //kilau kaca samping
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(14,14.4); //J4
    glVertex2f(14.2,14.2); //E4
    glVertex2f(14.2,14); //C4
    glVertex2f(14,14.2); //D4
    glVertex2f(13.4,14); //H4
    glVertex2f(13.4,14.2); //I4
    glEnd();

    //body depan
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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

    glPopMatrix();
}

void timerMobil3(int){
    mobil3();
    glutPostRedisplay(); //untuk mengaktifkan display secara berkala
    glutTimerFunc(1000/30,timerMobil3,0); //mengatur lajunya mobil
    if(colliderMobil3[2]>=0){
//        cout << "masuk if " <<"\n";
        gerakVertikal3-=0.2;
        colliderMobil3[0]-=0.2;
        colliderMobil3[2]-=0.2;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal3=40;
        colliderMobil3[0]=50;
        colliderMobil3[2]=70;
    }

    glutPostRedisplay();
}

void mobil4(){
    glPushMatrix();
    glTranslated(gerakVertikal4,0,0);
    glTranslated(-20,13,0);
    glScaled(0.5,1,0);
    glRotated(-180.0,0,6,1);

    //atap
    glBegin(GL_QUADS);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(18,14); //W3
    glVertex2f(18.2,14); //Z3
    glVertex2f(18.2,13.6); //B4
    glVertex2f(18,13.6); //A4
    glEnd();

    //body belakang
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
    glVertex2f(16,13.5); //J
    glVertex2f(17.5,13.5); //I
    glVertex2f(18.5,12.5); //O
    glVertex2f(18.5,12); //R
    glVertex2f(16,12); //Q
    glEnd();

    //kilau kaca samping
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(0.0,1.0,1.0);
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
    glColor3f(1.0,1.0,1.0);
    glVertex2f(14,14.4); //J4
    glVertex2f(14.2,14.2); //E4
    glVertex2f(14.2,14); //C4
    glVertex2f(14,14.2); //D4
    glVertex2f(13.4,14); //H4
    glVertex2f(13.4,14.2); //I4
    glEnd();

    //body depan
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
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
    glColor3f(1.0,0.0,0.0);
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

    glPopMatrix();
}

void timerMobil4(int){
    mobil4();
    glutPostRedisplay(); //untuk mengaktifkan display secara berkala
    glutTimerFunc(1000/30,timerMobil4,0); //mengatur lajunya mobil
    if( colliderMobil4[2] <= 80){
//        cout << "masuk if " <<"\n";
        gerakVertikal4+=0.5;
        colliderMobil4[0]+=0.5;
        colliderMobil4[2]+=0.5;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal4=0;
        colliderMobil4[0]=0;
        colliderMobil4[2]=0;
    }

    glutPostRedisplay();
}



//void gambarCollider() {
//    glColor3b(120,120,120);
//    glRectd(colliderKatak[0], colliderKatak[1], colliderKatak [2], colliderKatak [3]);
//}

void katakGerak() {
//    gambarCollider();
    glPushMatrix();
    glTranslated(translateKatak[0],translateKatak[1],0);
    //glRotated(angle, 0, 0, 1);
    gambarKatak();
    glPopMatrix();
}

void katakPutar(int id) {
//    angle = angle + 1;

    if (GetAsyncKeyState(VK_UP)){
        if (colliderKatak[3] < 30) {
            colliderKatak[1]++;
            colliderKatak[3]++;
            translateKatak[1]++;
        }
    }
    if (GetAsyncKeyState(VK_DOWN)){
        if (colliderKatak[1] > 0) {
            colliderKatak[1]--;
            colliderKatak[3]--;
            translateKatak[1]--;
        }
    }
    if (GetAsyncKeyState(VK_LEFT)){
        if (colliderKatak[0] > 0) {
            colliderKatak[0]--;
            colliderKatak[2]--;
            translateKatak[0]--;
        }
    }
    if (GetAsyncKeyState(VK_RIGHT)){
        if (colliderKatak[2] < 29) {
            colliderKatak[0]++;
            colliderKatak[2]++;
            translateKatak[0]++;
        }
    }

    glutPostRedisplay();  //buat looping
    glutTimerFunc(40, katakPutar, 0);
}


void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    backgroundJalan();
    katakGerak();
    mobil1();
    mobil2();
    mobil3();
    mobil4();
    glFlush();
    glutSwapBuffers();
}

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("KODOK"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	glutTimerFunc(0,timerMobil1,0);
	glutTimerFunc(0,timerMobil2,0);
	glutTimerFunc(0,timerMobil3,0);
	glutTimerFunc(0,timerMobil4,0);
	glutTimerFunc(0, katakPutar, 0);
	init();
	gluOrtho2D(0,30,0,30); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
