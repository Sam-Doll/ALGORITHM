/* TO PERFORM MULTIPLICATION OPERATION ON A MATRIX */
#include <iostream>
using namespace std;

int main(){
    int row , col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int matrix1[row][col], matrix2[row][col], result[row][col];
    cout<< "For matrix 1:"<< endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element "<< i+1<< ", " << j+1 <<endl;
            cin >> matrix1[i][j];
        }
    }
    cout<< "For matrix 2:"<< endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element "<< i+1<< ", " << j+1 <<endl;
            cin >> matrix2[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j]= matrix1[i][j]* matrix2[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout << result[i][j]<< " " ;
        }
        cout << endl;
    }

    return 0;
}