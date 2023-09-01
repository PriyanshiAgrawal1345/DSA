#include<iostream>
#include<vector>
using namespace std;

void solve(vector<int>num,vector<int>temp,int index,vector<vector<int>>& ans){
    if(index>=num.size()){
        ans.push_back(num);
        num=temp;
        return;
    }
    for(int i=index;i<num.size();i++){
        swap(num[index],num[i]);
        solve(num,temp,index+1,ans);

        //instead of using temp(extra memory)
        //BACKTRACE
        //swap(num[index],num[i]);
    }
}

int main(){
    vector<int>num={1,2,3};
    vector<int>temp=num;
    vector<vector<int>>ans;
    int index=0;
    solve(num,temp,index,ans);

    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    
}