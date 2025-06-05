#include <iostream>
using namespace std;

//function declaration 
void swapNumbers(int& varA, int& varB);
int main(){
    int varA = 25;
    int varB = 100;

    cout << "varA before swap:"<<varA <<endl; //varA is 25
    cout << "VarB before swap:"<<varB <<endl; //varB is 1000

    //function
    swapNumbers(varA, varB);
    
     cout << "varA after swap:"<<varA <<endl; //varA is 100
    cout << "VarB after swap:"<<varB <<endl; //varB is  25
}
//function definition 
void swapNumbers(int& varA, int& varB){
    int temp = varA;
    varB = varA;
    varA = temp;
}
