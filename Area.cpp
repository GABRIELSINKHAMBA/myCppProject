#include <iostream>
#include "Shapes.h" //Include the heade file 

namespace shapes{
    // Square Class definitions 
    Square::Square(){
        length = 0;
    }//Default constructor initilizing the length 
    Square::Square(int Newlength){
        length = Newlength;
    }
    //destructor 
    Square::~Square(){}

    //setter method 
    void Square::setLength(int newLength){
        length = newLength;
    };
    //getter method 
    int Square::getlength()const{
        return length;
    }

    //Area of the triangle 

    Triangle:: Triangle(){
        base = 0;
        height = 0;
    }//Default constructor intializing the triangle member variables 

    Triangle:: Triangle(int newBase, int newHeight){
        base = newBase;
        height = newHeight;
    } // overloaded constructor 

    Triangle::~Triangle(){}// destructor 

    //The getter method
        int Triangle:: getBase()const{
            return base;
        }

         //accessor memthod of the triangle class 
        int Triangle:: getHeight()const{
            return height;
        }

        //circle 
        Circle:: Circle(){
            radius = 0;
        } //Default constructor 

        //overloaded constructor 
        Circle::Circle(int newRadius){
            radius = newRadius;
        }

        //destructor
        Circle::~Circle(){}

        //accessor method of the circle class
        void Circle:: setRadius(int newRadius){
            radius = newRadius;
        }

        int Circle:: getRadius()const{
            return radius;
         }
         
        }

        //Area class definition 
        double Area::computeSquare(const shapes::Square& square){
            return square.getlength()* square.getlength(); //sqaure area formula
        }

        //area of the triangle 
        double Area::computeTriangle(const shapes::Triangle& triangle){
            return 0.5*triangle.getBase()* triangle.getHeight();
        }
        //area of the circle 
        double Area::computeCircle(const shapes::Circle& circle){
            return 3.14159 * circle.getRadius()*circle.getRadius();
        }
