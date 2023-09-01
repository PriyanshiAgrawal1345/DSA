#include <iostream>
using namespace std;

void bubbleSort(int arr[],int n){
    if(n==1 || n==0){
        return;
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    n--;
    bubbleSort(arr,n);
}

int main(){
    int arr[6]={2,9,1,8,0,5};
    int n=6;
    bubbleSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
