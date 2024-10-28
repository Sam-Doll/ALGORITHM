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
        while(j<=4){
            char c= a;
            cout<< c << " ";
            a++;
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}