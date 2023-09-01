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

int getLength(node* head){
    int c=0;
    while(head != NULL){
        c++;
        head = head->next;
    }
    return c;
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

//******************************************************
///**************** CHECK PALINDROME *******************

// approach -1
// TIME-COMPLEXITY = O(N)
// SPACE-COMPLEXITY = O(N)
bool isPalindrome(node* &head,int len){
    int* arr = new int[len];
    int c=0;
    node* temp = head;
    while(temp != NULL){
        arr[c++] = temp->data;
        temp = temp->next;
    }
    //check palindrome in array
    int s = 0;
    int e = len - 1;
    while(s <= e){
        if(arr[s] != arr[e]){
            return false;
        }
        s++;
        e--;
    }
    delete arr;
    return true;
}


// approach - 2
// TIME-COMPLEXITY = O(N)
// SPACE-COMPLEXITY = O(1)
bool isPalindrome1(node* &head){
    int mid = getLength(head)/2;
    node* temp = head;
    int c=1;
    while(c < mid){
        c++;
        temp = temp->next;
    }
    //reverse list after mid
    node* midHead = reverse(temp->next);
    node* startHead = head;
    //compare
    while(mid != 0){
        if(startHead->data != midHead->data){
            return false;
        }
        startHead = startHead->next;
        midHead = midHead->next;
        mid--;
    }
    return true;
}



int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtTail(head,tail,2);
    insertionAtTail(head,tail,0);
    insertionAtTail(head,tail,1);
    insertionAtTail(head,tail,3);
    insertionAtTail(head,tail,0);
    insertionAtTail(head,tail,2);
    print(head);

    cout<<"Linked list is palindrome( by approach 1 ) or not? "<<isPalindrome(head,getLength(head))<<endl;
    cout<<"Linked list is palindrome( by approach 2 ) or not? "<<isPalindrome1(head)<<endl;
    
}