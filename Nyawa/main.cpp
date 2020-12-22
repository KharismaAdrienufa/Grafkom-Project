#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

int nyawa = 5;

void hati() {
    glPushMatrix();
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

void displayNyawa() {
    int x = 0;
    for (int i = 0; i < nyawa; ++i) {
        glPushMatrix();
        hati();
        glPopMatrix();
        x -= 5;
    }
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);
    hati();
    glutSwapBuffers();
}

int main(int argc, char** argv){ // untuk jendelanya
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_RGB | GLUT_DOUBLE);//membuat jendela yg double buffered
	glutInitWindowSize(1000, 700);//size jendela
	glutInitWindowPosition(0,0); //pojok bawah kiri
	glutCreateWindow("NYAWA"); // nama jendela
	glutDisplayFunc(displayMe);//memanggil fungsi display Me
	init();
	gluOrtho2D(0,30,0,30); // inisialisasi berapa kotak yg mau dipakai
	glutMainLoop();//untuk menjalan kan program, semua fungsi dieksekusi
	return 0;
}
