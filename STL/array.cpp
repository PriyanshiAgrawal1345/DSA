#include<iostream>
#include<array>
using namespace std;

int main(){
    int basic[4]={1,2,3,4};
    array<int,4> a ={1,2,3,4};

    //can find size of array
    int size=a.size();

    //can print elements
    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //can find element at particular index
    cout<<"Element at index 2 is "<<a.at(2)<<endl;

    //can find whether the array is empty or not
    cout<<"empty or not "<<a.empty()<<endl;

    //can find 1st and last element
    cout<<"1st element "<<a.front()<<endl;
    cout<<"last element "<<a.back()<<endl; 
}