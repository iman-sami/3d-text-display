
#ifndef RENDERER
#define RENDERER

#include <math.h>
#include <iostream>
#include <windows.h>
#include <stdio.h>
#include "Vector.h"
#include "Cube.h"
#include <string>
#include <stdarg.h>

class Cube;
class Vector;

using namespace std;

class Renderer{
    public:
        static const double FOV = 0.6;
        static const int HEIGHT = 25;
        static const int WIDTH = 40;
        static const double _near = 0.0;
        static const double _far = 40.0;
        static const double aspectRatio = (1.0 * WIDTH) / (1.0 * HEIGHT);
        static const double movement = 1.0;
        static const bool flight = true;

        double matrix[16];

        Vector *viewpoint;
        Vector *viewangle;

        Cube *c0;
        Cube *c1;

        Renderer(void);
        void buildMatrix(void);
        Vector toPerspective(Vector point);
        void render(void);
        void makeLine(Vector pointA, Vector pointB);
        void drawLine(double x1, double y1, double x2, double y2);
        void set(int x, int y, string s);
};

#endif