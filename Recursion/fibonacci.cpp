#include<iostream>
using  namespace std;

int fibonacci(int nthfibonaccinum){
    if(nthfibonaccinum==1){
        return 0;
    }
    if(nthfibonaccinum==2){
        return 1;
    }
    return fibonacci(nthfibonaccinum-1)+fibonacci(nthfibonaccinum-2);
}

int main(){
    int nthfibonaccinum;
    cin>>nthfibonaccinum;
    cout<<fibonacci(nthfibonaccinum)<<endl;
}