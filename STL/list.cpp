//list is used to store different datatype at a time

#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l1(5,100);
    cout<<"printing l1"<<endl;
    for(int i:l1){
        cout<<i<<" ";
    }
    cout<<endl;
    list<int> l;
    l.push_back(3);
    l.push_front(1);
    cout<<"printing l"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    l.erase(l.begin());
    cout<<"after erase"<<endl;
    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<"size of list "<<l.size()<<endl;
}