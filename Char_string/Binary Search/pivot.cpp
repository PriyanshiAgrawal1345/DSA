//         [1,2,4,6,8,9,10]  rotated by 2(or by index 5)
//intput:- [9,10,1,2,4,6,8]
//pivot element= 1 (minimum value in array)
 
#include<iostream>
using namespace std;

void pivot(int arr[],int size){
    int s=0;
    int e=(size-1);
    int mid=(s+e)/2;
    while(s!=e){
        if(arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    cout<<"The pivot element in array is "<<arr[mid]<<endl;
}

int main(){
    int size;
    cin>>size;
    int arr[size];            //array should be sorted rotated
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    pivot(arr,size);
    return 0;
}
