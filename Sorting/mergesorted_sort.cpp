//merge two sorted arrays in sorted way

#include<iostream>
using namespace std;

void mergesort(int n,int arr1[],int m,int arr2[],int arr3[]){
    int i=0,j=0;
    int k=0;
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k]=arr1[i];
            i++;
        }
        else{
            arr3[k]=arr2[j];
            j++;
        }
        k++;
    }
    //if elements in arr1 is left then just copy them
    while(i<n){
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    //if elements in arr2 is left then just copy them
    while(j<m){
        arr3[k]=arr2[j];
        k++;
        j++;
    }
    for(int i=0;i<(m+n);i++){
        cout<<arr3[i]<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    int arr2[m];
    int arr3[n+m];
    for(int i=0;i<n;i++){  //array should be sorted
        cin>>arr1[i];
    }
    for(int i=0;i<m;i++){  //array should be sorted
        cin>>arr2[i];      
    }
    mergesort(n,arr1,m,arr2,arr3);
    return 0;
}