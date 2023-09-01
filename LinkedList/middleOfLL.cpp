// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(1)


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

int getLength(node* head){
    int len=0;
    while(head != NULL){
        len++;
        head=head->next;
    }
    return len;
}


// APPROACH   -1
int middle(node* head){
    int len=getLength(head);
    int mid=len/2 + 1;
    int cnt=1;
    while(cnt < mid){
        head=head->next;
        cnt++;
    }
    return head->data;
}

// APPROACH   -2
node* middle2(node* head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* fast=head->next;
    node* slow=head;
    while(fast != NULL){
        if(fast->next == NULL){
            fast=fast->next;
        }
        else{
            fast=fast->next->next;
        }
        slow=slow->next;
    }
    return slow;
}



int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtPosition(head,tail,1,3);
    insertionAtPosition(head,tail,2,6);
    insertionAtPosition(head,tail,3,9);
    insertionAtPosition(head,tail,4,12);
    insertionAtPosition(head,tail,5,15);
    insertionAtPosition(head,tail,6,18);
    //insertionAtPosition(head,tail,6,18);
    print(head);

    cout<<"APPROACH 1 :- "<<"Middle of linked list is :- "<<middle(head)<<endl;
    cout<<"APPROACH 2 :- "<<"Middle of linked list is :- "<<middle2(head)->data<<endl;

}