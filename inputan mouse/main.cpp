#include <GL/glut.h>
#include <iostream>
#include <stdlib.h>
double pindahX =25;
double pindahY =25;
bool cek;

void display(void){
     glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
     glColor4b(0.4, 0.8, 0.6, 0.3);
     glBegin(GL_POLYGON);
     glVertex2f(pindahX-25,pindahY-25);
     glVertex2f(pindahX+25,pindahY-25);
     glVertex2f(pindahX+25,pindahY+25);
     glVertex2f(pindahX-25,pindahY+25);
     glEnd();
     glFlush();
}

void mouse(int button, int state, int x, int y){
    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN){
        cek=true;
        pindahX = x;
        pindahY = glutGet(GLUT_WINDOW_HEIGHT)-y;
    }
    else if(button==GLUT_RIGHT_BUTTON && state==GLUT_DOWN){
        cek=false;
    }
    glutPostRedisplay();
}

int main(int argc, char *argv[]){
     glutInit(&argc, argv);
     glutInitDisplayMode(GLUT_RGB | GLUT_DEPTH);
     glutInitWindowSize(400, 400);
     glutInitWindowPosition(100, 100);
     glutCreateWindow("Kubus");
     gluOrtho2D(0, 400, 0, 400);
     glutDisplayFunc(display);
     glutMouseFunc(mouse);
     glutMainLoop();
     return 0;
}
