#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

int angle;

//pengaturan collider
float colliderKatak [4] = {5,5,10,10};
float translateKatak [2] = {5,5};

void init(){
    glClearColor(120,120,120,120);
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

void gambarCollider() {
    glColor3b(0,0,0);
    glRectd(colliderKatak[0], colliderKatak[1], colliderKatak [2], colliderKatak [3]);
}

void katakGerak() {
    gambarCollider();
    glPushMatrix();
    glTranslated(translateKatak[0],translateKatak[1],0);
    //glRotated(angle, 0, 0, 1);
    gambarKatak();
    glPopMatrix();
}

void katakPutar(int id) {
    angle = angle + 1;

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
        if (colliderKatak[2] < 30) {
            colliderKatak[0]++;
            colliderKatak[2]++;
            translateKatak[0]++;
        }
    }

    glutPostRedisplay();
    glutTimerFunc(20, katakPutar, 0);
}


void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    //gambarKatak();
    katakGerak();
    glutSwapBuffers();
}

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("KODOK"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	glutTimerFunc(1, katakPutar, 0);
	init();
	gluOrtho2D(0,30,0,30); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
