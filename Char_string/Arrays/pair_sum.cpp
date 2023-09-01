//no.of pairs in arrays whose sum is equal to given sum

#include<iostream>
using namespace std;

void pair_sum(int arr[], int size,int sum){
    int count=0;
    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if (arr[j]==(sum-arr[i])){
                count+=1;
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
    pair_sum(arr,size,sum);
    return 0;
}