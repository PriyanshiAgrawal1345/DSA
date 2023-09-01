//nxn matrix
//rotate clockwise direction by 90 degrees
//1 2 3      7 4 1
//4 5 6      8 5 2
//7 8 9      9 6 3

//do rotation in-place(w/o consuming extra memory) in input 2Dmatrix and not by allocating another matrix

#include <iostream>
using namespace std;

void rotate(int arr[][3],int n){
    //take transpose
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(arr[i][j],arr[j][i]);
        }
    }
    //swapping 1st and last columns
    int startcol=0;
    int endcol=n-1;
    while(startcol<endcol){
        for(int j=0;j<n;j++){
            swap(arr[j][startcol],arr[j][endcol]);
        }
        startcol++;
        endcol--;
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
}

int main(){
    int n=3;
    int arr[3][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
rotate(arr,n);
}
