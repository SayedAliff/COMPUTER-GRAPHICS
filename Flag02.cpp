#include <windows.h>
#include <GL/glut.h>
#include <cmath>



void display()
{


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
//Yugoslavia
    glBegin(GL_QUADS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.9, 0.6);
    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.6);
    glEnd();

    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.9, 0.2);
    glVertex2f(-0.1, 0.2);
    glVertex2f(-0.1, 0.33);
    glVertex2f(-0.9, 0.33);
    glEnd();
    glBegin(GL_QUADS);
    glColor3f(0.0f, 0.0f, 1.0f);
    glVertex2f(-0.9, 0.6);
    glVertex2f(-0.1, 0.6);
    glVertex2f(-0.1, 0.47);
    glVertex2f(-0.9, 0.47);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.9f, 0.7f, 0.0f);
    glVertex2f(-0.53, 0.44);
    glVertex2f(-0.50, 0.53);
    glVertex2f(-0.46, 0.44);
    glVertex2f(-0.37, 0.44);
    glVertex2f(-0.44, 0.38);
    glVertex2f(-0.42, 0.29);
    glVertex2f(-0.50, 0.34);
    glVertex2f(-0.57, 0.29);
    glVertex2f(-0.55, 0.38);
    glVertex2f(-0.62, 0.44);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.52, 0.43);
    glVertex2f(-0.50, 0.51);
    glVertex2f(-0.47, 0.43);
    glVertex2f(-0.39, 0.43);
    glVertex2f(-0.45, 0.38);
    glVertex2f(-0.43, 0.31);
    glVertex2f(-0.50, 0.36);
    glVertex2f(-0.56, 0.31);
    glVertex2f(-0.54, 0.38);
    glVertex2f(-0.60, 0.43);
    glEnd();

//Solomon
    glBegin(GL_QUADS);
    glColor3f(0.94f, 0.86f, 0.0f);
    glVertex2f(0.9, 0.6);
    glVertex2f(0.9, 0.2);
    glVertex2f(0.1, 0.2);
    glVertex2f(0.1, 0.6);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(0.04f,0.37f,0.12f);
    glVertex2f(0.18, 0.2);
    glVertex2f(0.9, 0.2);
    glVertex2f(0.9, 0.56);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(0.0f,0.38f,0.94f);
    glVertex2f(0.1, 0.24);
    glVertex2f(0.1, 0.6);
    glVertex2f(0.84, 0.6);
    glEnd();

    //up_star
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.17, 0.54);
    glVertex2f(0.18, 0.56);
    glVertex2f(0.19, 0.54);
    glVertex2f(0.21, 0.54);
    glVertex2f(0.195, 0.523); //+1
    glVertex2f(0.2, 0.5);
    glVertex2f(0.18, 0.51);
    glVertex2f(0.16, 0.5);
    glVertex2f(0.175, 0.52);
    glVertex2f(0.15, 0.54);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.29, 0.54);
    glVertex2f(0.30, 0.56);
    glVertex2f(0.31, 0.54);
    glVertex2f(0.33, 0.54);
    glVertex2f(0.315, 0.523); //+1
    glVertex2f(0.32, 0.5);
    glVertex2f(0.30, 0.51);
    glVertex2f(0.28, 0.5);
    glVertex2f(0.295, 0.52);
    glVertex2f(0.27, 0.54);
    glEnd();

    //down_star
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.17, 0.42);
    glVertex2f(0.18, 0.44);
    glVertex2f(0.19, 0.42);
    glVertex2f(0.21, 0.42);
    glVertex2f(0.195, 0.403); //+1
    glVertex2f(0.2, 0.38);
    glVertex2f(0.18, 0.39);
    glVertex2f(0.16, 0.38);
    glVertex2f(0.175, 0.40);
    glVertex2f(0.15, 0.42);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.29, 0.42);
    glVertex2f(0.30, 0.44);
    glVertex2f(0.31, 0.42);
    glVertex2f(0.33, 0.42);
    glVertex2f(0.315, 0.403); //+1
    glVertex2f(0.32, 0.38);
    glVertex2f(0.30, 0.39);
    glVertex2f(0.28, 0.38);
    glVertex2f(0.295, 0.40);
    glVertex2f(0.27, 0.42);
    glEnd();

    //mid_star
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.23, 0.48);
    glVertex2f(0.24, 0.50);
    glVertex2f(0.25, 0.48);
    glVertex2f(0.27, 0.48);
    glVertex2f(0.255, 0.463); //+1
    glVertex2f(0.26, 0.44);
    glVertex2f(0.24, 0.45);
    glVertex2f(0.22, 0.44);
    glVertex2f(0.235, 0.46);
    glVertex2f(0.21, 0.48);
    glEnd();

//Micronesia
    glBegin(GL_QUADS);
    glColor3f(0.26f, 0.53f, 0.86f);
    glVertex2f(-0.9, -0.6);
    glVertex2f(-0.9, -0.2);
    glVertex2f(-0.1, -0.2);
    glVertex2f(-0.1, -0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.50, -0.30);
    glVertex2f(-0.46, -0.32);
    glVertex2f(-0.48, -0.28);
    glVertex2f(-0.45, -0.26);
    glVertex2f(-0.48, -0.26);
    glVertex2f(-0.50, -0.23);
    glVertex2f(-0.52, -0.26);
    glVertex2f(-0.55, -0.26);
    glVertex2f(-0.52, -0.28);
    glVertex2f(-0.54, -0.32);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.50, -0.50);
    glVertex2f(-0.46, -0.48);
    glVertex2f(-0.48, -0.53);
    glVertex2f(-0.45, -0.54);
    glVertex2f(-0.48, -0.54);
    glVertex2f(-0.50, -0.57);
    glVertex2f(-0.52, -0.54);
    glVertex2f(-0.55, -0.54);
    glVertex2f(-0.52, -0.53);
    glVertex2f(-0.54, -0.48);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.30, -0.40);
    glVertex2f(-0.32, -0.44);
    glVertex2f(-0.28, -0.42);
    glVertex2f(-0.26, -0.45);
    glVertex2f(-0.26, -0.42);
    glVertex2f(-0.23, -0.40);
    glVertex2f(-0.26, -0.38);
    glVertex2f(-0.26, -0.35);
    glVertex2f(-0.28, -0.38);
    glVertex2f(-0.32, -0.36);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.70, -0.40);
    glVertex2f(-0.68, -0.44);
    glVertex2f(-0.72, -0.42);
    glVertex2f(-0.74, -0.45);
    glVertex2f(-0.74, -0.42);
    glVertex2f(-0.77, -0.40);
    glVertex2f(-0.74, -0.38);
    glVertex2f(-0.74, -0.35);
    glVertex2f(-0.72, -0.38);
    glVertex2f(-0.68, -0.36);
    glEnd();

//Morocco
    glBegin(GL_QUADS);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.9, -0.6);
    glVertex2f(0.9, -0.2);
    glVertex2f(0.1, -0.2);
    glVertex2f(0.1, -0.6);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.11f, 0.49f, 0.05f);
    glVertex2f(0.45, -0.36);
    glVertex2f(0.50, -0.24);
    glVertex2f(0.55, -0.36);
    glVertex2f(0.70, -0.36);
    glVertex2f(0.58, -0.43);
    glVertex2f(0.64, -0.56);
    glVertex2f(0.50, -0.48);
    glVertex2f(0.36, -0.56);
    glVertex2f(0.42, -0.43);
    glVertex2f(0.30, -0.36);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.50, -0.28);
    glVertex2f(0.53, -0.36);
    glVertex2f(0.47, -0.36);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.65, -0.375);
    glVertex2f(0.57, -0.42);
    glVertex2f(0.56, -0.38);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.57, -0.44);
    glVertex2f(0.6, -0.52);
    glVertex2f(0.52, -0.47);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.48, -0.47);
    glVertex2f(0.38, -0.53);
    glVertex2f(0.43, -0.44);
    glEnd();
    glBegin(GL_TRIANGLES);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.35, -0.38);
    glVertex2f(0.42, -0.42);
    glVertex2f(0.44, -0.38);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(0.46, -0.38);
    glVertex2f(0.54, -0.38);
    glVertex2f(0.56, -0.42);
    glVertex2f(0.50, -0.46);
    glVertex2f(0.44, -0.42);
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
