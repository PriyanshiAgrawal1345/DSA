#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// approach -1
//TIME-COMPLEXITY = O(N^2)
//SPACE-COMPLEXITY = O(1)
vector<int> nextSmaller(vector<int> &arr , int n){
    for(int i=0;i<n-1;i++){
        bool check=false;
        for(int j=i+1;j<n;j++){
            if(arr[j] < arr[i]){
                arr[i] = arr[j];
                check=true;
                break;
            }
        }
        if(check==false){
            arr[i]=-1;
        }
    }
    arr[n-1]=-1;
    return arr;
}

// approach -2
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(N)
int stack(stack<int> s,int num){
    

}
vector<int> nextSmaller2(vector<int> &arr , int n){
    stack<int> s;
    s.push(-1);
    for(int i=n-1;i>=0;i--){
        arr[i] = stack(s,arr[i]);
    }
    return arr;
}



int main(){
    vector<int> arr ={3,3,1,1};
    nextSmaller(arr , arr.size());
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}