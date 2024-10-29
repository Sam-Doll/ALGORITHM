#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter n: "<<endl;
    cin>>n;
    int i=1;
    while(i<=n){
        int j=n-i;
        while(j>0){
            cout<<" "<<" ";
            j--;
        }
        int k=1;
        while(k<=i){
            cout<<k<<" ";
            k++;
        }
        int l=i-1;
        while(l>0){
            cout<<l<<" ";
            l--;
        }
        cout<<endl;
        i++;
    
    }
    return 0;
}