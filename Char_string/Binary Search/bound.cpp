//finding 1st and last occurance of the given the key

#include<iostream>
using namespace std;

void low(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int low=-1;

    //to find 1st occurance of key
    while(start!=end){
        if(arr[mid]==key){
            low=mid;
            end=mid-1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    cout<<"1st occurance of the key "<<key<<" is at index "<<low<<endl;
}

void high(int arr[],int size,int key){
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    int high=-1;

    //to find last occurance of key
    while(start!=end){
        if(arr[mid]==key){
            high=mid;
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    cout<<"last occurance of the key "<<key<<" is at index "<<high<<endl;
}

int main(){
    int size;
    cin>>size;
    int key;
    cin>>key;
    int arr[size];            //array should be sorted
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    low(arr,size,key);
    high(arr,size,key);
    return 0;
}



//using 1st and last occurance of a element in a sorted array, u can find total no.of occurance of that element
//(high-low)+1