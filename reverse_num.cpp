#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int n;
    cout<<"enter number: "<<endl;
    cin>>n;
    while(n>0){
        if(n<(pow(2,32))){
            cout<<n%10;
            n/=10;
        }else{
            cout<<"0"<<endl;
        }
    }
    return 0;
}