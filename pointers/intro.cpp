//sizeof pointer block is always 8bytes in any datatype

#include <iostream>
using namespace std;

int main(){
    // int num=5;
    // int *ptr=&num;
    // cout<<"address of num "<<ptr<<endl;
    // cout<<"value of num "<<*ptr<<endl;

    // int *p=0;
    // p=&num;
    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num=5;
    int a=num;
    cout<<"a before"<<num<<endl;
    a++;
    cout<<"a after"<<num<<endl;

    int *p=&num;
    cout<<"a before"<<num<<endl;
    (*p)++;
    cout<<"a after"<<num<<endl;

    //copying pointer
    int *q=p;
    cout<<p<<'-'<<q<<endl;
    cout<<*p<<'-'<<*q<<endl;

    //imp concept
    cout<<"*p before "<<*p<<endl;
    (*p)++;
    cout<<"*p after "<<*p<<endl;

    cout<<"p before"<<p<<endl;
    (p)++;   //also by inc by 1unit it will go to another integer(each int stores 4bytes)
    cout<<"p after"<<p<<endl;

}