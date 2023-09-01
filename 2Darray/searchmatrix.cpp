//matrix is sorted row-wise also column-wise
//w'll start from topmost rightmost corner of matrix

#include <iostream>
using namespace std;

bool searchmatrix(int arr[][3],int row,int col,int key){
    int rowindex=0;
    int colindex=col-1;
    while(rowindex<row && colindex>=0){
        int element=arr[rowindex][colindex];
        if(key==element){
            return 1;
        }
        if(element>key){
            colindex--;
        }
        else{
            rowindex++;
        }
    }
    return 0;
}

int main(){
    int row,col,key;
    cin>>row>>col;
    int arr[row][3];
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
    if(searchmatrix(arr,row,col,key)){
        cout<<"the key is present"<<endl;
    }
    else{
        cout<<"key doesnot found"<<endl;
    }
}
