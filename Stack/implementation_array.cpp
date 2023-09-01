#include <iostream>
using namespace std;

class stack{
    //properties
    int* arr;
    int size;
    int top;
    //behaviour
    public:
    stack(int size){
        this->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int data){
        if(size-top > 1){
            top++;
            arr[top] = data;
        }
        else{
            cout<<"Stack Overflow"<<endl;
        }
    }
    void pop(){
        if(top > -1){
            top--;
        }
        else{
            cout<<"Stack underflow"<<endl;
        }
    }
    int peek(){
        if(top > -1){
            return arr[top];
        }
        else{
            cout<<"Stack is empty"<<endl;
        }
    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};


int main(){
    stack s(4);
    cout<<s.isEmpty()<<endl;
    s.push(2);cout<<s.peek()<<endl;
    s.push(4);cout<<s.peek()<<endl;
    s.push(6);cout<<s.peek()<<endl;
    s.push(8);cout<<s.peek()<<endl;
    //s.push(10);s.peek();
    cout<<s.isEmpty()<<endl;
    s.pop();cout<<s.peek()<<endl;
}