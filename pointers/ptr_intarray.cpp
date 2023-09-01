#include <iostream>
using namespace std;

int main(){
    int arr[10]={2,4,6,8};  //total 40bytes
    int *ptr=&arr[0];
    cout<<"address of 1st element in arr "<<arr<<endl;
    cout<<"address of 1st element in arr "<<&arr[0]<<endl;
    cout<<"address of 1st element in arr "<<&arr<<endl;
    cout<<"value at 0th index "<<*arr<<endl;
    cout<<*arr+1<<endl;
    cout<<"value at 1st index"<<*(arr+1)<<endl;
    cout<<"value at 2nd index"<<arr[2]<<endl;
    cout<<"value at 2nd index"<<*(arr +2)<<endl;

    //formula:-  arr[i]=*(arr+i)   also i[arr]=*(i+arr)
    
    int i=3;
    cout<<"value at index "<<i<<":- "<<i[arr]<<endl;

    //checking sizes
    //sizeof of pointer is always 8bytes in all cases
    cout<<"sizeof *ptr "<<sizeof(*ptr)<<endl;
    cout<<"sizeof ptr "<<sizeof(ptr)<<endl;
    cout<<"sizeof arr "<<sizeof(arr)<<endl;
    cout<<"sizeof &arr "<<sizeof(&arr)<<endl;
    cout<<"sizeof &ptr "<<sizeof(&ptr)<<endl;
    
    cout<<&ptr<<endl;               //will give address of ptr block(diff. from address of arr)

``//ERROR
    //you cannot change the addresses in symbol table
    //(arr=arr+1;)    will give error

    //but if i increase pointer by 1 it will point next int
    ptr=ptr+1;
    cout<<*ptr<<endl;
}