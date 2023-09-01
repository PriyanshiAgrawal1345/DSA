#include <iostream>
using namespace std;

int binarysearch(int arr[],int key,int s,int e){
    int mid=(s+e)/2;
    if(s>e){
        return -1;
    }
    if(mid==key){
        return mid;
    }
    if(key>arr[mid]){
        return binarysearch(arr,key,mid+1,e);
    }
    if(key<arr[mid]){
        return binarysearch(arr,key,s,mid-1);
    }
}

int main(){
    int arr[5]={1,2,3,4,5};  //should be sorted
    int key=1;
    int size=5;
    cout<<"element is at the position---> "<<binarysearch(arr,key,0,size);
}