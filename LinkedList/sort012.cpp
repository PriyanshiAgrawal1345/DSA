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

//****************************************************************
//*****************SORT 0 1 2*************************************

//Approach - 1
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(1)
void sort(node* &head){
    int cnt_0=0;
    int cnt_1=0;
    int cnt_2=0;
    node* temp=head;
    while(temp != NULL){
        if(temp->data == 0){
            cnt_0++;
        }
        if(temp->data == 1){
            cnt_1++;
        }
        if(temp->data ==2){
            cnt_2++;
        }
        temp=temp->next;
    }
    temp=head;
    while(cnt_0 != 0 && temp != NULL){
        temp->data=0;
        temp=temp->next;
        cnt_0--;
    }
    while(cnt_1 != 0 && temp != NULL){
        temp->data=1;
        temp=temp->next;
        cnt_1--;
    }
    while(cnt_2 != 0 && temp != NULL){
        temp->data=2;
        temp=temp->next;
        cnt_2--;
    }
}


//Approach - 2 (data replacement is not allowed) --> (change links)
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(1)
node* sort2(node* &head){
    //creating dummy nodes for 0,1,2
    node* zeroHead = new node(-1);
    node* zeroTail = zeroHead;
    node* oneHead = new node(-1);
    node* oneTail = oneHead;
    node* twoHead = new node(-1);
    node* twoTail = twoHead;

    node* curr = head;

    //creating seperate ll of 0's , 1's, 2's
    while(curr != NULL){
        if(curr->data == 0){
            insertionAtTail(zeroHead,zeroTail,0);
        }
        if(curr->data == 1){
            insertionAtTail(oneHead,oneTail,1);
        }
        if(curr->data == 2){
            insertionAtTail(twoHead,twoTail,2);
        }
        curr = curr->next;
    }

    //merge 3 LL
    if(oneHead->next != NULL){
        zeroTail->next = oneHead->next;
        oneTail->next = twoHead->next;
    }
    else{
        zeroTail->next = twoHead->next;
    }

    //setup head
    head = zeroHead->next;

    //deleting dummy nodes
    delete(zeroHead);
    delete(oneHead);
    delete(twoHead);
 
    return head;
}





int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtPosition(head,tail,1,2);
    insertionAtPosition(head,tail,2,0);
    insertionAtPosition(head,tail,3,0);
    insertionAtPosition(head,tail,4,1);
    insertionAtPosition(head,tail,5,2);
    insertionAtPosition(head,tail,6,0);
    print(head);

    // cout<<"After sorting 0's,1's,2's :- "<<endl;
    // sort(head);
    // print(head);

    cout<<endl;

    cout<<"After sorting 0's,1's,2's :- "<<endl;
    sort2(head);
    print(head);

}