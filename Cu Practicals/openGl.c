#include <GL/glut.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT); // Clear the color buffer
    glBegin(GL_TRIANGLES);         // Start drawing a triangle
        glVertex2f(-0.5f, -0.5f);  // Bottom left vertex
        glVertex2f(0.5f, -0.5f);   // Bottom right vertex
        glVertex2f(0.0f, 0.5f);    // Top vertex
    glEnd();                       // Finish drawing
    glFlush();                    // Render the buffer
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);                  // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE);       // Set display mode
    glutInitWindowSize(800, 600);           // Set window size
    glutInitWindowPosition(100, 100);       // Set window position
    glutCreateWindow("OpenGL Setup Test");  // Create a window
    glutDisplayFunc(display);                // Register display callback
    glutMainLoop();                          // Enter the GLUT event loop
    return 0;
}
