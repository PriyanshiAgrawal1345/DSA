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




//REVERSE
//APPROACH     1
void reverse1(node* &head){
    if(head == NULL || head->next == NULL){
        return;
    }
    node* temp=head;
    node* prev=NULL;
    node* forward;
    while(temp != NULL){
        forward=temp->next;
        temp->next=prev;
        prev=temp;
        temp=forward;
    }
    head=prev;
}

//APPROACH    2
void reverse2(node* &head,node* curr,node* prev){
    if(curr == NULL){
        head=prev;
        return;
    }
    node* forward=curr->next;
    curr->next=prev;
    reverse2(head,forward,curr);
}

//APPROACH    3
node* reverse3(node* &head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    node* reversedHead = reverse3(head->next);
    head->next->next=head;
    head->next=NULL;
    return reversedHead;
}



int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtPosition(head,tail,1,3);
    insertionAtPosition(head,tail,2,6);
    insertionAtPosition(head,tail,3,9);
    print(head);

    //APPROACH - 1
    // reverse1(head);
    // cout<<"Approach - 1"<<endl;
    // cout<<"head "<<head->data<<endl;
    // print(head);

    //APPROACH - 2
    // node* curr=head;
    // node* prev=NULL;
    // reverse2(head,curr,prev);
    // cout<<"Approach - 2"<<endl;
    // cout<<"head "<<head->data<<endl;
    // print(head);

    //APPROACH - 3
    head=reverse3(head);
    cout<<"Approach - 3"<<endl;
    cout<<"head "<<head->data<<endl;
    print(head);

}