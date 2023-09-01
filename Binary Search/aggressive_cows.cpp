//k=no.of aggressive cows
//n=no.of stalls
//have to find maximum distance of minimum distances that can occur by alloting 2 stall no.s from array such that cows don't fight

#include<iostream>
using namespace std;

int* sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
    return arr;
}

bool ifpossible(int arr[], int n,int k,int mid){
    int cowcount=1;
    int lastpos=arr[0];
    for(int i=0;i<n;i++){
        if((arr[i]-lastpos)>=mid){
            cowcount+=1;
            if(cowcount==k){
                return true;
            }
            lastpos=arr[i];
        }
    }
    return false;
}

int aggresive_cows(int arr[], int n,int k){
    sort(arr,n);  //to sort an array
    int s=0;
    int maxi=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int e=maxi;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(ifpossible(arr,n,k,mid)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main(){
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"maximum distance where cows won't fight will be "<<aggresive_cows(arr,n,k);
    return 0;
}