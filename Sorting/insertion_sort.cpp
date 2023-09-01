//treat 1st element as sorted
//then go on checking further elements one-by-one and compare with previous sorted elements from backward order
//if element is greater than previous element it will be definitely greater than elements ahead of it ,so (break)
//if element is smaller than previous element place that on its place and shift all elements to right

//space complexity= O(1)
//time complexity= O(N^2) 
//we can optimise for best case[already sorted] =  O(N)

#include<iostream>
using namespace std;

void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int temp=arr[i];
        for(int j=(i-1);j>=0;j--){
            if(temp<arr[j]){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
    cout<<"Insertion sorted array is "<<endl;
    for(int j=0;j<n;j++){
        cout<<arr[j]<<" ";
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionsort(arr,n);
    return 0;
}