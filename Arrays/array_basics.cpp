//arrays are used to store elements of same datatype in 1 variable(array)
//contigous memory location of elements
//access elements by their index(start from 0 to (size-1))

//declaration by:-    datatype arrayname[size];



//function for array
#include <iostream>
using namespace std;
void array(int arr[],int size){
    for(int i=0;i<size;i++){        
        cout<<arr[i]<<' ';
    }
    cout<<endl;
}


int main(){
//giving values to array less than its size
    int arr[5]={2,4};             //output:-  2 4 0 0 0
    array(arr,5);

//initialising all locations with 0(which can't be done any other number)
    int five[5] = {0};
    array(five,5);               //output:-  0 0 0 0 0

//char array
    char ch[5]={'a','b','c','d','e'};

//bool array
//double array
}



//you cannot print array of char,bool or any other datatype other than int with function(array) because it will only 
//take int array as input