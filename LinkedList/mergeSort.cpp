#include<iostream>
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
//****************** MERGE SORT ******************************
//TIME-COMPLEXITY = O(nlog(n))
//SPACE-COMPLEXITY = O(log(n))

node* findMid(node* head){
    node* slow = head;
    node* fast = head -> next;
    
    while(fast != NULL && fast -> next != NULL) {
        slow = slow -> next;
        fast = fast -> next -> next; 
    }
    return slow;
}

node* merge(node* left,node*right){
    if(left == NULL){
        return right;
    }
    if(right == NULL){
        return left;
    }
    //creating dummy for answer LL
    node* ans = new node(-1);
    node* temp = ans;
    //comparing values in 2 sorted ll and inserting them in new LL
    while(left != NULL && right != NULL){
        if(left->data < right->data){
            temp->next = left;
            temp = left;
            left = left->next;
        }
        else{
            temp->next = right;
            temp =right;
            right = right->next;
        }
    }
    while(left != NULL){
        temp->next = left;
        temp = left;
        left = left->next;
    }
    while(right != NULL){
        temp->next = right;
        temp =right;
        right = right->next;
    }
    ans = ans->next;
    return ans;
}

node* mergeSort(node* &head){
    //base case
    if(head == NULL || head->next == NULL){
        return head;
    }
    //break LL into 2 halves after getting mid
    node* mid = findMid(head) ;
    node* left = head;
    node* right = mid->next;
    mid->next = NULL;
    //recursive calls for left and right
    left = mergeSort(left);
    right = mergeSort(right);
    //merge both halves
    node* ans = merge(left,right);
    return ans;
}


int main(){
    node* head=NULL;
    node* tail=NULL;
    insertionAtTail(head,tail,7);
    insertionAtTail(head,tail,2);
    insertionAtTail(head,tail,1);
    insertionAtTail(head,tail,4);
    insertionAtTail(head,tail,0);
    print(head);

    print(mergeSort(head));
}