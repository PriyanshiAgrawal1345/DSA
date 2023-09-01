//mountain array means array that first increases then decreases

#include<iostream>
using namespace std;

void peak(int arr[],int size){
    int s=0;
    int e=size-1;
    int mid=(s+e)/2;
    while(s!=e){
        if(arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    cout<<"The peak value in mountain array is "<<arr[mid]<<endl;
}

int main(){
    int size;
    cin>>size;
    int arr[size];            //array should be sorted
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    peak(arr,size);
    return 0;
}