#include <iostream>
using namespace std;

int main(){
    int a='A';
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=1;
        while(j<=i){
            char c=a;
            cout<<c<<" ";
            j++;
        }
        a++;
        cout<<endl;
        i++;
    }
    return 0;
}