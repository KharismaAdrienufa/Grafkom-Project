#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

//int angle;

//pengaturan collider
float colliderKatak[4]={1,3,5,1};

float colliderMobil1[4]={30,9,25,4};
float colliderMobil2[4]={-30,15,-25,10};
float colliderMobil3[4]={30,21,25,16};
float colliderMobil4[4]={-30,27,-25,22};

float translateKatak [2] = {0,0};

float gerakVertikal1=40;
float gerakVertikal2=0;
float gerakVertikal3=40;
float gerakVertikal4=0;

float kecepatan=0.2;

int nyawa=3;

bool cekMenu=true;

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

void pohon(){
    glPushMatrix();
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

    glPopMatrix();
}

void hati() {
    glPushMatrix();
    glTranslated(0,22,0);
    glScaled(0.2,0.5,0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,0.0,0.0);
    glVertex2f(15,15); //A
    glVertex2f(15.5,15.5); //B
    glVertex2f(16,15.8); //C
    glVertex2f(16.5,16); //D
    glVertex2f(17,16); //E
    glVertex2f(17.4,15.8); //F
    glVertex2f(17.6,15.4); //G
    glVertex2f(17.6,14.8); //H
    glVertex2f(17.4,14.4); //I
    glVertex2f(17,14); //J
    glVertex2f(16.6,13.8); //K
    glVertex2f(16.2,13.6); //L
    glVertex2f(15.8,13.4); //M
    glVertex2f(15.4,13.2); //N
    glVertex2f(15,13); //O
    glVertex2f(14.6,13.2); //P
    glVertex2f(14.2,13.4); //Q
    glVertex2f(13.8,13.6); //R
    glVertex2f(13.4,13.8); //S
    glVertex2f(13,14); //T
    glVertex2f(12.6,14.4); //U
    glVertex2f(12.4,14.8); //V
    glVertex2f(12.4,15.4); //W
    glVertex2f(12.6,15.8); //Z
    glVertex2f(13,16); //A1
    glVertex2f(13.5,16); //B1
    glVertex2f(14,15.8); //C1
    glVertex2f(14.5,15.5); //D1
    glEnd();

    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    glColor3f(0.0,0.0,0.0);
    glVertex2f(15,15); //A
    glVertex2f(15.5,15.5); //B
    glVertex2f(16,15.8); //C
    glVertex2f(16.5,16); //D
    glVertex2f(17,16); //E
    glVertex2f(17.4,15.8); //F
    glVertex2f(17.6,15.4); //G
    glVertex2f(17.6,14.8); //H
    glVertex2f(17.4,14.4); //I
    glVertex2f(17,14); //J
    glVertex2f(16.6,13.8); //K
    glVertex2f(16.2,13.6); //L
    glVertex2f(15.8,13.4); //M
    glVertex2f(15.4,13.2); //N
    glVertex2f(15,13); //O
    glVertex2f(14.6,13.2); //P
    glVertex2f(14.2,13.4); //Q
    glVertex2f(13.8,13.6); //R
    glVertex2f(13.4,13.8); //S
    glVertex2f(13,14); //T
    glVertex2f(12.6,14.4); //U
    glVertex2f(12.4,14.8); //V
    glVertex2f(12.4,15.4); //W
    glVertex2f(12.6,15.8); //Z
    glVertex2f(13,16); //A1
    glVertex2f(13.5,16); //B1
    glVertex2f(14,15.8); //C1
    glVertex2f(14.5,15.5); //D1
    glEnd();
    glPopMatrix();
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
    if(colliderMobil1[0]>=-10){
//        cout << "masuk if " <<"\n";
        gerakVertikal1-=kecepatan;
        colliderMobil1[0]-=kecepatan;
        colliderMobil1[2]-=kecepatan;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal1=40;
        colliderMobil1[0]=30;
        colliderMobil1[2]=25;
    }

    if(
       (colliderKatak[2]+5>=colliderMobil1[0] && colliderKatak[2]<=colliderMobil1[2]+5)&&(colliderKatak[1]<=colliderMobil1[1] && colliderKatak[1]>=colliderMobil1[3]) ||
       (colliderKatak[0]+5>=colliderMobil1[0] && colliderKatak[0]<=colliderMobil1[2]+5)&&(colliderKatak[3]<=colliderMobil1[1] && colliderKatak[3]>=colliderMobil1[3])
       ){

        gerakVertikal1=40;
        colliderMobil1[0]=30;
        colliderMobil1[2]=25;
        nyawa-=1;
    }

    if(nyawa<=0){
        cekMenu=true;
        nyawa=3;
        colliderKatak[0]=1;
        colliderKatak[1]=3;
        colliderKatak[2]=5;
        colliderKatak[3]=1;
        translateKatak[0]=0;
        translateKatak[1]=0;
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
    if( colliderMobil2[2] <= 40){
//        cout << "masuk if " <<"\n";
        gerakVertikal2+=kecepatan;
        colliderMobil2[0]+=kecepatan;
        colliderMobil2[2]+=kecepatan;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal2=0;
        colliderMobil2[0]=-30;
        colliderMobil2[2]=-25;
    }

    if(
       (colliderKatak[0]>=colliderMobil2[0] && colliderKatak[0]<=colliderMobil2[2])&&(colliderKatak[1]<=colliderMobil2[1] && colliderKatak[1]>=colliderMobil2[3]) ||
       (colliderKatak[2]>=colliderMobil2[0] && colliderKatak[2]<=colliderMobil2[2])&&(colliderKatak[3]<=colliderMobil2[1] && colliderKatak[3]>=colliderMobil2[3])
       ){

           gerakVertikal2 = 0;
           colliderMobil2[0]=-30;
           colliderMobil2[2]=-25;
           nyawa-=1;
    }

    if(nyawa<=0){
        cekMenu=true;
        nyawa=3;
        colliderKatak[0]=1;
        colliderKatak[1]=3;
        colliderKatak[2]=5;
        colliderKatak[3]=1;
        translateKatak[0]=0;
        translateKatak[1]=0;
    }

    glutPostRedisplay();
}

void mobil3(){
    glPushMatrix();
    glTranslated(gerakVertikal3,0,0);
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
    if(colliderMobil3[0]>=-10){
//        cout << "masuk if " <<"\n";
        gerakVertikal3-=kecepatan;
        colliderMobil3[0]-=kecepatan;
        colliderMobil3[2]-=kecepatan;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal3=40;
        colliderMobil3[0]=30;
        colliderMobil3[2]=25;
    }

    if(
       (colliderKatak[2]+5>=colliderMobil3[0] && colliderKatak[2]<=colliderMobil3[2]+5)&&(colliderKatak[1]<=colliderMobil3[1] && colliderKatak[1]>=colliderMobil3[3]) ||
       (colliderKatak[0]+5>=colliderMobil3[0] && colliderKatak[0]<=colliderMobil3[2]+5)&&(colliderKatak[3]<=colliderMobil3[1] && colliderKatak[3]>=colliderMobil3[3])
       ){

        gerakVertikal3=40;
        colliderMobil3[0]=30;
        colliderMobil3[2]=25;
        nyawa-=1;
    }

    if(nyawa<=0){
        cekMenu=true;
        nyawa=3;
        colliderKatak[0]=1;
        colliderKatak[1]=3;
        colliderKatak[2]=5;
        colliderKatak[3]=1;
        translateKatak[0]=0;
        translateKatak[1]=0;
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
    if( colliderMobil4[2] <= 40){
//        cout << "masuk if " <<"\n";
        gerakVertikal4+=kecepatan;
        colliderMobil4[0]+=kecepatan;
        colliderMobil4[2]+=kecepatan;
//        cout << "vertikal " <<gerakVertikal<<"\n";
    }
    else{
        gerakVertikal4=0;
        colliderMobil4[0]=-30;
        colliderMobil4[2]=-25;
    }

    if(
       (colliderKatak[0]>=colliderMobil4[0] && colliderKatak[0]<=colliderMobil4[2])&&(colliderKatak[1]<=colliderMobil4[1] && colliderKatak[1]>=colliderMobil4[3]) ||
       (colliderKatak[2]>=colliderMobil4[0] && colliderKatak[2]<=colliderMobil4[2])&&(colliderKatak[3]<=colliderMobil4[1] && colliderKatak[3]>=colliderMobil4[3])
       ){

        gerakVertikal4=0;
        colliderMobil4[0]=-30;
        colliderMobil4[2]=-25;
        nyawa-=1;
    }

    if(nyawa<=0){
        cekMenu=true;
        nyawa=3;
        colliderKatak[0]=1;
        colliderKatak[1]=3;
        colliderKatak[2]=5;
        colliderKatak[3]=1;
        translateKatak[0]=0;
        translateKatak[1]=0;
    }

    glutPostRedisplay();
}

void menu(){
    glPushMatrix();
    glTranslated(-27,-47,0);
    glScaled(2.8,5,1);
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

    glPopMatrix();
}

//void gambarCollider() {
//    glColor3b(120,120,120);
//    glRectd(colliderKatak[0], colliderKatak[1], colliderKatak [2], colliderKatak [3]);
//}

void katakGerak() {
//    gambarCollider();
    glPushMatrix();
    glTranslated(translateKatak[0],translateKatak[1],0);
    gambarKatak();
    glPopMatrix();
}

void katakInput(int id) {
    if (GetAsyncKeyState(VK_UP)){
        if (colliderKatak[1] < 30) {
            colliderKatak[1]++;
            colliderKatak[3]++;
            translateKatak[1]++;
        }
    }
    if (GetAsyncKeyState(VK_DOWN)){
        if (colliderKatak[3] > 0) {
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
    glutTimerFunc(40, katakInput, 0);
}

void displayNyawa() {
    float x = 0;
    for (int i = 0; i < nyawa; ++i) {
        glPushMatrix();
        glTranslated(x,0,0);
        hati();
        glPopMatrix();
        x -= 1.2;
    }
}

void processKeys(unsigned char key,int x, int y) {
      if (key == 32 && cekMenu){ // escape key
            cekMenu=false;
      }
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    backgroundJalan();
    pohon();
    katakGerak();
    mobil1();
    mobil2();
    mobil3();
    mobil4();
    displayNyawa();
    if(cekMenu){
     menu();
    }
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
	glutKeyboardFunc(processKeys);
	glutTimerFunc(0,timerMobil1,0);
	glutTimerFunc(0,timerMobil2,0);
	glutTimerFunc(0,timerMobil3,0);
	glutTimerFunc(0,timerMobil4,0);
	glutTimerFunc(0, katakInput, 0);
	init();
	gluOrtho2D(0,30,0,31); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
