#include <iostream>
using namespace std;

//Main class
int main(){
    //dynamically allocate the integer 
    int* IntegerNumber = new int;
    //dybamically allocate the string 
    string* stringVariable = new string;

    /*through the user input, ass a value to the dynamically allocated 
    memory*/
    cout <<"Enter integer  number\n";
    cin>> *IntegerNumber;
    cout <<"Enter the string variable"<<endl;
    cin >> *stringVariable;
    //output the values entered

    cout << "This is the integer variable you entered: "<<*IntegerNumber<<endl;


    cout << "This is the string variable you entered: b"<<*stringVariable<<endl;

}