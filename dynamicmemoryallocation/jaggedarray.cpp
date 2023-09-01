#include <iostream>
using namespace std;

int main(){
    int row;
    cout<<"enter row"<<endl;
    cin>>row;

    //create memory in heap
    int** arr=new int*[row];
    for(int i=0;i<row;i++){
        arr[i]=new int[i+1];
    }

    //input
    cout<<"give input"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cin>>arr[i][j];
        }
    }
    //output
    cout<<"output"<<endl;
    for(int i=0;i<row;i++){
        for(int j=0;j<=i;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl; 
    }

    //memoryrelease
    for(int i=0;i<row;i++){
        delete []arr[i];
        }
    delete []arr;

}