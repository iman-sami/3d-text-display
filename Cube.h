#ifndef CUBE
#define CUBE

#include <iostream>
#include "Renderer.h"
#include "Vector.h"

class Renderer;
class Vector;

using namespace std;

class Cube {
    public:
        Cube(double x, double y, double z, double w);
        void draw(Renderer* r);
        Vector s0;
        Vector s1;
        Vector s2;
        Vector s3;
        Vector s4;
        Vector s5;
        Vector s6;
        Vector s7;
};

#endif