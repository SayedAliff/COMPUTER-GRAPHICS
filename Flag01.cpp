#include <windows.h>
#include <GL/glut.h>
#include <cmath>



void display()
{
    glClearColor(0.04, 0.18, 0.33, 1.0);

    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer

    // Draw x-axis
    glColor3f(1.0f, 1.0f, 1.0f);
    glBegin(GL_LINES);
    glVertex2f(-1.0f, 0.0f);
    glVertex2f(1.0f, 0.0f);
    glEnd();



    // Draw y-axis
    glBegin(GL_LINES);
    glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, 1.0f);
    glEnd();

    //South Africa
    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.45f, 0.17f);
    glVertex2f(-0.8, 0.3);
    glVertex2f(-0.8, 0.7);
    glVertex2f(-0.2, 0.7);
    glVertex2f(-0.2, 0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0, 0.92, 0.21);
    glVertex2f(-0.8, 0.36);
    glVertex2f(-0.58, 0.49);
    glVertex2f(-0.8, 0.64);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0, 0.0, 0.0);
    glVertex2f(-0.8, 0.39);
    glVertex2f(-0.62, 0.49);
    glVertex2f(-0.8, 0.61);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.72, 0.3);
    glVertex2f(-0.48, 0.45);
    glVertex2f(-0.2, 0.45);
    glVertex2f(-0.2, 0.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.72, 0.7);
    glVertex2f(-0.48, 0.55);
    glVertex2f(-0.2, 0.55);
    glVertex2f(-0.2, 0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.68, 0.7);
    glVertex2f(-0.48, 0.574);
    glVertex2f(-0.2, 0.574);
    glVertex2f(-0.2, 0.7);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.68, 0.3);
    glVertex2f(-0.48, 0.428);
    glVertex2f(-0.2, 0.428);
    glVertex2f(-0.2, 0.3);
    glEnd();


    //Wallis
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.28f, 0.25f);
    glVertex2f(0.2, 0.3);
    glVertex2f(0.2, 0.7);
    glVertex2f(0.8, 0.7);
    glVertex2f(0.8, 0.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2, 0.54);
    glVertex2f(0.2, 0.7);
    glVertex2f(0.44, 0.7);
    glVertex2f(0.44, 0.54);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(0.2, 0.7);
    glVertex2f(0.28, 0.7);
    glVertex2f(0.28, 0.545);
    glVertex2f(0.2, 0.545);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.28f, 0.25f);
    glVertex2f(0.36, 0.7);
    glVertex2f(0.435, 0.7);
    glVertex2f(0.435, 0.545);
    glVertex2f(0.36, 0.545);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.55, 0.56);
    glVertex2f(0.68, 0.56);
    glVertex2f(0.68, 0.43);
    glVertex2f(0.55, 0.43);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.28f, 0.25f);
    glVertex2f(0.55, 0.54);
    glVertex2f(0.55,0.56);
    glVertex2f(0.57, 0.56);
    glVertex2f(0.68, 0.45);
    glVertex2f(0.68, 0.43);
    glVertex2f(0.66, 0.43);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.28f, 0.25f);
    glVertex2f(0.68, 0.54);
    glVertex2f(0.68,0.56);
    glVertex2f(0.66, 0.56);
    glVertex2f(0.55, 0.45);
    glVertex2f(0.55, 0.43);
    glVertex2f(0.57, 0.43);
    glEnd();

    //Qatar
    glBegin(GL_QUADS);
    glColor3f(0.54f, 0.08f, 0.21f);
    glVertex2f(-0.8, -0.3);
    glVertex2f(-0.8, -0.7);
    glVertex2f(-0.2, -0.7);
    glVertex2f(-0.2, -0.3);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.3);
    glVertex2f(-0.56, -0.32);
    glVertex2f(-0.63, -0.34);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.34);
    glVertex2f(-0.56, -0.36);
    glVertex2f(-0.63, -0.38);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.38);
    glVertex2f(-0.56, -0.40);
    glVertex2f(-0.63, -0.42);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.42);
    glVertex2f(-0.56, -0.44);
    glVertex2f(-0.63, -0.46);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.46);
    glVertex2f(-0.56, -0.48);
    glVertex2f(-0.63, -0.50);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.50);
    glVertex2f(-0.56, -0.52);
    glVertex2f(-0.63, -0.54);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.54);
    glVertex2f(-0.56, -0.56);
    glVertex2f(-0.63, -0.58);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.58);
    glVertex2f(-0.56, -0.60);
    glVertex2f(-0.63, -0.62);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.62);
    glVertex2f(-0.56, -0.64);
    glVertex2f(-0.63, -0.66);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.63, -0.66);
    glVertex2f(-0.56, -0.68);
    glVertex2f(-0.63, -0.7);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.00f);
    glVertex2f(-0.63, -0.3);
    glVertex2f(-0.63, -0.7);
    glVertex2f(-0.8, -0.7);
    glVertex2f(-0.8, -0.3);
    glEnd();

    //GREECE
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.8, -0.3);
    glVertex2f(0.8, -0.7);
    glVertex2f(0.2, -0.7);
    glVertex2f(0.2, -0.3);
    glEnd();
//1
    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.35f, 0.89f);
    glVertex2f(0.8, -0.7);
    glVertex2f(0.8, -0.65);
    glVertex2f(0.2, -0.65);
    glVertex2f(0.2, -0.7);
    glEnd();
//2
    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.35f, 0.89f);
    glVertex2f(0.8, -0.61);
    glVertex2f(0.8, -0.56);
    glVertex2f(0.2, -0.56);
    glVertex2f(0.2, -0.61);
    glEnd();
//3
    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.35f, 0.89f);
    glVertex2f(0.8, -0.52);
    glVertex2f(0.8, -0.47);
    glVertex2f(0.42, -0.47);
    glVertex2f(0.42, -0.52);
    glEnd();
//4
    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.35f, 0.89f);
    glVertex2f(0.8, -0.43);
    glVertex2f(0.8, -0.38);
    glVertex2f(0.42, -0.38);
    glVertex2f(0.42, -0.43);
    glEnd();
//5
    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.35f, 0.89f);
    glVertex2f(0.8, -0.34);
    glVertex2f(0.8, -0.3);
    glVertex2f(0.42, -0.3);
    glVertex2f(0.42, -0.34);
    glEnd();



    glBegin(GL_QUADS);
    glColor3f(0.11f, 0.35f, 0.89f);
    glVertex2f(0.2, -0.3);
    glVertex2f(0.2, -0.52);
    glVertex2f(0.46, -0.52);
    glVertex2f(0.46, -0.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.30, -0.3);
    glVertex2f(0.30, -0.52);
    glVertex2f(0.35, -0.52);
    glVertex2f(0.35, -0.3);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.2, -0.38);
    glVertex2f(0.2, -0.43);
    glVertex2f(0.46, -0.43);
    glVertex2f(0.46, -0.38);
    glEnd();

glFlush();
}

/* Main function: GLUT runs as a console application starting at main() */
int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitWindowSize(900, 800); // Set the window's initial width & height
    glutInitWindowPosition(80, 50);  // Set the window's initial position according to the monitor
    glutCreateWindow("Flag_01"); // Create a window with the given title
    glutDisplayFunc(display); // Register display callback handler for window re-paint
    glutMainLoop(); // Enter the event-processing loop
    return 0;
}
