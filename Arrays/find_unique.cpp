#include<iostream>
using namespace std;

void unique(int arr[],int size){
    cout<<"unique elements"<<endl;
    for(int i=0;i<=size;i++){
        for(int j=0;j<=size;j++){
            if(i==j){
                continue;
            }
            if(arr[i]==arr[j]){
                break;
            }
            if(j==size){
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
    unique(arr,size);
    return 0;
}

