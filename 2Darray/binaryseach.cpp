//major takeaway:-  how to find element at mid(in 2Dmatrix)

#include <iostream>
using namespace std;

int bin_search(int arr[][4],int row,int col,int key){
    int min=0,max=(col*row)-1;
    int mid=(max+min)/2;    
    while(min<=max){
        int elementatmid=arr[mid/col][mid%col];
        if(elementatmid==key){
            return mid;
        }
        else{
            if(key>elementatmid){
                min=mid+1;
            }
            else{
                max=mid-1;
            }
        }
        mid=(min+max)/2;
    }
    return -1;
}

int main(){
    int row,col,key;
    cin>>row>>col;
    int arr[row][4];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"enter the key:- ";
    cin>>key;
    cout<<"the key is found at the index= "<<bin_search(arr,row,col,key);
}