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

void insertionAtHead(node* &head,int d){
    //create new node
    node* n=new node(d);
    //insert at head
    n->next=head;
    head=n;
    
}

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

node* reverse(node* head){
    node* temp = head;
    node* prev = NULL;
    while(temp != NULL){
        node* forward = temp->next;
        temp->next = prev;
        prev = temp;
        temp = forward;
    }
    return prev;
}

//**********************************************************************
//********* ADD 2 NUMBERS REPRESENTED BY LINKED LISTS ******************

// approach -1 
//TIME-COMPLEXITY = O(N + M)
//SPACE-COMPLEXITY = O(max(N,M))
void add(node* head1,node* head2){
    int n1 = 0;
    int n2 = 0;
    while(head1 != NULL){
        if(head1->next == NULL){
            n1 = (n1 + head1->data );
        }
        else{
            n1 = (n1 + head1->data ) * 10;
        }
        head1 = head1->next;
    }
    while(head2 != NULL){
        if(head2->next == NULL){
            n2 = (n2 + head2->data );
        }
        else{
            n2 = (n2 + head2->data ) * 10;
        }
        head2 = head2->next;
    }
    int answer = n1 + n2;
    //creating new answer linked list
    node* head = NULL;
    while(answer != 0){
        int digit = answer % 10;
        answer = answer/10;
        insertionAtHead(head,digit);
    }
    print(head);
}


// approach -2 
//TIME-COMPLEXITY = O(N + M)
//SPACE-COMPLEXITY = O(max(N,M))
void add2(node* head1,node* head2){
    //step1 : reverse both LL
    node* rhead1 = reverse(head1);
    node* rhead2 = reverse(head2);
    node* ansHead = NULL;
    int digit , carry=0;
    while(rhead1 != NULL && rhead2 != NULL){
        digit = rhead1->data + rhead2->data + carry;
        if(digit > 9){
            carry = digit/10;
            digit = digit%10;
        }
        else{
            carry = 0;
        }
        insertionAtHead(ansHead,digit);
        rhead1 = rhead1->next;
        rhead2 = rhead2->next;
    }
    //if 1st LL is still non-empty
    while(rhead1 != NULL){
        digit = rhead1->data + carry;
        if(digit > 9){
            carry = digit/10;
            digit = digit%10;
        }
        else{
            carry = 0;
        }
        insertionAtHead(ansHead,digit);
        rhead1 = rhead1->next;
    }
    //if 2nd LL is still non-empty
    while(rhead2 != NULL){
        digit = rhead2->data + carry;
        if(digit > 9){
            carry = digit/10;
            digit = digit%10;
        }
        else{
            carry = 0;
        }
        insertionAtHead(ansHead,digit);
        rhead2 = rhead2->next;
    }
    if(carry != 0){
        insertionAtHead(ansHead,carry);
    }
    print(ansHead);
}




int main(){
    node* head1=NULL;
    node* tail1=NULL;
    insertionAtTail(head1,tail1,9);
    insertionAtTail(head1,tail1,9);
    insertionAtTail(head1,tail1,1);
    print(head1);

    node* head2=NULL;
    node* tail2=NULL;
    insertionAtTail(head2,tail2,3);
    insertionAtTail(head2,tail2,8);
    insertionAtTail(head2,tail2,9);
    print(head2);

    add2(head1,head2);
}