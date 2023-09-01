//TWO TYPES OF PROBLEM
//1.) From Sorted          2.) From UnSorted

#include<iostream>
#include<map>
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


//******************************************************************
//*********************** SORTED LINKED LIST REMOVE DUPLICATES ***********************
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(N)
void sortedRemoveDuplicates(node* head){
    if(head == NULL){
        return;
    }
    node* curr=head;
    while(curr != NULL){
        if((curr->next != NULL) && (curr->data == curr->next->data)){
            node* nodeToDelete=curr->next;
            curr->next = curr->next->next;
            delete(nodeToDelete);
        }
        else{
            curr=curr->next;
        }
    }
}



//*********************** UNSORTED LINKED LIST REMOVE DUPLICATES ***********************

//approach - 1

//TIME-COMPLEXITY = O(N^2)
//SPACE-COMPLEXITY = O(1)
void unsortedRemoveDuplicates(node* head){
    if(head == NULL){
        return;
    }
    node* curr=head;
    while(curr != NULL && curr->next != NULL){
        node* temp=curr;
        while(temp->next != NULL){
            if(temp->next->data == curr->data){
                node* nodeToDelete=temp->next;
                temp->next = temp->next->next;
                delete(nodeToDelete);
            }
            else{
                temp=temp->next;
            }
        }
        curr=curr->next;
    }
}

// approach - 2
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(N)
void unsortedRemoveDuplicates2(node* head){
    map<int,bool>visited;
    node* temp=head;
    visited[temp->data]=true;
    while(temp->next != NULL){
        if(visited[temp->next->data] == true){
            node* nodeToDelete=temp->next;
            temp->next = temp->next->next;
            delete(nodeToDelete);
        }
        else{
            visited[temp->next->data]=true;
            temp=temp->next;
        }
    }
}




int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtPosition(head,tail,1,3);
    insertionAtPosition(head,tail,2,2);
    insertionAtPosition(head,tail,3,2);
    insertionAtPosition(head,tail,4,5);
    insertionAtPosition(head,tail,5,4);
    insertionAtPosition(head,tail,6,2);
    print(head);

    // cout<<"Linked list after removing duplicates from SORTED LL :- "<<endl;
    // sortedRemoveDuplicates(head);
    // print(head);

    cout<<"Linked list after removing duplicates from UNSORTED LL :- "<<endl;
    //unsortedRemoveDuplicates(head);
    unsortedRemoveDuplicates2(head);
    print(head);
    }