//print matrix(mxn) like:-
//1st col top to bottom
//2nd col bottom to top
//....

#include <iostream>
using namespace std;

void waveprint(int arr[][4],int row,int col){
    int wave[row*col];
    int wavestep=0;
    for(int i=0;i<col;i++){
        if(i%2==0){
            for(int j=0;j<row;j++){
                wave[wavestep++]=arr[j][i];
            }
        }
        else{
            for(int k=row-1;k>=0;k--){
                wave[wavestep++]=arr[k][i];
            }
        }
    }
    for(int i=0;i<(row*col);i++){
        cout<<wave[i]<<" ";
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
waveprint(arr,row,col);
}