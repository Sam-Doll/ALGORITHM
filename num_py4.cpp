#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter no. of rows: "<<endl;
    cin>>row;
    int num=1;
    int k=1;
    while(k<=row){
        int i=1;
        while(i<=row-k){
            cout<<"  "<<" ";
            i++;
        }
        int j=k;
        while(j>0){
            cout<< num <<" ";
            num++;
            j--;
        }
        k++;
        cout<<endl;
    }
    return 0;
}