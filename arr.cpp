#include <iostream>
using namespace std;

int main(){
    int arr[5]={18,20,3,4,6};
    int maximum=0;
    for(int i=0;i<5;i++){
        if(arr[i]>maximum){
            maximum = arr[i];
        }
    }
    cout<<"Maximum is : "<< maximum<< endl;
    int minimum=arr[0];
    for(int i=1;i<5;i++){
        if(arr[i]<arr[i-1]){
            minimum = arr[i];
        }
    }
    cout<<"Minimum is : "<< minimum<< endl;
    return 0;
}