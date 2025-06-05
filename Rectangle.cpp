#include "Rectangle.h"
#include <iostream>
using namespace std;

//call the constructor 
Rectangle::Rectangle(){
    width = 0.0f;
    length = 0.0f;
}
Rectangle::Rectangle(float length, float width){
    width = 0.0f;
    length = 0.0f;
}
//destructor
Rectangle::~Rectangle(){}//it does nothing 

void Rectangle::setValues(float newLength, float newWidth){
    length = newLength;
    width = newWidth;       
}

float Rectangle::getLength()const{
    return length;
}
float Rectangle::getWidth()const{
    return width;
}
float Rectangle::calculateArea(){
    return width * length;
}

