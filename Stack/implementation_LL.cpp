//no stack overflow 
//it can shrink and grow as much as it wants

#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

class stack{
    //properties
    node* top;
    public:
    stack(){
        this->top = NULL;
    }

    void push(int d){
        node* n = new node(d);
        if(top == NULL){
            top = n;
            return;
        }
        n->next = top;
        top = n;
    }
    void pop(){
        if(top != NULL){
            node* nodeToDelete = top;
            top = top->next;
            delete(nodeToDelete);
        }
        else{
            cout<<"Stack Underflow "<<endl;
        }
    }
    int peek(){
        if(top != NULL){
            return top->data;
        }
        else{
            cout<<"Linked list is empty"<<endl;
            return -1;
        }
    }
    void display(){
        if(top == NULL){
            cout<<"Linked list is empty"<<endl;
            return;
        }
        node* head = top;
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next;
        }
        cout<<endl;
    }
};

int main(){
    stack s;
    s.display();
    s.push(2);cout<<s.peek()<<endl;
    s.push(4);cout<<s.peek()<<endl;
    s.push(6);cout<<s.peek()<<endl;
    s.push(8);cout<<s.peek()<<endl;
    s.display();
    s.pop();cout<<s.peek()<<endl;
}