#include <iostream>
using namespace std;

//BRUTE FORCE (t.c---> O(N^2))
int inversion_count(int arr[],int n){
    int inv=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j]){
                inv++;
            }
        }
    }
    return inv;
}


//OPTIMSED 
//MERGE SORT (t.c---> O(NlogN))
int merge(int arr[],int s,int e){
    //counting inversions
    int inv=0;
    //create new array
    int size=e-s+1;
    int final[size];

    int mid=(s+e)/2;

    int i=s , j=mid+1 , k=0;
    while(i<=mid && j<=e){
        if(arr[i]<arr[j]){
            final[k]=arr[i++];
        }
        else{final[k]=arr[j++];
            inv+=(mid-i+1);
            }
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

    return inv;
}
int mergeSort(int arr[],int s,int e){
    int inv=0;
    if(s<e){
    int mid=(s+e)/2;
    inv+=mergeSort(arr,s,mid);
    inv+=mergeSort(arr,mid+1,e);
    inv+=merge(arr,s,e);
    }
    return inv;
}

int main(){
    int arr[7]={5,1,7,2,0,3,4};
    int n=7;
    //cout<<"Inversion count is:- "<<inversion_count(arr,n)<<endl;


    cout<<"Inversion count is:- "<<mergeSort(arr,0,n-1)<<endl;
}