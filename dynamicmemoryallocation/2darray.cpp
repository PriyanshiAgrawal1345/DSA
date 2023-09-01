#include <iostream>
using namespace std;

int main(){
    int row,col;
    cout<<"enter row and column"<<endl;
    cin>>row>>col;

    //1
    //CREATING 2DARRAY(dynamic memory)
    //creating col-array of pointers
    int** arr=new int*[row];
    //creating rows for each col
    for(int i=0;i<row;i++){
        arr[i]=new int[col];
    }


    //2
    //taking input in array
    cout<<"enter values in 2d array"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>arr[i][j];
        }
    }
    //taking output
    cout<<"output"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    //3
    //important to release the memory in heap
    for(int i=0;i<row;i++){
        delete []arr[i];
    }
    delete []arr;
    
}