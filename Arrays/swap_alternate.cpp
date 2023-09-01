#include<iostream>
using namespace std;

//input:- [1,2,3,4,5,6]
//output:- [2,1,4,3,6,5]

void array(int arr[],int size){
    cout<<"original array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void swap_alternate(int arr[],int size){
    int swapped[size];
    cout<<"swapped alternate array"<<endl;
    for(int i=0;i<size;i++){
        if(i%2==0){
            swapped[i+1]=arr[i];
        }
        else{
            swapped[i-1]=arr[i];
        }
    }
    for(int i=0;i<size;i++){
        cout<<swapped[i]<<" ";
    }
    cout<<endl;
    
}


int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    array(arr,size);
    swap_alternate(arr,size);
    return 0;
}