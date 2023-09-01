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

void deleteNode(node* &head,node* &tail,int p){
    //delete 1st node
    if(p == 1){
        node* temp=head;
        head=head->next;
        //memory free
        temp->next=NULL;
        delete temp;
    }
    //delete middle or last node
    else{
    node* curr=head;
    node* prev=NULL;
    int cnt=1;
    while(cnt <= p-1){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    if(curr->next == NULL){
        tail=prev;
    }
    //memory free
    curr->next=NULL;
    delete curr;
    }
}


// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(n)
bool isCircular(node* &tail){
    if(tail == NULL){
        return true;
    }
    map<node*,bool>visited;
    node* temp=tail;
    temp=temp->next;
    while(temp != tail){//if a short loop is present it will enter never ending loop if you don't start with element present in loop
        if(temp == NULL){       //solution:- MAP
            return false;
        }
        if(visited[temp] == true){
            return 0;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return true;
}

bool detectLoop(node* &tail){
    if(tail == NULL){
        return false;
        }
    map<node*,bool>visited;
    node* temp=tail;
    while(temp != NULL){
        if(visited[temp] == true){
            cout<<endl<<"Starting node of loop is :- "<<temp->data<<endl<<endl;
            return 1;
        }
        visited[temp]=true;
        temp=temp->next;
    }
    return 0;
}

//optimisation

//************************* FLOYD'S CYCLE(short loop) DETECTION ALGO ************

// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(1)
bool floyd(node* &tail,node* &POI){
    node* fast=tail;
    node* slow=tail;
    while(fast != NULL){
        slow=slow->next;
        fast=fast->next;
        if(fast != NULL){
            fast=fast->next;
        }
        else{return 0;}
        if(slow == fast){
            POI=slow;
            return 1;
        }
    }
    return 0;
}

// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(1)
node* startNodeLoop(node* &head,node* POI){ //you have to start from head only according to equation
    node* fast=POI;
    node* slow=head;
    while(slow != fast){
        slow=slow->next;
        fast=fast->next;
    }
    return slow;
}

// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(1)
void deleteLoop(node* &head,node* POI){
    node* prevOfPOI=startNodeLoop(head,POI);
    while(prevOfPOI->next != startNodeLoop(head,POI)){
        prevOfPOI=prevOfPOI->next;
    }
    cout<<"-->"<<prevOfPOI->data<<endl;
    prevOfPOI->next = NULL;
}


int main(){
    //create a node in L.L

    //STATIC
    // node n1(5);
    // cout<<"data "<<n1.data<<endl;
    // cout<<"next node address "<<n1.next<<endl;

    //DYNAMIC
    node* n1=new node(5);
    cout<<n1->data<<endl;
    //cout<<"next node address "<<n1->next<<endl;


    //head pointing at start
    node* head=n1;
    node* tail=n1;



    //insertion at HEAD
    insertionAtHead(head,1);
    print(head);
    //cout<<"Whether list is circular? "<<isCircular(tail)<<endl;

    cout<<"head "<<head->data<<" ";
    cout<<"tail "<<tail->data<<endl;



    //insertion at TAIL
    insertionAtTail(head,tail,10);
    print(head);

    cout<<"head "<<head->data<<" ";
    cout<<"tail "<<tail->data<<endl;



    //insertion at any random position
    insertionAtPosition(head,tail,1,2);
    print(head);
    insertionAtPosition(head,tail,5,4);
    print(head);
    insertionAtPosition(head,tail,3,6);
    print(head);

    cout<<"head "<<head->data<<" ";
    cout<<"tail "<<tail->data<<endl;




    //delete
    deleteNode(head,tail,3);
    print(head);
    cout<<"head "<<head->data<<" ";
    cout<<"tail "<<tail->data<<endl;

    //for checking loop -> creating a loop
    tail->next=head->next->next;

    cout<<"Whether list is circular? "<<isCircular(head)<<endl;
    cout<<"Whether a loop is present or not? "<<detectLoop(head)<<endl;
    node* POI;
    cout<<"FLOYD :- "<<"Whether a loop is present or not? "<<floyd(head,POI)<<endl;

    if(floyd(head,POI)){
        cout<<"POI "<<POI->data<<endl;
        cout<<"Starting node of the loop :- "<<startNodeLoop(head,POI)->data<<endl;

        //deleting the loop
        deleteLoop(head,POI);
        cout<<endl<<"after deleting the loop"<<endl;
        print(head);  //because is it printed means it does'nt have any loop
    }

}