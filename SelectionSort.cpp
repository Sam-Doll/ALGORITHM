#include <iostream>
using namespace std;
int main (){

    int arr[5];
    int n ;

    for ( int k=0 ; k < 5 ; k++ ){
        cout << "Enter array element " << k+1 << endl ;
        cin >> arr[k] ;
    }

    for ( int i = 0 ; i< 4 ; i++ ){

            if( arr[i] < arr[i+1] ){
                n = i ;
            }
            else{
                n = i+1 ;
            }
            int l = i+2;
            for ( l ; l<5 ; l++){

                if ( arr[n] > arr[l] ){
                    n = l ;
                }
                       
            }
                        
        int t = arr[i] ;
        arr[i] = arr[n] ;
        arr[n] = t ;




        cout<< "arr[i] = "<< arr[i] << endl << "n = " << n << endl;

        cout << arr[0] <<" "<<  arr[1]<<" "<< arr[2]<< " "<< arr[3] <<" "<< arr[4] << endl;

    }

    cout << "Final sorted array is " << endl ;
    for ( int j = 0 ; j < 5 ; j++)
    {cout << arr[j] << endl ;}

    return 0 ;
}