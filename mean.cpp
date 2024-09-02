#include <iostream>
using namespace std;

int main(){
    int n ;
    cin >>n;
    int arr[n];
    for(int i=0; i<n ; i++){
        cout << "enter element " << i+1<<endl;
        cin >> arr[i];
    }
    int sum=0;
    for(int i=0; i<n ; i++){
        sum = sum + arr[i];
    }
    int mean= sum/n;
    cout<< mean;
    return 0;

}