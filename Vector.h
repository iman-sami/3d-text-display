#ifndef VECTOR
#define VECTOR

#include <iostream>
#include <math.h>

using namespace std;
 
 class Vector{
   public:
    Vector(void);
    Vector(double x, double y, double z);
    Vector(double x, double y, double z, double W);
    Vector normalize(void);
    double  getLength(void);
    double x;
    double y;
    double z;
    double w;
 };
 #endif