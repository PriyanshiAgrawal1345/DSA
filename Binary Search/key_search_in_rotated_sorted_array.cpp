#include<iostream>
using namespace std;

int pivot(int arr[],int size){
    int s=0;
    int e=(size-1);
    int mid=(s+e)/2;
    while(s!=e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return mid;
}

int bin_search(int arr[],int size,int key,int min,int max){
    int mid=(min+min)/2;
    while(min!=max){
        if(arr[mid]==key){
            return mid;
        }
        else{
            if(key>arr[mid]){
                min=arr[mid]+1;
            }
            else{
                max=arr[mid]-1;
            }
        }
        mid=(min+max)/2;
    }
    return -1;
}

int main(){
    int size;
    cin>>size;
    int key;
    cin>>key;
    int arr[size];            //array should be sorted rotated
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int p=pivot(arr,size);
    if((key>p)&&(key<size-1)){
        cout<<"key is at index "<<bin_search(arr,size,key,p,size-1);
    }
    else{
        cout<<"key is at index "<<bin_search(arr,size,key,0,p-1);
    }
    return 0;
}