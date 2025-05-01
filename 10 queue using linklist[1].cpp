// 10. Implement Queue using linked list.
#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int d){
       data=d;
       next=NULL; 
    }
};
class queue{
    public:
    node* front;
    node* rear;
    queue(){
        front=NULL;
        rear=NULL;
    }
    void enqueue(int d){
        node* newnode=new node(d);
        if(front==NULL){
            front=newnode;
            rear=newnode;
            return ;
        }
        rear->next=newnode;
        rear=newnode;
    }
    void dequeque(){
        if(front==NULL){
            cout<<"queque is empty"<<endl;
            return ;
        }
        node* temp=front;
        front=front->next;
        delete temp;
    }
    void display(){
        if(front==NULL){
            cout<<"queue is empty"<<endl;
            return ;
        }
        node* temp=front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};
int main()
{
    queue a;
    a.enqueue(5);
    a.enqueue(3);
    a.enqueue(10);
    a.enqueue(5);
    a.enqueue(3);
    a.enqueue(10);
    a.display();
    a.dequeque();
    a.display();
    a.dequeque();
    a.display();
    a.dequeque();
    a.display();

return 0;
}