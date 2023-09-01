//n=total no.of books (number represents the no.of pages)
//m=total no.of students
//each student should get atleast 1 book and each book should be distributed
//allocate books in such a way that maximum no.of pages allocated to a single student is minimum

#include<iostream>
using namespace std;

bool ispossible(int arr[],int n,int m,int mid){
    int studentcount=1;
    int pagesum=0;
    for(int i=0;i<n;i++){
        if(pagesum+arr[i]<=mid){
            pagesum+=arr[i];
        }
        else{
            studentcount+=1;
            if(studentcount>m || arr[i]>mid ){
                return false;
            }
            else{
                pagesum=arr[i];
            }
        }
    }
    return true;
}
int bookallocation(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=(s+e)/2;
    int ans=-1;
    while(s<=e){
        if(ispossible(arr,n,m,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return ans;
}


int main(){
    int n,m;
    cin>>n>>m;
    int arr[n];
    for(int i=0;i<n;i++){         //arr should not be compulsorily sorted
        cin>>arr[i];
    }
    cout<<"minimum is "<<bookallocation(arr,n,m);
    return 0;
}