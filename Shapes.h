#pragma once// ensure the header file is only included once 
#include <iostream> //standard input/output library
namespace shapes{
    //
    class Square{
        public:
        //defualt constructor 
        Square();
        //overloaded constructor 
        Square(int Newlength);

        //destructor 
        ~Square();

        //accessor memthod of the square class
        void  setLength(int newLength);
        int getlength()const;
        // private member of the square 
        private:
        int length;


    };
    class Triangle{
        public:
        //defualt constructor
        Triangle();

        //overloaded constructor
        Triangle(int NewBase, int NewHeight);

        //destructor
        ~Triangle();

         //accessor memthod of the Triangle class 
         void setTriangleValues(int newBase, int newHeight);

         //The getter method
        int getBase()const;

         //accessor memthod of the triangle class 
        int getHeight()const;

        //private member of the class 
          private:
        int base, height;
    };
    class Circle{
        public:
        //default constructor 
        Circle();
        //overloaded constructor 
        Circle(int newRadius);

        //destructor
        ~Circle();

        //accessor method of the circle class
        void setRadius(int newRadius);

        int getRadius()const;
        //private member of the circle class 
          private:
        int radius;
    };
    }


//Arae class to compute the area of differnt shapes 
class Area{
    public:
    static double computeSquare(const shapes::Square& square);// fucntion to compute the area  of square 
    static double computeTriangle(const shapes::Triangle& triangle);//function to compute the area of triangle 
    static double computeCircle(const shapes::Circle& circle);
};
