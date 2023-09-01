#include<iostream>
#include<map>
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

int getlength(node* &tail){
    node* temp=tail->next;
    int cnt=1;
    while(temp != tail){
        temp=temp->next;
        cnt++;
    }
    return cnt;
}


//*****************************************************************************
//*************************** SPLIT INTO 2 HALVES *****************************
void split(node* &tail){
    int len1half = getlength(tail)/2 + 1;
    int len2half = getlength(tail) - len1half;
    node* start=tail;
    node* prev=NULL;
    
    node* tail1=NULL;
    node* tail2=NULL;

    for(int s=1;s<=len1half;s++){
        if(prev == NULL){
            insertNode(tail1,1,start->data);
        }
        else{
            insertNode(tail1,prev->data,start->data);
        }
        prev=start;
        start=start->next;
    }

    for(int s=1;s<=len2half;s++){
        insertNode(tail2,prev->data,start->data);
        prev=start;
        start=start->next;
    }

    cout<<"1st half :- "<<endl;
    print(tail1);
    cout<<"2st half :- "<<endl;
    print(tail2);
}






int main(){
    node* tail=NULL;
    insertNode(tail,1,1);
    insertNode(tail,1,3);
    insertNode(tail,3,5);
    insertNode(tail,5,7);
    insertNode(tail,7,9);
    print(tail);
    
    split(tail);

}