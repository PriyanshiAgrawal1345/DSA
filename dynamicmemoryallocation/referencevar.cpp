#include <iostream>
using namespace std;

//PASS BY VALUE
void update1(int n){
    n++;
}

//PASS BY REFERENCE
void update2(int& n){
    n++;
}

//BAD PRACTICE (becoz a and b are local variables they could be vanished or changed at the time of execution)
//same with pointers
int& update(int n){
    int a=5;
    int& b=a;
    return b;
}


int main(){
    int i=5;
    //create reference variable(same memory different names(here, i&j))
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;
    cout<<j<<endl;

    //checking pass by value and reference
    cout<<"---> "<<endl;
    update1(i);
    cout<<i<<endl;
    update2(i);
    cout<<i<<endl;

}