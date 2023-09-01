//give power set(set of all subsets)

#include <iostream>
#include<vector>
using namespace std;

void powerSet(vector<int>num,int index,vector<int>output,vector<vector<int>>&ans){
    //base case
    if(index>=num.size()){
        ans.push_back(output);
        return;
    }
    //exclude
    powerSet(num,index+1,output,ans);
    //include
    output.push_back(num[index]);
    powerSet(num,index+1,output,ans);
}

int main(){
    vector<int>num={1,2,3};
    vector<vector<int>>ans;
    vector<int>output;
    int index=0;
    powerSet(num,index,output,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}