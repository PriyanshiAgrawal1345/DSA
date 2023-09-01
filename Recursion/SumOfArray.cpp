#include <iostream>
using namespace std;

int SumOfArray(int arr[],int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    return arr[0]+SumOfArray(arr+1,size-1);;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int size=5;
    cout<<SumOfArray(arr,size)<<endl;
}
