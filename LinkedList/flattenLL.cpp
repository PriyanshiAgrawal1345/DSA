#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* child;

    //CONSTRUCTOR
    node(int data){
        this->data=data;
        this->next=NULL;
        this->child=NULL;
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
void insert(node* &head,node* &tail,int d){
    if(head == NULL){
        node* n=new node(d);
        head = n;
        tail = n;
        return;
    }
    //create new node
    node* n=new node(d);
    node* temp=head;
    while(temp->child != NULL){
        temp=temp->child;
    }
    temp->child=n;
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
void print2(node* head){
    node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->child;
    }
    cout<<endl;
}


//******************************************************************
//****************** FLATTEN LINKED LIST ******************************

//merge 2 sorted LL
node* merge(node* down,node* right){
    if(down == NULL){
        return right;
    }
    if(right == NULL){
        return down;
    }
    node* ans=new node(-1);
    node* temp=ans;
    while(down!=NULL && right!=NULL){
        if(down->data < right->data){
            temp->child=down;
            temp=temp->child;
            down=down->child;
        }
        else{
            temp->child=right;
            temp=temp->next;
            right=right->child;
        }
    }
    if(down!=NULL){
        temp->child=down;
    }
    if(right!=NULL){
        temp->child=right;
    }
    return ans->child;
}


node* flatten(node* head){
    //base case
    if(head == NULL || head->next == NULL){
        return head; 
    }
    node* down = head;
    node* right = flatten(down->next);
    down->next=NULL;
    node* ans = merge(down,right);
    return ans;
}


int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtTail(head,tail,1);
    insertionAtTail(head,tail,4);
    insertionAtTail(head,tail,7);
    insertionAtTail(head,tail,9);
    insertionAtTail(head,tail,20);
    node* originalHead=head;
    head=head;         tail=NULL;
    insert(head,tail,2); insert(head,tail,3);
    head=head->next;   tail=NULL;
    insert(head,tail,5); insert(head,tail,6);
    head=head->next;   tail=NULL;
    insert(head,tail,8);
    head=head->next;   tail=NULL;
    insert(head,tail,12);
    print(originalHead);

    originalHead = flatten(originalHead);
    print2(originalHead);
    
}