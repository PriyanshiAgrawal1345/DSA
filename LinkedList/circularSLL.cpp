#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    //constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }
    //destructor
    ~node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
        }
        cout<<"memory is freed for node with data "<<value<<endl;
    }
};

void print(node* &tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    node* temp=tail;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp != tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertNode(node* &tail,int element,int d){
    if(tail == NULL){
        node* n=new node(d);
        n->next=n;
        tail=n;
        return;
    }
    //assuming element is present in the list
    node* temp=tail;
    while(temp->data != element){
        temp=temp->next;
    }
    node* n=new node(d);
    n->next=temp->next;
    temp->next=n;
}

void deleteNode(node* &tail,int d){
    if(tail == NULL){
        cout<<"The list is empty, nothing to delete"<<endl;
        return;
    }
    node* curr=tail->next;
    node* prev=tail;
    while(curr->data != d){
        prev=curr;
        curr=curr->next;
    }
    //if tail will be deleted we'll not be able access through tail
    //1 node
    if(curr == prev){
        tail=NULL;
    }
    //>=2 node
    else if(curr == tail){
        tail=prev;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(1)
bool isCircular(node* &tail){
    if(tail == NULL){
        return true;
    }
    node* temp=tail;
    temp=temp->next;
    while(temp != tail){
        if(temp == NULL){
            return false;
        }
        temp=temp->next;
    }
    return true;
}



int main(){
    node* tail=NULL;
    print(tail);
    cout<<"Whether list is circular? "<<isCircular(tail)<<endl;

    insertNode(tail,3,1);
    //deleteNode(tail,1);
    print(tail);
    cout<<"Whether list is circular? "<<isCircular(tail)<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertNode(tail,1,3);
    print(tail);
    cout<<"Whether list is circular? "<<isCircular(tail)<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertNode(tail,3,5);
    print(tail);
    cout<<"tail "<<tail->data<<endl;

    insertNode(tail,5,7);
    print(tail);
    cout<<"tail "<<tail->data<<endl;

    insertNode(tail,1,51);
    print(tail);
    cout<<"tail "<<tail->data<<endl;

    insertNode(tail,5,52);
    print(tail);
    cout<<"tail "<<tail->data<<endl;

    deleteNode(tail,1);
    print(tail);
    cout<<"tail "<<tail->data<<endl;

    deleteNode(tail,52);
    print(tail);


    cout<<"Whether list is circular? "<<isCircular(tail)<<endl;
    cout<<"tail "<<tail->data<<endl;
}