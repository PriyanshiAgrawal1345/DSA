#include <iostream>
using namespace std;

int  Mini(int arr[],int size){
    int mini=INT8_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<mini){
            mini=arr[i];
        }
    }
    //returning minimum value in array
    return mini;
}

int  Maxi(int arr[],int size){
    int maxi=INT8_MIN;
    for(int i=0;i<size;i++){
        maxi=max(maxi,arr[i]);
    }
    //returning maximum value in array
    return maxi;
}

int main(){
    int n;
    cin>>n;
    int numbers[100];
    for(int i=0;i<n;i++){
        cin>>numbers[i];
    }
    //finding max and min in array numbers
    cout<<"Maximum number in array"<<Maxi(numbers,n)<<endl;
    cout<<"Minimum number in array"<<Mini(numbers,n)<<endl;
}