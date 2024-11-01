#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int p=1;
    int s=0;
    while(n>0){
        p*=n%10;
        s+= n%10;
        n/= 10;  
    }
    cout<<p-s<<endl;
    return 0;
}