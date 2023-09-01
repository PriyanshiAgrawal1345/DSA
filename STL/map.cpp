#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int,string>m;
    m[1]="priyanshi";
    m[13]="agrawal";
    m[5]="sanjay";

    m.insert({2,"surendra"});

    //before erase
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    //it always gives sorted keys

    cout<<"finding 13--->"<<m.count(13)<<endl;

    //m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<" "<<i.second<<endl;
    }
    cout<<endl;

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }


    cout<<m[2];
}
