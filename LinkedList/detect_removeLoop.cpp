#include<map>
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    //constructor
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void print(node* &tail){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    node* temp=tail;
    cout<<temp->data<<" ";
    temp=temp->next;
    while(temp != tail){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

void insertNode(node* &tail,int element,int d){
    if(tail == NULL){
        node* n=new node(d);
        n->next=n;
        tail=n;
        return;
    }
    //assuming element is present in the list
    node* temp=tail;
    while(temp->data != element){
        temp=temp->next;
    }
    node* n=new node(d);
    n->next=temp->next;
    temp->next=n;
}



//&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&&
//***********************************************
// TIME-COMPLEXITY => O(n)
// SPACE-COMPLEXITY => O(n)
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
    node* tail=NULL;
    insertNode(tail,1,1);
    insertNode(tail,1,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,7,9);
    print(tail);

    cout<<"Whether a loop is present or not? "<<detectLoop(tail)<<endl;
    node* POI;
    cout<<"FLOYD :- "<<"Whether a loop is present or not? "<<floyd(tail,POI)<<endl;

    if(floyd(tail,POI)){
        cout<<"POI "<<POI->data<<endl;
        cout<<"Starting node of the loop :- "<<startNodeLoop(tail,POI)->data<<endl;

        //deleting the loop
        deleteLoop(tail,POI);
        cout<<endl<<"after deleting the loop"<<endl;
        print(tail);  //because is it printed means it does'nt have any loop
    }

}