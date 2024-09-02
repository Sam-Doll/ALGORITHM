#include <iostream>
using namespace std;

int main(){
    int row , col;
    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of columns: ";
    cin >> col;

    int matrix[row][col] ;

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"Enter element "<< i+1<< " , " << j+1 <<" : "<<endl;
            cin >> matrix[i][j];
        }
    }
    int sum =0;
    for(int i=0; i<row; i++){
        sum = sum + matrix[i][i];
    }
    cout << "Sum of diagonal elements : "<< sum ;
    return 0;
}