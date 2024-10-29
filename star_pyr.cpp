#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-1;
        while(j>=i){
            cout << " " <<" ";
            j--;
        }
        int k = i;
        while(k>0){
            cout<<"*"<<" ";
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}