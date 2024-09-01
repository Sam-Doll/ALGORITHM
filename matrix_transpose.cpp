/* TRANSPOSE OPERATION ON A MATRIX */
#include <iostream>
using namespace std;

int main(){
    int row , col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int matrix[row][col],  result[row][col];

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element "<< i+1<< ", " << j+1 <<endl;
            cin >> matrix[i][j];
        }
    }
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            result[i][j]= matrix[j][i];
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