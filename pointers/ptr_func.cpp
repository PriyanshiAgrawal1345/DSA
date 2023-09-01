//how to pass pointers in a function

#include <iostream>
using namespace std;

void print(int *p){
    cout<<*p<<endl;
}
void update(int *p){
    //changing address has local scope and not global 
    // p=p+1;
    // cout<<*p<<endl;
    //changing value is global becoz copy of pointer is created and not value
    (*p)++;
}

//paramter of array in function is passed as a pointer at 0th index and not the whole array 
//you can also pass specific part of array usig address
int getSum(int *(arr),int n){
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    return sum;
}

int main(){
    int n=5;
    int n1=6;
    int *p=&n;
    print(p);
    update(p);
    print(p);

    int arr[6]={1,2,3,4,5,6};
    cout<<"Sum is "<<getSum(arr+3,3);

}