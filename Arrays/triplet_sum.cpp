#include<iostream>
using namespace std;

void triplet_sum(int arr[],int size,int sum){
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=i+1;j<size;j++){
            for(int k=j+1;k<size;k++){
                if(arr[i]==(sum-(arr[j]+arr[k]))){
                    count+=1;
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[k]<<endl;
                }
            }
        }
    }
    cout<<count<<endl;
}


int main(){
    int size;
    cin>>size;
    int sum;
    cin>>sum;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    triplet_sum(arr,size,sum);
    return 0;
}