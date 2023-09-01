#include<iostream>
using namespace std;

void sort(int arr[],int size){
    int count0=0;
    int sorted[size];
    for(int i=0;i<size;i++){
        if(arr[i]==0){
            count0+=1;
        }
    }
    for(int i=0;i<size;i++){
        if(i<count0){
            sorted[i]=0;
        }
        else{
            sorted[i]=1;
        }
    }
    for(int i=0;i<size;i++){
        cout<<sorted[i]<<" ";
    }
} 


int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    sort(arr,size);
    return 0;
}