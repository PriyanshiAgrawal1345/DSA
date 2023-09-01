//m = position(index) after which reversing should start

#include<iostream>
#include<vector>
using namespace std;

void reversearray(vector<int> arr,int m){
    int n=arr.size();
    int s=m+1;
    int e=(n-1);
    while(s!=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
    cout<<"reversed array from "<<m<<"position:- "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int a;
    vector<int> arr;
    for(int i=0;i<n;i++){
        cin>>a;
        arr.push_back(a);
    }
    reversearray(arr,m);
    return 0;
}