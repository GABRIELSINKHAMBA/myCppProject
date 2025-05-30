#include <iostream>
using namespace std;

int main(){
    int rows, columns;
    //get valid inputs (must not exceed 3)
    cout << "Enter number of rows (max 3)";
    cin >> rows;
    while(rows < 1 || rows > 3){
        cout << "Invalid input. rows must be between 1 and 3. Try again: ";
        cin >> rows;
    }
    cout << "Enter number of columns (max 3):"<<endl;
    cin >>columns;
    while(columns < 1 || columns > 3){
        cout << "Invalid input. columns must be between 1 and 3. Try again: ";
        cin >> columns;
    }


    //Dynamically allocate 2D array of double 
    double** array = new double*[rows];
    for(int i = 0; i< rows; ++i){
        array[i] = new double[columns]; //Allocate each row
    }
    //Assign values using nested loops
    for(int i = 0; i<rows; i++){
        for(int j = 0; j <columns;++j){
            cout <<"Element ["<< i <<"]["<<j<<"]: ";
            cin >> array[i][j];
        }
    }
    //output vaues of the array
    cout << "\nArray contents:\n";
    for(int i = 0; i< rows; ++i){
        for(int j = 0; j < columns; ++j){
            cout << array[i][j]<< " ";
        }
        cout << endl;
    }
    //Deallocate memory 
    for(int i = 0; i < rows; ++i){
        delete[] array[i];
    }
    delete[] array;

    return 0;
}
