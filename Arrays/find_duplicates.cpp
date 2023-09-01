#include<iostream>
using namespace std;

void duplicate(int arr[],int size){
    cout<<"duplicate elements"<<endl;
    for(int i=0;i<=size;i++){
        for(int j=i+1;j<=size;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i]<<" ";
            }
        }
    }
}


int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    duplicate(arr,size);
    return 0;
}
