//STACK memory(static allocation)
//BAD PRACTICE
//int arr[n]  and n is variable taken by input
//so it will demand memory during run time
//if during compilation, stack is brought with less memory than you demanded program will crash



//HEAP memory(dynamic allocation)
//VARIABLE SIZE ARRAY
#include <iostream>
using namespace std;

int main(){
    int *p1=new int;  //here p1 is in stack   and new int(gives only address) is in heap:-----> total 8bytes

    int n;
    cin>>n;
    //variable size array 
    int* arr=new int[n];
    //taking values in array
    for(int i=0;i<n;i++){
        cin>>arr[i] ;
    } 
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }




    //STATIC (stack)
    //memory gets freed by itself (also in a loop)
    //DYNAMIC (heap)
    //memory does't get free by its own
    //use delete keyword

    //for single element
    delete p1;
    //for array
    delete []arr;
}
