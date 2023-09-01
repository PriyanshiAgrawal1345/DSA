#include <iostream>
using namespace std;

int partition(int arr[],int s,int e){
    //pivot
    int pivot=arr[s];
    //finding how many elements are smaller than pivot(starting element)
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(pivot>=arr[i]){
            count++;
        }
    }
    //placing pivot to right position
    int pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);
    //all elements before pivot should be smaller and after pivot all elements should be greater than pivot
    int i=s;
    int j=e;
    while(i<j){
        if(arr[i]>pivot && arr[j]<pivot){
            swap(arr[i++],arr[j--]);
        }
        if(arr[j]>pivot){
            j--;
        }
        if(arr[i]<pivot){
            i++;
        }
    }
    return pivotindex;
}

void quickSort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int main(){
    int arr[7]={3,9,1,0,7,8,5};
    int n=7;
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}