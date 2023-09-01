//only stores unique elements
//no modification (only delete or add)
//returns elements in sorted order

#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    s.insert(5);
        s.insert(5);
        s.insert(5);
    s.insert(3);
        s.insert(3);
    s.insert(0);
    s.insert(1);
    s.insert(7);
        s.insert(7);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();   //iterator= index
    it++;
    it++;
    s.erase(it);
    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;

    //to check whether the element given is present in set or not
    cout<<"5 is present or not:- "<<s.count(5)<<endl;

    //if element given exists, it will return its iterator
    set<int>::iterator itr=s.find(5);
    cout<<" if 5 is present return its iterator:- "<<itr<<endl;
}