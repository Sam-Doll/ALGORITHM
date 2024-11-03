#include<iostream>
using namespace std;

void nonprime(int A[], int N) {

    for (int i = 0; i < N; ++i) {
        for (int j = i + 1; j < N; ++j) {
            int sum = A[i] + A[j];
            if (N>2){
                if((A[i]%2==0&&A[j]%2==0)||(A[i]%2!=0&&A[j]%2!=0)){
                    cout<< A[i] << " " << A[j] << endl;
                    return;
                }
            }else if (N==2){
              //for()
            }
                
        }
     cout<<"-1"<< endl;
    }
}
int main(){
    int T;
    cin >> T;
    while (T--){
        int N;
        cin >> N;
        int A[N];
        for(int i = 0 ; i < N ; ++i ){
            cin >> A[i];
        }
        nonprime(A,N);
    }
    return 0;
}
