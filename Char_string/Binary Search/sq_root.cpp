//for perfect square give answer in integer
//for non-perfect  give answer in floor integer

//range in which answer lies == (search space)

#include<iostream>
using namespace std;

int sqrt(int num){
    int arr[num];
    for(int i=0;i<num;i++){
        arr[i]=i+1;
    }
    int s=0;
    int e=num-1;
    int mid=(s+e)/2;
    int ans;
    while(s!=e){
        if(arr[mid]*arr[mid]>num){
            e=mid-1;
        }
        else if(arr[mid]*arr[mid]<num){
            ans=arr[mid];
            s=mid+1;
        }
        else{
            return arr[mid];
        }
        mid=(s+e)/2;
    }
    return ans;
}

//for non-perfect  give answer in floor integer
//for giving precision till 2 decimals to floor integer
//eg. root(15)=3.87
double precision(int num,int precision,int tempsol){
    double factor=1;
    double ans=tempsol;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        for(double j=ans;j*j<num;j+factor){
            ans=j;
        }
    }
    return ans;
}

int main(){
    int num;
    cin>>num;
    int n=sqrt(num);
    double p=precision(num,2,n);
    cout<<"square root of the num "<<num<<" is "<<n<<endl;
    cout<<"square root of "<<num<<" with precision is "<<p<<endl;
    return 0;
}


