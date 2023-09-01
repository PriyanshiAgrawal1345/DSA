//vectors
//when elements get more than assigned capacity it doubles its capacity 

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> a(5,1);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    //transfering whole vector a into another vector
    vector<int> last(a);
    cout<<"printing last (duplicate of a):- "<<endl;
    for(int i:last){
        cout<<i<<" ";
    }cout<<endl;

    //capacity doubles when limit of elements get exceeded
    vector<int> v;
    cout<<"Capacity:- "<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"Capacity:- "<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Capacity:- "<<v.capacity()<<endl;
    v.push_back(3);
    cout<<"Capacity:- "<<v.capacity()<<endl;

    //finding size(diferent from capacity) of vector
    cout<<"size of vector:- "<<v.size()<<endl;

    //element at some index
    cout<<"element at 2nd index:- "<<v.at(2)<<endl;

    //1st and last element
    cout<<"front:- "<<v.front()<<endl;
    cout<<"back:- "<<v.back()<<endl;

    //popping
    cout<<"before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    v.pop_back();
    cout<<"after pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;

    //clear
    //vector size =0
    //vector capacity=same
    cout<<"before clear"<<"size:- "<<v.size()<<" "<<"capacity:- "<<v.capacity<<endl;
    v.clear();
    cout<<"after clear"<<"size:- "<<v.size()<<" "<<"capacity:- "<<v.capacity<<endl;
}

