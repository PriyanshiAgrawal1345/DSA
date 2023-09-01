#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int d){
        this->data=d;
        this->prev=NULL;
        this->next=NULL;
    }

    //desctructor
    ~node(){
        int value=this->data;
        if(this->next != NULL){
            delete next;
        }
        cout<<"Node is deleted with data "<< value <<endl;
    }
};



void print(node* &head){
    //list is empty
    if(head == NULL){
        cout<<"List is empty"<<endl;
    }
    else{
        node* temp=head;
        while(temp != NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
}



void getLength(node* &head){
    int len=0;
    node* temp=head;
    while(temp != NULL){
        len++;
        temp=temp->next;
    }
    cout<<"length of the list is "<<len<<endl;
}



void insertAtHead(node* &head,node* &tail,int d){
    if(head == NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
        node* temp=new node(d);
        temp->next=head;
        head=temp;
    }
}



void insertAtTail(node* &head,node* &tail,int d){
    if(tail == NULL){
        node* temp=new node(d);
        head=temp;
        tail=temp;
    }
    else{
        node* temp=new node(d);
        tail->next=temp;
        tail=temp;
    }
}



void insertAtPosition(node* &head,node* &tail,int p,int d){
    if(p == 1){
        insertAtHead(head,tail,d);
        return;
    }
    node* n=new node(d);
    node* temp=head;
    int cnt=1;
    while(cnt < p-1){
        cnt++;
        temp=temp->next;
    }
    if(temp->next == NULL){
        insertAtTail(head,tail,d);
        return;
    }
    n->next=temp->next;
    temp->next=n;
}



void deleteNode(node* &head,node* &tail,int p){
    if(head==NULL){
        cout<<"List is empty, nothing to delete"<<endl;
        return;
    }
    if(p == 1){
        node* temp=head;
        //if only 1 element present
        if(temp->next == NULL && temp->prev == NULL){
            delete temp;
            return;
        }
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    //delete middle or last node
    else{
    node* curr=head;
    node* previous=NULL;
    int cnt=1;
    while(cnt <= p-1){
        previous=curr;
        curr=curr->next;
        cnt++;
    }
        //last node
    if(curr->next == NULL){
        previous->next=curr->next;
        tail=previous;
        //memory free
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
    }
    else{
        //middle node
        previous->next=curr->next;
        curr->next->prev=curr->prev;
        //memory free
        curr->next=NULL;
        curr->prev=NULL;
        delete curr;
        }
    }
}

void reverse(node* &head,node* &tail){
    if(head == NULL || head->next == NULL){
        return;
    }
    node* temp=head;
    node* previous=NULL;
    while(temp != NULL){
        temp->prev=temp->next;
        temp->next=previous;
        previous=temp;
        temp=temp->prev;
    }
    tail=head;
    head=previous;
}



int main(){
    node* head=NULL;
    node* tail=NULL;
    print(head);
    getLength(head);
    deleteNode(head,tail,7);

    insertAtHead(head,tail,3);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtHead(head,tail,2);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtTail(head,tail,4);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(head,tail,1,1);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(head,tail,5,6);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    insertAtPosition(head,tail,3,100);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    cout<<"Reversed linked list"<<endl;
    reverse(head,tail);
    print(head);

    deleteNode(head,tail,1);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(head,tail,3);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;

    deleteNode(head,tail,4);
    print(head);
    cout<<"head "<<head->data<<endl;
    cout<<"tail "<<tail->data<<endl;
}