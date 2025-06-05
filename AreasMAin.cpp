#include <iostream>
#include "Shapes.h"
using namespace std;

int main(){
    int breaker = 4;
    do{
        cout << "1. Calculate the area of a Square\n";
        cout << "2. Calculate the area of a Triangle\n";
        cout << "3. Calculate the area of a Circle\n";
        cout << "Quit\n";
        cout <<"Enter  your choice\n";
        cin >> breaker;

        if(breaker ==1){
            int length;
            cout << "Square shape\n";
            cout << "Enter the length\n";
            cin>>length;
            shapes::Square square(length);
            cout << "The area of the square is "<< Area::computeSquare(square)<<endl;
        }
        else if (breaker ==2 ){
            cout << "Rectangle shape\n";
            int base, height;
            cout << "Enter the base\n";
            cin >> base;
            cout << "Enter the height\n";
            cin >> height;

            shapes::Triangle triangle(base, height);
            cout << "The area of the sqaure is: "<< Area::computeTriangle(triangle)<<endl;

        }
        else if(breaker == 3){
            int radius;
            cout << "Circular shape\n";
            cout << "Enter the radius of the circle\n";
            cin >> radius;

            //instanciate the circle object 
            shapes::Circle circle(radius);
            cout << "The area of the circle is "<<Area::computeCircle(circle);
        }
      
    }while(breaker != 4);
}