#include<iostream>
#include<vector>
using namespace std;

vector<int> reverse(vector<int> v){
    int s=0;
    int e= v.size()-1 ;
    while(s!=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

void sum(int n,int arr1[],int m,int arr2[],vector<int> v){
    int i=(n-1);
    int j=(m-1);
    int carry=0;
    int sum;
    int ans;
    while(i>=0 && j>=0){
        sum=arr1[i]+arr2[j]+carry;
        ans=sum%10;
        carry=sum/10;
        v.push_back(ans);
        i--;
        j--;
    }
    while(i>=0){
        sum=arr1[i]+carry;
        carry=sum/10;
        ans=(sum%10);
        v.push_back(ans);
        i--;
    }
    while(j>=0){
        sum=arr2[j]+carry;
        carry=sum/10;
        ans=(sum%10);
        v.push_back(ans);
        j--;
    }
    while(carry!=0){
        v.push_back(carry);
        carry=0;
        }   
     
    v=reverse(v);
    for(int i:v){
        cout<<i<<" ";
    }
}

int main(){
    int n,m;
    cin>>n>>m;
    int arr1[n];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    int arr2[m];
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    vector<int> v;
    sum(n,arr1,m,arr2,v);
    return 0;
}