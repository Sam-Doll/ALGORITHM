#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i=1 , j=1;
    while(i<=n){
        while(i<=j){
        cout<<i<<" ";
        i++;
        }
        cout<<endl;
        j++;
    }
    return 0;
}