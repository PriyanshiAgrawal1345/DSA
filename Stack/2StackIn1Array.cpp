#include <iostream>
using namespace std;

class stack{
    //properties
    int* arr;
    int size;
    int top1;
    int top2;
    //behaviour
    public:
    stack(int size){
        this->size = size;
        arr = new int[size];
        top1 = -1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1 > 1){
            top1++;
            arr[top1] = data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void push2(int data){
        if(top2-top1 > 1){
            top2--;
            arr[top2] = data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    int pop1(){
        if(top1 > -1){
            int ans = arr[top1];
            top1--;
            return ans;
        }
        else{
            return -1;
        }
    }
    int pop2(){
        if(top2 < size){
            int ans = arr[top2];
            top2++;
            return ans;
        }
        else{
            return -1;
        }
    }
    void display(){
        for(int i=0;i<size;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
};


int main(){
    stack s(5);
    s.push1(2);
    s.push2(4);
    s.push1(6);
    s.push2(8);
    s.push1(10);
    s.push2(12);
    s.display();
    cout<<s.pop1()<<endl;
    s.push2(12);
    s.display();
}