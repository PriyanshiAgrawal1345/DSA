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
};

void insertionAtTail(node* &head,node* &tail,int d){
    if(head == NULL){
        node* n=new node(d);
        head = n;
        tail = n;
        return;
    }
    //create new node
    node* n=new node(d);
    node* temp=head;
    while(temp->next != NULL){
        temp=temp->next;
    }
    temp->next=n;
    tail=n;
}

void print(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}


//**************************************************************
//****************** MERGE 2 SORTED LINKED LISTS ***************
node* merge(node* &head1,node* &head2){
    if(head1 == NULL){
        return head2;
    }
    if(head2 == NULL){
        return head1;
    }
    node* curr = head1;
    node* prev = NULL;
    node* temp = head2;
    node* nodeToAdd;
    while(temp != NULL && curr != NULL){
        if(prev == NULL && temp->data < curr->data){
            nodeToAdd = temp;
            temp = temp->next;
            head2 = temp;
            nodeToAdd->next = curr;
            prev = nodeToAdd;
            head1 = prev;
        }
        if(prev != NULL && temp->data > prev->data && temp->data < curr->data){
            nodeToAdd = temp;
            temp = temp->next;
            head2 = temp;
            prev->next = nodeToAdd;
            nodeToAdd->next = curr;
            prev = nodeToAdd;
        }
        else{
            prev = curr;
            curr = curr->next;
        }
    }
    if(curr != NULL){
        return head1;
    }

    if(temp != NULL){
        prev->next = head2;
        return head1;
    }
}



int main(){
    node* head1=NULL;
    node* tail1=NULL;
    insertionAtTail(head1,tail1,2);
    insertionAtTail(head1,tail1,5);
    insertionAtTail(head1,tail1,9);
    insertionAtTail(head1,tail1,10);
    insertionAtTail(head1,tail1,12);
    insertionAtTail(head1,tail1,15);
    print(head1);

    node* head2=NULL;
    node* tail2=NULL;
    insertionAtTail(head2,tail2,1);
    insertionAtTail(head2,tail2,3);
    insertionAtTail(head2,tail2,7);
    insertionAtTail(head2,tail2,11);
    print(head2);

    cout<<"After merging 2 sorted Linked lists :- "<<endl;
    print(merge(head1,head2));
}