//case1: sorted:- [1,2,3,4,5]
//case2: rotated:- [4,5,1,2,3]
//there will exist only 1 such pair where (i-1)th element is greater than ith element

#include<iostream>
using namespace std;

bool check(int arr[],int n){
    int paircount=0;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[(i+1)%n]){
            paircount+=1;
            if(paircount>1){
                return false;
            }
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(check(arr,n)){
        cout<<"The given array is sorted and rotated"<<endl;
    }
    else{
        cout<<"The given array is not sorted and rotated"<<endl;
    }
    return 0;
}