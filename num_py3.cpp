#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i=1 ;
    while(i<=n){
        int j=i;
        while(j>0){
            cout<<j <<" ";
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}