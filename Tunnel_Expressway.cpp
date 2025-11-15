#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <windows.h>
#include <cmath>
#include <math.h>
#include"Circle.h"

using namespace std;

float _move = 0.0f;
float _angle1 = 0.0f;
float _move2 = 0.0f;
float _move3 = 0.0f;
float _move4 = 0.0f;
float _moveX=0.0;
float _moveY=0.0;
float scaleX_value = 1.0f; // Adjust as needed
float scaleY_value = 1.0f; // Adjust as needed
float wavePhase = 0.0;

float waveOffset = 0.0;

float r1=0.0f;
float g1=0.0f;
float b1=54.0f;

float r2=253;
float g2=253;
float b2=253;

float r3=30;
float g3=132;
float b3=73;



void initGL() {

glClearColor(0.0f, 0.0f, 0.0f, 1.0f);

}

void hill2(float x,float y){
    glBegin(GL_TRIANGLES); //Hill front
    glColor3ub(70, 188, 35 );
    glVertex2f(x+7.0f, y+2.0f);
    glVertex2f(x+12.5f,y+2.0f);
    glVertex2f(x+10.0f, y+23.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Hill back
    glColor3ub(52, 136, 28 );
    glVertex2f(x+4.5f,y+ 5.0f);
    glVertex2f(x+7.0f,y+2.0f);
    glVertex2f(x+10.0f,y+ 23.0f);
    glEnd();


}

void hill1(float x,float y){
    glBegin(GL_TRIANGLES); //Hill front
    glColor3ub(70, 188, 35 );
    glVertex2f(x+4.0f, y+2.0f);
    glVertex2f(x+11.5f,y+2.0f);
    glVertex2f(x+7.0f, y+22.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //Hill back
    glColor3ub(52, 136, 28 );
    glVertex2f(x+1.5f, y+6.0f);
    glVertex2f(x+4.0f,y+2.0f);
    glVertex2f(x+7.0f,y+ 22.0f);
    glEnd();


}

void ship(float x, float y) {
    float widthScale = 1.5; // Scale factor for increasing width along x-axis

    glBegin(GL_POLYGON); //ship body
    glColor3ub(0, 0, 0); // Black
    glVertex2f(x + (9.0f * widthScale), y + 5.0f);
    glVertex2f(x + (45.0f * widthScale), y + 5.0f); // Increased width
    glVertex2f(x + (51.0f * widthScale), y + 20.0f); // Increased width
    glVertex2f(x + (17.0f * widthScale), y + 20.0f);
    glVertex2f(x + (13.0f * widthScale), y + 23.0f);
    glVertex2f(x - (5.0f * widthScale), y + 23.0f); // Decreased width
    glEnd();

    glBegin(GL_POLYGON); //ship floor 1
    glColor3ub(128, 0, 128); // Purple
    glVertex2f(x + (17.0f * widthScale), y + 20.0f);
    glVertex2f(x + (43.0f * widthScale), y + 20.0f); // Increased width
    glVertex2f(x + (43.0f * widthScale), y + 28.0f); // Increased width
    glVertex2f(x + (19.0f * widthScale), y + 28.0f);
    glVertex2f(x + (11.0f * widthScale), y + 23.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship floor 2
    glColor3ub(255, 255, 255); // White
    glVertex2f(x + (19.0f * widthScale), y + 28.0f);
    glVertex2f(x + (43.0f * widthScale), y + 28.0f); // Increased width
    glVertex2f(x + (43.0f * widthScale), y + 32.0f); // Increased width
    glVertex2f(x + (28.0f * widthScale), y + 32.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1
    glColor3ub(255, 126, 18); // Yellow
    glVertex2f(x + (30.0f * widthScale), y + 32.0f);
    glVertex2f(x + (34.0f * widthScale), y + 32.0f); // Increased width
    glVertex2f(x + (35.5f * widthScale), y + 36.0f); // Increased width
    glVertex2f(x + (31.0f * widthScale), y + 36.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top2
    glColor3ub(255, 126, 18); // Yellow
    glVertex2f(x + (34.0f * widthScale), y + 32.0f);
    glVertex2f(x + (38.0f * widthScale), y + 32.0f); // Increased width
    glVertex2f(x + (39.0f * widthScale), y + 36.0f); // Increased width
    glVertex2f(x + (35.0f * widthScale), y + 36.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //ship top1 window1
    glColor3ub(0, 0, 0); // black
    glVertex2f(x + (16.0f * widthScale), y + 25.0f);
    glVertex2f(x + (20.0f * widthScale), y + 25.0f);
    glVertex2f(x + (20.0f * widthScale), y + 27.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1 WINDOW 2
    glColor3ub(0, 0, 0); // Black
    glVertex2f(x + (21.0f * widthScale), y + 23.0f);
    glVertex2f(x + (25.0f * widthScale), y + 23.0f); // Increased width
    glVertex2f(x + (25.0f * widthScale), y + 27.0f); // Increased width
    glVertex2f(x + (21.0f * widthScale), y + 27.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1 WINDOW 3
    glColor3ub(0, 0, 0); // Black
    glVertex2f(x + (26.0f * widthScale), y + 23.0f);
    glVertex2f(x + (30.0f * widthScale), y + 23.0f); // Increased width
    glVertex2f(x + (30.0f * widthScale), y + 27.0f); // Increased width
    glVertex2f(x + (26.0f * widthScale), y + 27.0f);
    glEnd();

    glBegin(GL_POLYGON); //ship top1 WINDOW 4
    glColor3ub(0, 0, 0); // Black
    glVertex2f(x + (31.0f * widthScale), y + 23.0f);
    glVertex2f(x + (37.0f * widthScale), y + 23.0f); // Increased width
    glVertex2f(x + (37.0f * widthScale), y + 27.0f); // Increased width
    glVertex2f(x + (31.0f * widthScale), y + 27.0f);
    glEnd();

    glBegin(GL_TRIANGLES); //ship top2 window1
    glColor3ub(175, 38, 17); // Red
    glVertex2f(x + (26.0f * widthScale), y + 30.5f);
    glVertex2f(x + (26.0f * widthScale), y + 28.5f);
    glVertex2f(x + (23.0f * widthScale), y + 28.5f);
    glEnd();

    glBegin(GL_POLYGON); //ship top2 window2
    glColor3ub(175, 38, 17); // Red
    glVertex2f(x + (27.0f * widthScale), y + 28.5f);
    glVertex2f(x + (30.0f * widthScale), y + 28.5f);
    glVertex2f(x + (30.0f * widthScale), y + 30.5f);
    glVertex2f(x + (27.0f * widthScale), y + 30.5f);
    glEnd();

    glBegin(GL_POLYGON); //ship top2 window3
    glColor3ub(175, 38, 17); // Red
    glVertex2f(x + (31.0f * widthScale), y + 28.5f);
    glVertex2f(x + (35.0f * widthScale), y + 28.5f);
    glVertex2f(x + (35.0f * widthScale), y + 30.5f);
    glVertex2f(x + (31.0f * widthScale), y + 30.5f);
    glEnd();
}

void aeroplane(float x,float y){
glBegin(GL_POLYGON);
glColor3ub(78, 151, 165);
glVertex2f(x+5,y+8);
glVertex2f(x+21.5,y+4);
glVertex2f(x+24.0,y+7.5);
glVertex2f(x+5.50,y+12);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(78, 151, 165);
glVertex2f(x+21.5,y+4);
glVertex2f(x+27.5,y+4);
glVertex2f(x+28,y+6);
glVertex2f(x+24.0,y+7.5);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(78, 151, 165);
glVertex2f(x+24.0,y+7.5);
glVertex2f(x+28,y+6);
glVertex2f(x+31,y+12);
glVertex2f(x+29,y+12.4);
glEnd();

circle(2,x+5.25,y+10,78, 151, 165);
circle(.7,x+9,y+9.5,20, 21, 211);
circle(.7,x+11,y+8.8,20, 21, 211);
circle(.7,x+13,y+8.2,20, 21, 211);
circle(.7,x+13,y+8.2,20, 21, 211);
circle(.7,x+15.5,y+7.6,20, 21, 211);
circle(.7,x+18,y+7.1,20, 21, 211);
}



void tree(float x,float y){
glBegin(GL_POLYGON);
glColor3ub(144, 79, 47);
glVertex2f(x+2,y+0);
glVertex2f(x+4,y+0);
glVertex2f(x+4,y+4+2);
glVertex2f(x+2,y+4+2);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(144, 79, 47);
glVertex2f(x+4,y+4+2);
glVertex2f(x+6,y+8+2);
glVertex2f(x+5,y+8+2);
glVertex2f(x+3,y+4.3+2);
glVertex2f(x+3,y+4+2);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(144, 79, 47);
glVertex2f(x+2,y+4+2);
glVertex2f(x+3,y+4+2);
glVertex2f(x+3,y+4.3+2);
glVertex2f(x+1,y+8+2);
glVertex2f(x+0,y+8+2);
glEnd();

circle(3,x+0.0,y+11.0,24, 106, 59);
circle(4,x+4.0,y+11.50,24, 106, 59 );
circle(3,x+8.0,y+11.0,24, 106, 59 );

}


void boat1(int x,int y){

    glBegin(GL_POLYGON);
    glColor3ub(93, 118, 84);
    glVertex2f(x+5.0,y+1.0);
    glVertex2f(x+15.0,y+1.0);
    glVertex2f(x+20.0,y+5.0);
    glVertex2f(x+0.0,y+5.0);

    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(193, 118, 4);
    glVertex2f(x+5.0,y+5.0);
    glVertex2f(x+15.0,y+5.0);
    glVertex2f(x+15.0,y+9.0);
    glVertex2f(x+5.0,y+9.0);

    glEnd();




}

void boat2(int x,int y){

    glBegin(GL_POLYGON);
    glColor3ub(173, 95, 95);
    glVertex2f(x+8.83,y+4.20);
    glVertex2f(x+20.83,y+5.0);
    glVertex2f(x+20.00,y+10.70);
    glVertex2f(x+8.83,y+9.70);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(130, 185, 196);
    glVertex2f(x+8.83+1.5,y+4.20+1);
    glVertex2f(x+20.83-1.5,y+5.00+1);
    glVertex2f(x+20.00-1.5,y+10.70-1);
    glVertex2f(x+8.83+1.5,y+9.70-1);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(95, 56, 56);
    glVertex2f(x+1.83,y+1.0);
    glVertex2f(x+20.80,y+1.0);
    glVertex2f(x+25.0,y+5.60);
    glVertex2f(x+1.70,y+4.0);

    glEnd();

}


void windmill(){
///WindMill Stand
glBegin(GL_POLYGON);
glColor3ub(131, 63, 105);
glVertex2i(16,40);
glVertex2i(16,54);
glVertex2i(14,54);
glVertex2i(14,40);
glEnd();

///WindMill Wheel 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(52, 73, 94);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+54 );
        }

	glEnd();

	///WindMill Wheel 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(192, 57, 43);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+54 );
        }

	glEnd();



///WindMill Bleed 1

glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(16,61);
glVertex2i(14,61);

glEnd();
glPopMatrix();

///WindMill Bleed 2
glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(8,55);
glVertex2i(8,53);

glEnd();
glPopMatrix();

///WindMill Bleed 3
glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(22,53);
glVertex2i(22,55);

glEnd();
glPopMatrix();

///WindMill Bleed 4
glPushMatrix();
glTranslatef(15,54,0);
glRotatef(_angle1, 0.0f, 0.0f,1.0f);
glTranslatef(-15,-54,0);
glBegin(GL_POLYGON);
glColor3ub(192, 57, 43);
glVertex2i(15,54);
glVertex2i(14,47);
glVertex2i(16,47);

glEnd();
glPopMatrix();




}
void tree1(){
///Tree 1
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(33,40);
glVertex2i(33,48);
glVertex2i(31,48);
glVertex2i(31,40);
glEnd();

///Leaf circle 0
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+32,y+52 );
        }

	glEnd();


	///Leaf circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+50 );
        }

	glEnd();

	///Leaf circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+29,y+54 );
        }

	glEnd();


	///Leaf circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+54 );
        }

	glEnd();


	///Leaf circle 4
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+50 );
        }

	glEnd();

}
void tree2(){
///Tree 2
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(51,40);
glVertex2i(51,48);
glVertex2i(49,48);
glVertex2i(49,40);
glEnd();

///Leaf circle 0
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+50,y+52 );
        }

	glEnd();


	///Leaf circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+47,y+50 );
        }

	glEnd();

	///Leaf circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+47,y+54 );
        }

	glEnd();


	///Leaf circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+53,y+54 );
        }

	glEnd();


	///Leaf circle 4
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(24, 106, 59);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=2;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+53,y+50 );
        }

	glEnd();

}
void MainHill(){
glBegin(GL_POLYGON);
glColor3ub(151, 91, 6);
glVertex2f(75.0,10.0);
glVertex2f(215.0,10.0);
glVertex2f(210.0,25.0+10);
glVertex2f(190.0,59.0+10);
glVertex2f(185.0,59.0+10);
glVertex2f(145.0,59.0+10);
glVertex2f(120.0,59.0+10);
glVertex2f(90.0,56.0+10);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(149, 115, 81 );
glVertex2f(75.0,10.0);
glVertex2f(90.0,56.0+10);
glVertex2f(72.0,23.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(149, 121, 81 );
glVertex2f(72.0,23.0);
glVertex2f(90.0,56.0+10);
glVertex2f(75.0,42.0);

glEnd();
}

void tunnel(){
glBegin(GL_POLYGON);
glColor3ub(100, 100, 100);//front
glVertex2f(75.0-10,13.0);
glVertex2f(230.0,13.0);
glVertex2f(230.0,28.0);
glVertex2f(75.0-10,28.0);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(137, 137, 137);//shade
glVertex2f(75.0-10,28.0);
glVertex2f(230.0,28.0);
glVertex2f(220.0,38.0);
glVertex2f(70.0-10,38.0);
glEnd();
}

void tunnel2(){
glBegin(GL_POLYGON);
glColor3ub(86, 86, 86);
glVertex2f(75.0-5,13.0);
glVertex2f(230.0-5,13.0);
glVertex2f(230.0-5,13.0);
glVertex2f(230.0-5,23.0);
glVertex2f(75.0-5,23.0);
glEnd();


glBegin(GL_POLYGON);
glColor3ub(137, 137, 137);
glVertex2f(75.0-5,23.0);
glVertex2f(230.0-5,23.0);
glVertex2f(220.0-5,42.0);
glVertex2f(70.0-5,42.0);
glEnd();
}
void tunnel3(){
glBegin(GL_POLYGON);
glColor3ub(86, 86, 86);
glVertex2f(70.0-5,35.0);
glVertex2f(90.0-5,35.0);
glVertex2f(90.0-5,42.0);
glVertex2f(70.0-5,42.0);
glEnd();
}
void Mosque(){
circle(7,278,50,255, 215, 0);
glBegin(GL_POLYGON);
glColor3ub(200, 200, 200);
glVertex2f(268+0.0,36+0.0);
glVertex2f(268+20.0,36+0.0);
glVertex2f(268+20.0,36+15.0);
glVertex2f(268+0.0,36+15.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(260, 159, 233);
glVertex2f(268+8.0,36+0.0);
glVertex2f(268+12.0,36+0.0);
glVertex2f(268+12.0,36+7.0);
glVertex2f(268+8.0,36+7.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(260, 159, 133);
glVertex2f(265+0.0,36+0.0);
glVertex2f(265+3.0,36+0.0);
glVertex2f(265+3.0,36+20.0);
glVertex2f(265+1.5,36+21.0);
glVertex2f(265+0.0,36+20.0);
glEnd();

glBegin(GL_POLYGON);
glColor3ub(260, 159, 133);
glVertex2f(288+0.0,36+0.0);
glVertex2f(288+3.0,36+0.0);
glVertex2f(288+3.0,36+20.0);
glVertex2f(288+1.5,36+21.0);
glVertex2f(288+0.0,36+20.0);
glEnd();
}
void building1(){
glBegin(GL_POLYGON);
glColor3ub(196, 132, 98);
glVertex2f(240+0.0,36+0.0);
glVertex2f(240+10.0,36+0.0);
glVertex2f(240+10.0,36+28.0);
glVertex2f(240+0.0,36+28.0);
glEnd();

square2(240+1,36+3,53, 140, 153);
square2(240+1,9+36,53, 140, 153);
square2(240+1,15+36,53, 140, 153);
square2(240+1,21+36,53, 140, 153);

square2(240+7,3+36,53, 140, 153);
square2(240+7,9+36,53, 140, 153);
square2(240+7,15+36,53, 140, 153);
square2(240+7,21+36,53, 140, 153);
}
void building3(){
glBegin(GL_POLYGON);
glColor3ub(121, 238, 180);
glVertex2f(260-5+0.0,36+0.0);
glVertex2f(260-5+10.0,36+0.0);
glVertex2f(260-5+10.0,36+28.0);
glVertex2f(260-5+0.0,36+28.0);
glEnd();

square2(255+1,36+3,53, 140, 153);
square2(255+1,9+36,53, 140, 153);
square2(255+1,15+36,53, 140, 153);
square2(255+1,21+36,53, 140, 153);

square2(255+7,3+36,53, 140, 153);
square2(255+7,9+36,53, 140, 153);
square2(255+7,15+36,53, 140, 153);
square2(255+7,21+36,53, 140, 153);

}
void building() {
    glBegin(GL_POLYGON);
    glColor3ub(121, 8, 0);
    glVertex2f(260-20.0,36.0);
    glVertex2f(260-30.0,36.0);
    glVertex2f(260-30.0,36+23.0);
    glVertex2f(260-20.0,36+23.0);
    glEnd();


    square2(255-22,9+31,53, 140, 153);
    square2(255-22,15+31,53, 140, 153);
    square2(255-22,21+31,53, 140, 153);

    square2(255-19,9+31,53, 140, 153);
    square2(255-19,15+31,53, 140, 153);
    square2(255-19,21+31,53, 140, 153);
}
void building2(){
glBegin(GL_POLYGON);
glColor3ub(240, 200, 210);
glVertex2f(248-1.0,37+0.0);
glVertex2f(248+11.0,37+0.0);
glVertex2f(248+11.0,37+28.0);
glVertex2f(248-1.0,37+28.0);
glEnd();
square(249+0,37+21,50, 160, 150);
square(249+0,7+37,50, 160, 150);
}
void town(){
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2f(230-1.0,34.0);
glVertex2f(300.0,34.0);
glVertex2f(300.0,50.0);
glVertex2f(230-1.0,50.0);
glEnd();
glBegin(GL_POLYGON);
glColor3ub(97, 106, 107);
glVertex2f(230-1.0,32.0);
glVertex2f(300.0,32.0);
glVertex2f(300.0,40.0);
glVertex2f(230-1.0,40.0);
glEnd();
}



void cloud1(){
///Circle 1
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4,y+74 );
        }


	glEnd();
	glPopMatrix();
///Circle 2
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+3.5,y+75.5 );
        }


	glEnd();
	glPopMatrix();
///Circle 3
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+4.5,y+76.5 );
        }


	glEnd();
	glPopMatrix();

	///Circle 4
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6.5,y+74.5 );
        }


	glEnd();
	glPopMatrix();

	///Circle 5
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7.5,y+75.5 );
        }


	glEnd();
	glPopMatrix();

	///Circle 6
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+7,y+76.5 );
        }


	glEnd();
	glPopMatrix();

	///Circle 7
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+6,y+76 );
        }


	glEnd();
	glPopMatrix();

}
void cloud2(){
//Circle 1
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+73.5 );
        }


	glEnd();
	glPopMatrix();
///Circle 2
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.8;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+13,y+75 );
        }


	glEnd();
	glPopMatrix();
///Circle 3
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+14.5,y+76 );
        }


	glEnd();
	glPopMatrix();

	///Circle 4
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+16,y+73 );
        }


	glEnd();
	glPopMatrix();

	///Circle 5
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+17,y+75 );
        }


	glEnd();
	glPopMatrix();

	///Circle 6
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+16,y+75 );
        }


	glEnd();
	glPopMatrix();

	///Circle 7
glPushMatrix();
glTranslatef(_move, 0.0f, 0.0f);
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(253,254,254);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=1.5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+15,y+74 );
        }


	glEnd();
	glPopMatrix();

}
void cloud3(){
glPushMatrix();
glTranslatef(_move2, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
circle(1.5,30.0-40,78.0-2,214, 216, 214);
circle(1.5,29.0-40,77.0-2,214, 216, 214);
circle(1.5,31.0-40,76.0-2,214, 216, 214);
circle(2.5,31.0-40,78.0-2,214, 216, 214);
circle(1.5,33.0-40,77.0-2,214, 216, 214);
circle(1.5,34.0-40,76.0-2,214, 216, 214);
circle(1.5,34.0-40,78.0-2,214, 216, 214);
circle(2,36.0-40,78.0-2,214, 216, 214);

glPopMatrix();
}
void cloud4(){
glPushMatrix();
glTranslatef(_move2, 0.0f, 0.0f);
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
circle(1.5,30.0-55,78.0,214, 216, 214);
circle(2.0,26.0-55,78.0,214, 216, 214);
circle(2.5,28.50-55,77.0,214, 216, 214);
circle(1.5,31.0-55,76.0,214, 216, 214);
circle(2.5,31.0-55,78.0,214, 216, 214);
circle(2.0,33.0-55,77.0,214, 216, 214);
circle(1.5,34.0-55,76.0,214, 216, 214);
circle(2.5,34.5-55,78.0,214, 216, 214);
glPopMatrix();
}
void moon(){
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(r2,g2,b2);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=5;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+41,y+73);
        }

	glEnd();

}


void forest(){

///Big Circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<300;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+8,y+50 );
        }


	glEnd();
///Big Circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+25,y+50 );
        }


	glEnd();

///Big Circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=7;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+42,y+50 );
        }


	glEnd();

///Small Circle 1
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+0,y+51 );
        }


	glEnd();
///Small Circle 2
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+17,y+51 );
        }


	glEnd();

///Small Circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+35,y+51 );
        }


	glEnd();

///Small Circle 3
glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(20,90,50);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x+50,y+51 );
        }


	glEnd();
}


void straw(){
glBegin(GL_POLYGON);
glColor3ub(241, 196, 15);
glVertex2i(5,38);
glVertex2i(5,48);
glVertex2i(0,48);
glVertex2i(0,38);
glEnd();

glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
        {
            glColor3ub(241, 196, 15);
            float pi=3.1416;
            float A=(i*2*pi)/200;
            float r=4;
            float x = r * cos(A);
            float y = r * sin(A);
            glVertex2f(x,y+48 );
        }

	glEnd();


}

void house1(){
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(14,37);
glVertex2i(14,38);
glVertex2i(2,38);
glVertex2i(2,37);
glEnd();

///Body part 1
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(13,38);
glVertex2i(13,45);
glVertex2i(3,45);
glVertex2i(3,38);
glEnd();

/// Roof No1
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(14,45);
glVertex2i(12,48);
glVertex2i(4,48);
glVertex2i(2,45);
glEnd();

///Gate part 1
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(12,38);
glVertex2i(12,42);
glVertex2i(10,42);
glVertex2i(10,38);
glEnd();

/// Window part 1
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(7,40);
glVertex2i(7,42);
glVertex2i(5,42);
glVertex2i(5,40);
glEnd();

}

void house2(){
///Lower part 2
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(30,37);
glVertex2i(30,38);
glVertex2i(16,38);
glVertex2i(16,37);
glEnd();

///Body part 2
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(29,38);
glVertex2i(29,45);
glVertex2i(17,45);
glVertex2i(17,38);
glEnd();

/// Roof No 2
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(30,45);
glVertex2i(28,48);
glVertex2i(18,48);
glVertex2i(16,45);
glEnd();

///Gate part 2
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(21,38);
glVertex2i(21,42);
glVertex2i(19,42);
glVertex2i(19,38);
glEnd();

/// Window part 2
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(26,40);
glVertex2i(26,42);
glVertex2i(24,42);
glVertex2i(24,40);
glEnd();


}

void house3(){
///Lower part 3
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(48,37);
glVertex2i(48,38);
glVertex2i(34,38);
glVertex2i(34,37);
glEnd();

///Body part 3
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(47,38);
glVertex2i(47,45);
glVertex2i(35,45);
glVertex2i(35,38);
glEnd();

/// Roof No 3
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(48,45);
glVertex2i(46,48);
glVertex2i(36,48);
glVertex2i(34,45);
glEnd();

///Gate part 3
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(39,38);
glVertex2i(39,42);
glVertex2i(37,42);
glVertex2i(37,38);
glEnd();

/// Window part 3
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(44,40);
glVertex2i(44,42);
glVertex2i(42,42);
glVertex2i(42,40);
glEnd();
}
void lampost(){
///Lamp Stand
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(226,36);
glVertex2i(226,50);
glVertex2i(225,50);
glVertex2i(225,36);
glEnd();

///Lamp Light
glBegin(GL_POLYGON);
glColor3ub(241,196,15);
glVertex2i(226,50);
glVertex2i(227,52);
glVertex2i(224,52);
glVertex2i(225,50);
glEnd();

///Lamp Uppeer Rectangle
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(227,52);
glVertex2i(227,53);
glVertex2i(224,53);
glVertex2i(224,52);
glEnd();

///Lamp Uppeer Triangle
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(227,53);
glVertex2f(225.5,54);
glVertex2i(224,53);

glEnd();

}

void car1(){
glPushMatrix();
    glTranslated(_move3,0,0);
//body
    glBegin(GL_POLYGON);
    glColor3ub(240, 85, 58);
    glVertex2f(0.0-10,1.0+27);
    glVertex2f(17.50-10,1.0+27);
    glVertex2f(17.0-10,3.0+27); //
    glVertex2f(13.50-10,4.0+27);
    glVertex2f(3.50-10,4.0+27);
    glVertex2f(0.50-10,3.50+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(240, 85, 58);
    glVertex2f(3.50-10,4.0+27);
    glVertex2f(13.50-10,4.0+27);
    glVertex2f(12.50-10,6.0+27);
    glVertex2f(4.50-10,6.0+27);
    glEnd();
//window
    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(3.70-10,4.10+27);
    glVertex2f(8.3-10,4.10+27);
    glVertex2f(8.3-10,5.90+27);
    glVertex2f(4.5-10,5.90+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(8.7-10,4.10+27);
    glVertex2f(13.3-10,4.10+27);
    glVertex2f(12.3-10,5.90+27);
    glVertex2f(8.7-10,5.90+27);
    glEnd();

//wheel
    circle(1.35,3.0-10,1.0+27,0,0,0);
    circle(1.35,13.50-10,1.0+27,0,0,0);
    glPopMatrix();

}

void car2(){

    glPushMatrix();
    glTranslated(_move3,0,0);

    //body
    glBegin(GL_POLYGON);
    glColor3ub(45, 104, 201);
    glVertex2f(0.0-35,1.0+27);
    glVertex2f(17.50-35,1.0+27);
    glVertex2f(17.0-35,3.0+27);
    glVertex2f(13.50-35,4.0+27);
    glVertex2f(3.50-35,4.0+27);
    glVertex2f(0.50-35,3.50+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(45, 104, 201);
    glVertex2f(3.50-35,4.0+27);
    glVertex2f(13.50-35,4.0+27);
    glVertex2f(12.50-35,6.0+27);
    glVertex2f(4.50-35,6.0+27);
    glEnd();
//window
    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(3.70-35,4.10+27);
    glVertex2f(8.3-35,4.10+27);
    glVertex2f(8.3-35,5.90+27);
    glVertex2f(4.5-35,5.90+27);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(8.7-35,4.10+27);
    glVertex2f(13.3-35,4.10+27);
    glVertex2f(12.3-35,5.90+27);
    glVertex2f(8.7-35,5.90+27);
    glEnd();

//wheel
    circle(1.35,3.0-35,1.0+27,0,0,0);
    circle(1.35,13.50-35,1.0+27,0,0,0);

    glPopMatrix();

}

void car3(){
glPushMatrix();
glTranslated(_move4,0,0);
     glBegin(GL_POLYGON);
    glColor3ub(252, 186, 3);
    glVertex2f(0.0+350,1.0+20);
    glVertex2f(6.0+350,1.0+20);
    glVertex2f(6.0+350,7.0+20);
    glVertex2f(1.0+350,7.0+20);
    glVertex2f(0.0+350,6.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(1.0+350,6.8+20);
    glVertex2f(5.0+350,6.8+20);
    glVertex2f(5.0+350,4.5+20);
    glVertex2f(1.0+350,4.5+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(214, 62, 19);
    glVertex2f(3+350,1.8+20);
    glVertex2f(5.0+350,1.8+20);
    glVertex2f(5.0+350,4.0+20);
    glVertex2f(3+350,4.0+20);
    glEnd();


// body
    glBegin(GL_POLYGON);
    glColor3ub(28, 67, 153);
    glVertex2f(6+350,1+20);
    glVertex2f(16+350,1.0+20);
    glVertex2f(16+350,5.5+20);
    glVertex2f(6+350,5.5+20);
    glEnd();

    circle(1.40,3.0+350,1.0+20,0,0,0);
    circle(1.40,7.5+350,1.0+20,0,0,0);
    circle(1.40,13.5+350,1.0+20,0,0,0);

    glPopMatrix();

}

void car4(){
    glPushMatrix();
    glTranslated(_move4,0,0);
    glBegin(GL_POLYGON);
    glColor3ub(205, 114, 52);
    glVertex2f(0.0+320,1.0+20);
    glVertex2f(18.0+320,1.0+20);
    glVertex2f(18.0+320,5.0+20);
    glVertex2f(0.0+320,5.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(205, 114, 52);
    glVertex2f(0.0+320,5.0+20);
    glVertex2f(18.0+320,5.0+20);
    glVertex2f(18.0+320,8.0+20);
    glVertex2f(0.8+320,8.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(0.7+320,7.5+20);
    glVertex2f(3.5+320,7.5+20);
    glVertex2f(3.5+320,4.5+20);
    glVertex2f(0.7+320,4.5+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(4.0+320,7.5+20);
    glVertex2f(6.5+320,7.5+20);
    glVertex2f(6.5+320,2.0+20);
    glVertex2f(4.0+320,2.0+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(7.0+320,7.5+20);
    glVertex2f(10.0+320,7.5+20);
    glVertex2f(10.0+320,4.5+20);
    glVertex2f(7.0+320,4.5+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(10.5+320,7.5+20);
    glVertex2f(13.5+320,7.5+20);
    glVertex2f(13.5+320,4.5+20);
    glVertex2f(10.5+320,4.5+20);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(201, 201, 201);
    glVertex2f(14.0+320,7.5+20);
    glVertex2f(17.0+320,7.5+20);
    glVertex2f(17.0+320,4.5+20);
    glVertex2f(14.0+320,4.5+20);
    glEnd();

    circle(01.20,2.0+320,1.10+20,0,0,0);
    circle(01.20,11.0+320,1.10+20,0,0,0);
    glPopMatrix();


}


void forest2(){
circle(5,0,50,20,90,40);
circle(5,13,50,20,90,40);
circle(5,18,52,20,90,40);
circle(5,38,52,20,90,40);

hill1(20,48);
hill1(28,40);
hill2(15,40);
hill2(20,43);
hill2(22,42);
hill2(53,40);
circle(5, 210,50,20,90,40 );
circle(5, 215, 50,20,90,40);
hill1(215,420);
hill2(212,40);
circle(5, 212,55,20,90,40 );


}

void forest4(){
circle(5,108,52,20,90,40);
circle(5,115,52,20,90,40);
circle(5,120,52,20,90,40);
hill2(62,43);
hill1(70,43);
hill1(101,43);
hill2(111,43);
circle(10,60,50,20,90,50);
circle(8,68,50,20,90,50);



}

void grass(float x1, float y1, float x2, float y2) {

    //point to point grass
    int numGrassBlades = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) / 1;
    for (int i = 0; i < numGrassBlades; ++i) {
        float t = float(i) / float(numGrassBlades - 1);
        float x = x1 + t * (x2 - x1);
        float y = y1 + t * (y2 - y1);

        //grass
        glColor3ub(23, 99, 20);

        for (int i = 0; i <10; ++i) {
        float length = rand() % 5;
        float sway = rand() % 3;
        glBegin(GL_LINES);
        glVertex2f(x, y);
        glVertex2f(x + sway, y + length);
        glEnd();
        }
    }
}





void forest3(){
circle(7,147,50,20,90,50);
circle(10,157,50,20,90,50);
circle(10,169,50,20,90,50);
circle(6,179,53,20,90,50);
circle(8,189,50,20,90,50);


}

void river() {
    // Draw the river
    glBegin(GL_POLYGON);
    glColor3ub(0, 120, 225);
    glVertex2f(0.0, -43);
    glVertex2f(300.0, -43);
    glVertex2f(300.0, 3);
    glVertex2f(0.0, 3);
    glEnd();

    // riverside
    glBegin(GL_POLYGON);
    glColor3ub(175, 96, 26);
    glVertex2i(300, 3);
    glVertex2i(300, 8);
    glVertex2i(0, 8);
    glVertex2i(0, 3);
    glEnd();

    //wave
    glColor3ub(0, 0, 255);
    float waveHeight = 0.8;
    float waveLength =20.0;
    float waveSpacing = 10.0;
    waveOffset += 0.08;

    glBegin(GL_LINES);
    for (float x = 0.0; x <= 500.0; x += waveSpacing) {
        for (float y = -43; y <= 0.0; y += waveLength) {

            float xOffset = x + waveOffset * (y / 20.0);
            glVertex2f(xOffset, y);
            glVertex2f(xOffset + waveLength / 5, y + waveHeight);
        }
    }
    glEnd();
}

void road(){
    glBegin(GL_POLYGON);
    glColor3ub(97, 106, 107);
    glVertex2i(300,18);
    glVertex2i(300,34);
    glVertex2i(0,34);
    glVertex2i(0,18);
    glEnd();

    glLineWidth(2.0);
    glBegin(GL_LINES);
    glColor3f(1.0f,1.0,0.0f);
    glVertex2i(0,26);
    glVertex2i(300,26);

    glEnd();
}
void houseGrass(){
    glBegin(GL_POLYGON);
    glColor3ub(r3,g3,b3);
    glVertex2i(300,34);
    glVertex2i(300,50);
    glVertex2i(0,50);
    glVertex2i(0,34);
    glEnd();
}
void villageRoad(){
    glBegin(GL_POLYGON);
    glColor3ub(184, 149, 9);
    glVertex2i(300,18);
    glVertex2i(300,26);
    glVertex2i(0,26);
    glVertex2i(0,18);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(184, 149, 9);
    glVertex2i(70,26);
    glVertex2i(70,8);
    glVertex2i(50,8);
    glVertex2i(50,26);
    glEnd();
}
void house4(){
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(214+50,37);
glVertex2i(214+50,38);
glVertex2i(202+50,38);
glVertex2i(202+50,37);
glEnd();

///Body part 1
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(213+50,38);
glVertex2i(213+50,45);
glVertex2i(203+50,45);
glVertex2i(203+50,38);
glEnd();

/// Roof No1
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(214+50,45);
glVertex2i(212+50,48);
glVertex2i(204+50,48);
glVertex2i(202+50,45);
glEnd();

///Gate part 1
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(212+50,38);
glVertex2i(212+50,42);
glVertex2i(210+50,42);
glVertex2i(210+50,38);
glEnd();

/// Window part 1
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(207+50,40);
glVertex2i(207+50,42);
glVertex2i(205+50,42);
glVertex2i(205+50,40);
glEnd();

}

void house5(){
///Lower part 2
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(230+20,37);
glVertex2i(230+20,38);
glVertex2i(216+20,38);
glVertex2i(216+20,37);
glEnd();

///Body part 2
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(229+20,38);
glVertex2i(229+20,45);
glVertex2i(217+20,45);
glVertex2i(217+20,38);
glEnd();

/// Roof No 2
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(230+20,45);
glVertex2i(228+20,48);
glVertex2i(218+20,48);
glVertex2i(216+20,45);
glEnd();

///Gate part 2
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(221+20,38);
glVertex2i(221+20,42);
glVertex2i(219+20,42);
glVertex2i(219+20,38);
glEnd();

/// Window part 2
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(226+20,40);
glVertex2i(226+20,42);
glVertex2i(224+20,42);
glVertex2i(224+20,40);
glEnd();


}


void house6(){
///Lower part 3
glBegin(GL_POLYGON);
glColor3ub(135, 54, 0);
glVertex2i(48+260,37);
glVertex2i(48+260,38);
glVertex2i(34+260,38);
glVertex2i(34+260,37);
glEnd();

///Body part 3
glBegin(GL_POLYGON);
glColor3ub(156, 100, 12);
glVertex2i(47+260,38);
glVertex2i(47+260,45);
glVertex2i(35+260,45);
glVertex2i(35+260,38);
glEnd();

/// Roof No 3
glBegin(GL_POLYGON);
glColor3ub(131, 145, 146);
glVertex2i(48+260,45);
glVertex2i(46+260,48);
glVertex2i(36+260,48);
glVertex2i(34+260,45);
glEnd();

///Gate part 3
glBegin(GL_POLYGON);
glColor3ub(123, 36, 28);
glVertex2i(39+260,38);
glVertex2i(39+260,42);
glVertex2i(37+260,42);
glVertex2i(37+260,38);
glEnd();

/// Window part 3
glBegin(GL_POLYGON);
glColor3ub(7,8,8);
glVertex2i(44+260,40);
glVertex2i(44+260,42);
glVertex2i(42+260,42);
glVertex2i(42+260,40);
glEnd();
}
void display() {

glClear(GL_COLOR_BUFFER_BIT);

glMatrixMode(GL_MODELVIEW);
///sky(Night View)
glBegin(GL_POLYGON);
glColor3ub(r1, g1, b1);
glVertex2i(300,50);
glVertex2i(300,90);
glVertex2i(0,90);
glVertex2i(0,50);
glEnd();


moon();


glPushMatrix();
glTranslated(_moveX,_moveY,0);
aeroplane(285,60);
glPopMatrix();


river();
cloud1();

cloud2();

forest();

///Forest
circle(10,60,50,20,90,50);
circle(8,68,50,20,90,50);
circle(10,78,50,20,90,50);
circle(7,89,50,20,90,50);
circle(10,98,50,20,90,50);
circle(10,108,50,20,90,50);
circle(6,115,50,20,90,50);
circle(8,125,50,20,90,50);

circle(8,130,50,20,90,50);
circle(10,137,50,20,90,50);
circle(7,147,50,20,90,50);
circle(10,157,50,20,90,50);
circle(10,169,50,20,90,50);
circle(6,179,53,20,90,50);
circle(8,189,50,20,90,50);

///Grass Side
glBegin(GL_POLYGON);
glColor3ub(r3, g3, b3);
glVertex2i(300,8);
glVertex2i(300,18);
glVertex2i(0,18);
glVertex2i(0,8);
glEnd();

road();

houseGrass();



tree1();

tree2();

windmill();

house1();

house2();

house3();
lampost();

cloud3();

cloud4();

///Tree..................
tree(160,40);
tree(165,43);
tree(178,40);
tree(190,40);
tree(210,39);
tree(212,39);

town();
//tree(234,40);

tree(134,40);
tree(194,40);

building();
building2();

building3();

building1();

Mosque();

tunnel3();



car1();



car2();
car3();


car4();


tunnel2();


MainHill();
grass(0,9, 40,9);
grass(44,9, 60,9);
grass(65,9, 80,9);
grass(84,9, 100,9);
grass(110,9, 140,9);
grass(155,9, 170,9);
grass(190,9, 240,9);
grass(260,9, 300,9);
tree(110,9);
tree(112,9);
tree(115,9);
tree(120,9);
tree(140,9);
tree(135,9);
tree(150,9);
tree(235,9);
//
tree(0, 10);
tree(1,10);
tree(3,10);
tree(7,10);
tree(12,10);
tree(19,10);
tree(20,10);

tree(19,10);
tree(23,10);
tree(37,10);
tree(42,10);
tree(43,10);
tree(45,10);
//
grass(0,8, 30,8);
grass(35,8, 50,8);
grass(55,8, 70,8);
grass(84,8, 115,8);
grass(120,8, 140,8);
tree(300, 10);
tree(291,9);
tree(293,10);
tree(277,9);
tree(282,10);
tree(289,10);
tree(220,9);

tree(249,9);
tree(235,10);
tree(290,10);
tree(242,9);
tree(283,10);
tree(245,10);
grass(148,8, 180,8);
grass(200,8, 230,8);
grass(245,8, 260,8);
grass(275,8, 300,8);


glPushMatrix();
glTranslated(_move4,0,0);
boat1(311,-8);
glPopMatrix();

glPushMatrix();
glTranslated(_move2,0,0);
boat1(-10,-20);
glPopMatrix();


glPushMatrix();
glTranslated(_move2,0,0);
boat2(-35,-25);
glPopMatrix();

glPushMatrix();
glTranslated(_move4,0,0);
ship(350,-38);
glPopMatrix();

glutSwapBuffers();

glFlush();

}

void display2() {

glClear(GL_COLOR_BUFFER_BIT);



glMatrixMode(GL_MODELVIEW);
///sky(Night View)
glBegin(GL_POLYGON);
glColor3ub(r1, g1, b1);
glVertex2i(300,50);
glVertex2i(300,90);
glVertex2i(0,90);
glVertex2i(0,50);
glEnd();


///Moon/sun
moon();

///Aeroplane

glPushMatrix();
glTranslated(_moveX,_moveY,0);
aeroplane(285,60);
glPopMatrix();

river();

cloud1();

cloud2();

forest2();

forest4();

forest3();

///Forest
hill2(35, 40);
hill1(20, 40);
hill2(40, 40);
hill1(50, 40);
circle(10,60,50,20,90,50);
circle(8,68,50,20,90,50);
circle(10,78,50,20,90,50);
circle(7,89,50,20,90,50);
circle(10,98,50,20,90,50);
circle(10,108,50,20,90,50);
circle(6,115,50,20,90,50);
circle(8,125,50,20,90,50);

circle(8,130,50,20,90,50);
circle(10,137,50,20,90,50);
circle(7,147,50,20,90,50);
circle(10,157,50,20,90,50);
circle(10,169,50,20,90,50);
circle(6,179,53,20,90,50);
circle(8,189,50,20,90,50);
hill1(220, 50);
hill1(225, 50);
hill2(233, 50);
hill1(227, 50);
hill2(230,50);
hill1(237, 45);

circle(8,130+150,50,20,90,50);
circle(10,137+150,50,20,90,50);
circle(7,147+150,50,20,90,50);
circle(10,157+100,50,20,90,50);
circle(10,169+100,50,20,90,50);
circle(6,179+100,53,20,90,50);
circle(8,189+100,50,20,90,50);
///Grass Side
glBegin(GL_POLYGON);
glColor3ub(r3, g3, b3);
glVertex2i(300,8);
glVertex2i(300,18);
glVertex2i(0,18);
glVertex2i(0,8);
glEnd();

///Grass(houseSide)
glBegin(GL_POLYGON);
glColor3ub(r3,g3,b3);
glVertex2i(300,26);
glVertex2i(300,50);
glVertex2i(0,50);
glVertex2i(0,26);
glEnd();


straw();

tree1();
tree2();

windmill();

tree(220, 40);
tree(230, 40);
tree(225, 40);
tree(235, 38);

tree(250, 40);
tree(255, 40);
tree(260, 38);
house1();

house2();

house3();
house4();
house5();
house6();

cloud3();

cloud4();

tree(60,40);
tree(65,43);
tree(78,40);
tree(90,40);
tree(120,39);
tree(112,39);

tree(134,40);

tree(194,40);

villageRoad();
grass(0,27, 15, 27);
grass(19,27, 24, 27);
grass(30,27, 38, 27);
grass(42, 27, 50, 27);

grass(215,26, 235, 26);
grass(240,26, 248, 26);
grass(250,26, 268, 26);
grass(250, 26, 300, 26);

grass(0,17, 15, 17);
grass(19,17, 24, 17);
grass(30,17, 38, 17);
grass(42, 17, 50, 17);
grass(0,15, 13, 15);
grass(18,15, 26, 15);
grass(32,15, 42, 15);
grass(45, 15, 50, 15);
tree(0, 15);
tree(1,15);
tree(3,15);
tree(7,15);
tree(12,15);
tree(19,15);
tree(20,15);
tree(300, 10);
tree(291,9);
tree(293,10);
tree(277,9);
tree(282,10);
tree(289,10);
tree(220,9);

tree(249,9);
tree(235,10);
tree(290,10);
tree(242,9);
tree(283,10);
tree(245,10);
tree(19,15);
tree(23,15);
tree(37,15);
tree(42,15);
tree(43,15);
tree(45,15);
grass(0,14, 15, 14);
grass(19,14, 24, 14);
grass(30,14, 38, 14);
grass(42, 14, 50, 14);
grass(0,13, 13, 13);
grass(18,13, 26, 13);
grass(32,13, 42, 13);
grass(45, 13, 50, 13);
MainHill();
grass(0,9, 40,9);

grass(84,9, 100,9);
grass(110,9, 140,9);
grass(155,9, 170,9);
grass(190,9, 240,9);
grass(260,9, 300,9);
tree(110,9);
tree(112,9);
tree(115,9);
tree(120,9);
tree(140,9);
tree(135,9);
tree(150,9);
tree(235,9);
grass(0,8, 30,8);

grass(84,8, 115,8);
grass(120,8, 140,8);
grass(148,8, 180,8);
grass(200,8, 230,8);
grass(245,8, 260,8);
grass(275,8, 300,8);





glPushMatrix();
glTranslated(_move4,0,0);
boat1(311,-15);
glPopMatrix();

glPushMatrix();
glTranslated(_move2,0,0);
boat2(-15,-25);
glPopMatrix();

glPushMatrix();
glTranslated(_move4,0,0);
ship(311,-40);
glPopMatrix();

glutSwapBuffers();

glFlush();

}

void update(int value){
    _angle1 += 2.0;
    glutPostRedisplay();
    glutTimerFunc(16, update, 0);

}

void update1(int value)
{
     _move +=0.2;
if(_move >300)
{
_move = 0;
}
glutPostRedisplay();
glutTimerFunc(23, update1, 0);
}

void update3(int value)
{
     _move3 +=0.25;
if(_move3 >350)
{
_move3 = -5;
}
glutPostRedisplay();
glutTimerFunc(20, update3, 0);
}

void update2(int value)//cloud3,4
{
     _move2 +=0.18;
if(_move2 >350)
{
_move2 = 0;
}
glutPostRedisplay();
glutTimerFunc(23, update2, 0);
}


void update4(int value)///ship/boat1
{
     _move4 -=0.25;
if(_move4 <-400)
{
_move4 = 0;
}
glutPostRedisplay();
glutTimerFunc(20, update4, 0);
}

void update5(int value)///aeroplane
{
     _moveX -=0.25;
     _moveY +=0.05;
if(_moveX <-400)
{
_moveX = 0;
_moveY = 0;
}

glutPostRedisplay();
glutTimerFunc(20, update5, 0);
}


void Mykybrd(unsigned char key,int x,int y){
switch(key){
case 'n':
    r1=0,g1=0,b1=54;
    r2=253;
    g2=253;
    b2=253;
    r3=30;
    g3=132;
    b3=73;

    break;

case 'd':
    r1=0,g1= 216,b1=254;

    r2=253;
    g2=132;
    b2=29;
    r3=57;
    g3=163;
    b3=42;

    break;
case '2':
    glutDisplayFunc(display2);
    break;

default:
    glutDisplayFunc(display);
    break;

}

}


int main(int argc, char** argv) {

glutInit(&argc, argv);
glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
glutInitWindowSize(1800,1000);
glutCreateWindow("the tunnel");
glutInitWindowPosition(50,50);
gluOrtho2D(0,300,-40,90);
glutDisplayFunc(display);
glutTimerFunc(25, update, 0);
glutTimerFunc(20, update1, 0);
glutTimerFunc(18, update3, 0);
glutTimerFunc(20, update2, 0);
glutTimerFunc(20, update4, 0);
glutTimerFunc(100, update5, 0);
glutKeyboardFunc(Mykybrd);

initGL();

glutMainLoop();
return 0;

}
