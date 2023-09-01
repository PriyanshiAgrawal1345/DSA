//input:- {5,0,6,2,0,1}
//output:- {5,6,2,1,0,0}


#include<iostream>
using namespace std;

void movezeroes(int arr[],int n){
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            continue;
        }
        else{
            for(int j=i+1;j<n;j++){
                if(arr[j]!=0){
                    swap(arr[i],arr[j]);
                    break;
                }
            }
        }
    }
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
    movezeroes(arr,n);
    return 0;
}