#include "Rectangle.h"
#include <iostream>
using namespace std;

// create the main class 
int main(){
    //create the instance of the class 
    Rectangle instantRectangle;
    
    int length, width;

    cout << "Enter the length\n";
    cin >> length;

     cout << "Enter the width\n";
    cin >> width;
    instantRectangle.setValues(length,width);

   cout << "The area of the rectangle is: "<< instantRectangle.calculateArea()<<endl;

   //another instance of the class 
   
    cout << "Enter the length\n";
    cin >> length;

     cout << "Enter the width\n";
    cin >> width;

   Rectangle anotherIns= Rectangle(length,width);
   //calculate the area with the values of overloaded constructor
   cout << "The area of the rectangle is: "<< anotherIns.calculateArea()<<endl;

}