// Online C++ compiler to run C++ program online
#include <iostream>
#include <utility>
using namespace std;
int main() {
    // Write C++ code here
    int n;
    cout<<"Enter n: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter elements"<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int k=n;
    while(k--){
    for(int j=0;j<k;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j], arr[j+1]);
        }
    }
    }
    cout<<"Sorted array: "<<endl;
    for(int p=0;p<n;p++){
        cout<<arr[p]<<" ";
    }
    return 0;
}