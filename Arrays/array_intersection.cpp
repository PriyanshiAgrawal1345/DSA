#include<iostream>
using namespace std;

void arr1_arr2(int arr1[],int arr2[],int size){
    for(int i=0;i<size;i++){
        if (arr1[i]==arr2[i]){
            cout<<arr1[i]<<" ";
        }
    }
}

int main(){
    int size;
    cin>>size;
    int arr1[size];
    int arr2[size];
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    arr1_arr2(arr1,arr2,size);
    return 0;
}