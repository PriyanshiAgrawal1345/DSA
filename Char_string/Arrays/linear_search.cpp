#include<iostream>
using namespace std;
bool linearsearch(int arr[], int size, int key){
    for(int i=0; i<size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int main(){
    int num[10]={5,8,3,0,-2,10,-3,6,9,-1};
    cout<<"enter the key to be found in array"<<endl;
    int key;
    cin>>key;
    bool find=linearsearch(num,10,key);
    if(find){
        cout<<"key found"<<endl;
    }
    else{
        cout<<"key is not found"<<endl;
    }
}