#include <iostream>
using namespace std;

//without creating 2 differnt arrays
void merge(int arr[],int s,int e){
    //create new array
    int size=e-s+1;
    int final[size];

    int mid=(s+e)/2;

    int i=s , j=mid+1 , k=0;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            final[k]=arr[i++];
        }
        else{final[k]=arr[j++];}
        k++;
    }
    while(i<=mid){
        final[k++]=arr[i++];
    }
    while(j<=e){
        final[k++]=arr[j++];
    }

    //copying elements of final into arr
    for(int i=0,j=s;i<size,j<=e;i++,j++){
        arr[j]=final[i];
    }
}




//creating 2 different arrays
void merge2(int arr[],int s,int e){
    int mid=(s+e)/2;
    int l1=mid-s+1;
    int l2=e-mid;

    int arr1[l1];
    int arr2[l2];

    //copying elements 
    int k=s;
    for(int i=0;i<l1;i++){
        arr1[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<l2;i++){
        arr2[i]=arr[k++];
    }

    int i=0,j=0;
    k=s;
    while(i<l1 && j<l2){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i++];
        }
        else{arr[k]=arr2[j++];}
        k++;
    }
    while(i<l1){
        arr[k++]=arr1[i++];
    }
    while(j<l2){
        arr[k++]=arr2[j++];
    }
}

void mergeSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(s+e)/2;
    mergeSort(arr,s,mid);
    mergeSort(arr,mid+1,e);
    merge2(arr,s,e);
}

int main(){
    int arr[7]={9,0,2,1,5,8,4};
    int n=7;
    mergeSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}