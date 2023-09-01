#include <iostream>
using namespace std;

int power(int n){
    int product=1;
    if(n==0){
        return product;
    }
    product=product*2*power(n-1);
}

int main(){
    int n;
    cin>>n;
    cout<<power(n)<<endl;

}