//deque
//double ended queue
//can pop and push from both ends

#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int> d;
    d.push_back(5);
    d.push_front(3);
    d.push_front(1);
    d.push_back(6);
    cout<<"before pop"<<endl;
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<*d.begin()<<endl;
    cout<<"after poping from front and back"<<endl;
    d.pop_back();
    d.pop_front();
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl; 
    cout<<"element at 1st index:- "<<d.at(1)<<endl;
    cout<<"front:- "<<d.front()<<endl;
    cout<<"back:- "<<d.back()<<endl;
    cout<<"empty or not:- "<<d.empty()<<endl;

    //giving 1st iter
    cout<<"1st iter:- "<< *d.begin() <<endl;

   //can erase the elements at specified position and clear() clears all
    cout<<"before erase:- "<< d.size() <<endl;
    d.erase(d.begin(),d.begin()+1);   //will erase only 1st element
    cout<<"after erase:- "<< d.size() <<endl;
    for(int i:d){
        cout<<i<<" ";
    }
}
 
