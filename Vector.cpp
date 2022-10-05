#include <Vector.h>

Vector::Vector(void){
    this->x=0;
    this->y=0;
    this->z=0;
    this->w=1;
}

Vector::Vector(double x, double y, double z){
    this->x=x;
    this->y=y;
    this->z=z;
    this->w=1;
}
Vector::Vector(double x, double y, double z, double w){
    this->x=x;
    this->y=y;
    this->z=z;
    this->w=w;
}
Vector Vector::normalize(void){
        Vector vect;
        vect.x=this->x / this->getLength();
        vect.y=this->y / this->getLength();
        vect.z=this->z / this->getLength();
        return vect;
}
double Vector::getLength(void){
    return sqrt(this->x*this->x + this->y*this->y + this->z*this->z);
}