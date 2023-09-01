//compare aaju-baju k element
//in array of N-elements ==> (n-1) rounds
//in every round largest element will be placed correctly

//space complexity= O(1)
//time complexity= O(N^2) 
//we can optimise for best case (if in any round no swapping occur it means it is already sorted)

#include<iostream>
using namespace std;

void bubblesort(int arr[],int n){
    bool swapped=false;
    for(int j=1;j<n;j++){
        for(int i=0;i< (n-j) ;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
                swapped=true;
            }
        }
        if(swapped==false){
            break;
        }
    }
    cout<<"Bubble sorted array is "<<endl;
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
    bubblesort(arr,n);
    return 0;
}