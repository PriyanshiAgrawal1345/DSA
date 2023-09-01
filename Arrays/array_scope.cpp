#include<iostream>
using namespace std;


//in general function:-     change in madefunction wouldn't affect main function
void dummy(int n){
    n++;
    cout<<"n is "<<n<<endl;
}
int main(){
    int n=5;
    dummy(n);                                 //output:- 6
    cout<<"number n is "<<n<<endl;            //output:- 5
}





//in arrays:-       change in madefunction will affect main function
void update(int arr[],int size){
    arr[0]=26;
    cout<<"with update"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"going to main code"<<endl;
}
int main(){
    int n=5;
    int num[5]={2,4,6,8,10};
    update(num,n);
    cout<<"printing for main code"<<endl;
    for(int i=0;i<n;i++){
        cout<<num[i]<<" ";
    }
}