// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(n)

#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //CONSTRUCTOR
    node(int data){
        this->data=data;
        this->next=NULL;
    }
    //DESTRUCTOR
    ~node(){
        int value = this->data;
        if(this->next != NULL){
            delete next;
        }
        cout<<"memory is freed for node with data "<<value<<endl;
    }
};

void insertionAtHead(node* &head,int d){
    //create new node
    node* n=new node(d);
    //insert at head
    n->next=head;
    head=n;  
}

void insertionAtTail(node* &head,node* &tail,int d){
    //create new node
    node* n=new node(d);
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    tail=n;
}

void insertionAtPosition(node* &head,node* &tail,int p,int d){
    if(head == NULL){
        node* n=new node(d);
        head=n;
        return;
    }
    
    //create new node
    node* n=new node(d);

    if(p == 1){
        insertionAtHead(head,d);
        return;
    }

    node* temp=head;
    int cnt=1;
    while(cnt < p-1){
        temp=temp->next;
        cnt++;
    }

    if(temp->next == NULL){
        insertionAtTail(head,tail,d);
        return;
    }

    n->next=temp->next;
    temp->next=n;

}

void print(node* &head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

//REVERSING IN GROUPS OF K
node* kreverse(node* head,int k){
    if(head == NULL){
        return NULL;
    }
    //step 1:- reverse first k nodes
    node* forward=NULL;
    node* curr=head;
    node* prev=NULL;
    int cnt=1;
    while(cnt<=k && curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
        cnt++;
    }
    //step 2:- recursion dekhlega
    if(forward != NULL){
        head->next=kreverse(forward,k);  
    }
    //step 3
    return prev;
}


int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtPosition(head,tail,1,3);
    insertionAtPosition(head,tail,2,6);
    insertionAtPosition(head,tail,3,9);
    insertionAtPosition(head,tail,4,12);
    insertionAtPosition(head,tail,5,15);
    //insertionAtPosition(head,tail,6,18);
    print(head);

    cout<<"K reversed linked list"<<endl;
    head=kreverse(head,3);
    print(head);

}