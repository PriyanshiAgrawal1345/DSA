#include <iostream>
using namespace std;

int main(){
    int row,col;
    cin>>row>>col;
    int arr[row][col];
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
    for(int i=0;i<row;i++){                 //i<col
        int sum=0;                           
        for(int j=0;j<col;j++){             //j<row
            sum+=arr[i][j];                 //for columnwise sum----sum+=arr[j][i]
        }
        cout<<sum<<endl;
    }
}
