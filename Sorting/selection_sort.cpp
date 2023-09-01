//ascending and descending sorting
//selection sort is used when array size = small

//space complexity= O(1)
//time complexity= O(N^2) [both in worst and best case]

#include<iostream>
using namespace std;

void selectionsort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    cout<<"sorted array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    selectionsort(arr,n);
    return 0;
}