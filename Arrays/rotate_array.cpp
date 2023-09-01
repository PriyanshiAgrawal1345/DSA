//if k=2 then shift every element right by 2 places
//input:- [1,2,3,4,5]
//output:- [4,5,1,2,3]


#include<iostream>
using namespace std;

void rotate_array(int arr[],int n,int k){
    int temp[n];
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=arr[i];
    }
    arr=temp;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    rotate_array(arr,n,k);
    return 0;
}