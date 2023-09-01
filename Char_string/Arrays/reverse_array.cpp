#include<iostream>
using namespace std;
void array(int arr[],int size){
    cout<<"original array"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void reverse_array(int arr[],int size){
    int reverse[size];
    cout<<"reversed array"<<endl;
    for(int i=1;i<=size;i++){
         reverse[i-0]=arr[size-i];
         cout<<reverse[i-0]<<" "<<endl;
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    array(arr,size);
    reverse_array(arr,size);
    return 0;
}