//BUBBLESORT

#include <iostream>
using namespace std ;

int main(){
int n ;
    cout << "Enter number of elements in the array :"<< endl ;
    cin >> n ;
int arr[n] ;

    for ( int j = 0 ; j<n ; j++){
        cout << "Enter array element number "<< j+1 << endl ;
        cin >> arr[j];
    }
    
    for ( int f = n ; f > 0 ; f-- ){

        for( int i = 0 ; i<(f-1) ; i++ ){

            if ( arr[i]> arr[i+1]){
                int t = arr[i] ;
                arr[i] = arr[i+1] ;
                arr[i+1] = t ;
            }
        }
    }
    cout<< "Final sorted array is [ " ;
    for (int k=0 ; k<n ; k++ ){
        cout << arr[k] << " " ;
    }
    cout << "]" ;

    return 0 ;
}