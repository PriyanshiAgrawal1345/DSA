#include <iostream>
using namespace std;

void largestrowsum(int arr[][4],int row,int col){
    int sum[row];
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            sum[i]+=arr[i][j];
        }
    }
    int largestrow;
    for(int i=0;i<row;i++){
        if(sum[i]>sum[i+1]){
            largestrow=i;
        }
    }
    cout<<"Largest sum is of the row= "<<largestrow+1<<" and largest sum is "<<sum[largestrow];
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
    largestrowsum(arr,row,col) ;  
}