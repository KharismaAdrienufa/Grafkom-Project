#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>

void init(){
    glClearColor(120,120,120,120);
}

void displayMe(void){
    glClear(GL_COLOR_BUFFER_BIT);


    //lampu
    glBegin(GL_QUADS);
    glColor3f(0,1,1);
    glVertex2f(18.6,6.2);
    glVertex2f(18.8,5.8);
    glVertex2f(18.6,5.8);
    glVertex2f(18.8,6.2);

    //kaca
    glBegin(GL_QUADS);
    glColor3f(0,1,1);
    glVertex2f(19.2,6.4);
    glVertex2f(19.4,6.4);
    glVertex2f(19.4,5.6);
    glVertex2f(18.6,5.8);

        //badan mobil
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(18.4,6.6); //A
    glVertex2f(18.6,6.6); //B
    glVertex2f(18.8,6.8); //L
    glVertex2f(20.8,6.8); //M
    glVertex2f(21,6.6); //A
    glVertex2f(21.2,6.6); //B
    glVertex2f(21.2,5.4); //L
    glVertex2f(21,5.4); //M
    glVertex2f(20.8,5.2);
    glVertex2f(18.8,5.2);
    glVertex2f(18.6,5.4);
    glVertex2f(18.4,5.4);




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
