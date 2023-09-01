//1st row----last col----last row----1st col

#include <iostream>
using namespace std;

void spiralprint(int arr[][4],int row,int col){
    int startrow=0;
    int endrow=row-1;
    int startcol=0;
    int endcol=col-1;
    while((startrow<=endrow) and (startcol<=endcol)){
        //for 1st row
        for(int a=startcol;a<endcol;a++){
            cout<<arr[startrow][a]<<" ";
        }
        //for last col
        for(int b=startrow;b<endrow;b++){
            cout<<arr[b][endcol]<<" ";
        }
        //for 1ast row  
        for(int c=endcol;c>startcol;c--){
            cout<<arr[endrow][c]<<" ";
        }
        //for 1st col
        for(int d=endrow;d>startrow;d--){
            cout<<arr[d][startcol]<<" ";
        }
        startrow++;
        endrow--;
        startcol++;
        endcol--;
    }
}

int main(){
    int row;
    int col=4;
    cin>>row;
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
spiralprint(arr,row,col);
}