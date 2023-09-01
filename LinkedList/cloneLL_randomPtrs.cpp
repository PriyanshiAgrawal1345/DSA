#include<iostream>
#include<unordered_map>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* random;

    //CONSTRUCTOR
    node(int data){
        this->data=data;
        this->next=NULL;
        this->random=NULL;
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

//******************************************************************
//****************** CLONE LINKEDLIST ******************************

// approach -1
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(N)
node* clone1(node* originalHead){
    node* cloneHead = NULL;
    node* cloneTail = NULL;
    //step-1 :- create clone list with next ptrs
    node* temp = originalHead;
    while(temp != NULL){
        insertionAtTail(cloneHead,cloneTail,temp->data);
        temp = temp->next;
    } 
    //step-2 :- creating map
    unordered_map<node*,node*>oldToNew;
    node* original = originalHead;
    node* clone = cloneHead;
    while(original != NULL){
        oldToNew[original] = clone;
        clone = clone->next;
        original = original->next;
    }
    //step=3 :- cloning randoms
    original = originalHead;
    clone = cloneHead;
    while(original != NULL){
        clone->random = oldToNew[original->random];
        clone=clone->next;
        original=original->next;
    }
    return cloneHead;
}


// approach -1
//TIME-COMPLEXITY = O(N)
//SPACE-COMPLEXITY = O(1)
node* clone2(node* originalHead){
    node* cloneHead = NULL;
    node* cloneTail = NULL;
    //step-1 :- create clone list with next ptrs
    node* temp = originalHead;
    while(temp != NULL){
        insertionAtTail(cloneHead,cloneTail,temp->data);
        temp = temp->next;
    }
    //step-2 :- changing links (giving above map like structure)
    node* original = originalHead;
    node* clone = cloneHead;
    while(original != NULL && clone != NULL){
        node* store_original = original->next;
        original->next = clone;
        node* store_clone = clone->next;
        clone->next = store_original;

        original = store_original;
        clone = store_clone;
    }
    //step-3 :- cloning randoms
    original = originalHead;
    while(original != NULL){
        if(original->random == NULL){
            original->next->random = NULL;
        }
        else{
            original->next->random = original->random->next;
        }
        original = original->next->next;
    }
    //step-4 :- revert changes done in step4 to get LL with cloneHead
    original = originalHead;
    clone = cloneHead;
    while(original != NULL && clone != NULL){
        original->next = clone->next;
        original = original->next;
        if(original != NULL){
            clone->next = original->next;
        }
        clone = clone->next;
    }
    //step-5 :- giving ans
    return cloneHead;
}




int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtTail(head,tail,1);
    insertionAtTail(head,tail,2);
    insertionAtTail(head,tail,3);
    insertionAtTail(head,tail,4);
    insertionAtTail(head,tail,5);
    head->random = head->next->next;
    head->next->next->random = tail;
    tail->random = head->next;
    head->next->random = head;
    head->next->next->next->random = head->next->next;
    cout<<"Printing randoms :- "<<endl;
    node* temp = head;
    while(temp != NULL){
        if(temp->random == NULL){
            cout<<-1<<" ";
        }
        else{
            cout<<temp->random<<" "<<temp->random->data<<"  ";
        }
        temp = temp->next;
    }
    cout<<endl;
    cout<<"Printing LL :- "<<endl;
    print(head);


    //CLONED LINKED LIST
    cout<<"Cloned list"<<endl;
    head=clone2(head);
    print(head);
    cout<<"checking random ptrs in cloned list"<<endl;
    temp = head;
    while(temp != NULL){
        if(temp->random == NULL){
            cout<<-1<<" ";
        }
        else{
            cout<<temp->random<<" "<<temp->random->data<<"  ";
        }
        temp = temp->next;
    }
    cout<<endl;
    

}