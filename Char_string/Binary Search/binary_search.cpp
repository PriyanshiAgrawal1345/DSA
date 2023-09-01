//BINARY SEARCH:-  
//Time complexity:-O(log2(N))


#include<iostream>
using namespace std;
int bin_search(int arr[],int size,int key){
    int min=0,max=size-1;
    int mid=min + (max-min)/2;    //to ensure that mid remains in range of int
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
    int arr[size];            //array should be sorted
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"key is found at "<<bin_search(arr,size,key);
    return 0;
}