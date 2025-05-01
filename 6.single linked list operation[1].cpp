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
class list{
    node* head;
    public:
    list(){head=NULL;}
    void create(int d){
    node* nextnode=new node(d);
    if(head==NULL){
        head=nextnode;
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        temp->next=nextnode;
    }
}
void display(){
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
    cout<<endl;
}
void insertathead(int d){
    node* nextnode=new node(d);
    nextnode->next=head;
    head=nextnode;
}
void insertatpp(int d,int p){
    node* nextnode=new node(d);
    if(p==1){
        insertathead(d);
    }
    else {
        node* temp=head;
        int i=2;
        int c=0;
        while(temp->next!=NULL){
            if(i==p){
                nextnode->next=temp->next;
                temp->next=nextnode;
                c++;
                break;
            }
            i++;
            temp=temp->next;
        }
        if(c==0){
            temp->next=nextnode;
        }

    }
}
void dele(int d){
    if(head==NULL){
        cout<<"list is empty"<<endl;
    }
    else{
        node* temp=head;
        while(temp!=NULL){
            if(temp->data==d && temp==head){
                node* d=temp;
                head=temp->next;
                delete d;
                break;

            }
            else{
                if(temp->next->data==d){
                    node* d=temp->next;
                    temp->next=temp->next->next;
                    delete d;
                    break;
                }
            }
            temp=temp->next;

        }
    }
}
};
int main()
{
    list a;
    a.create(5);
    a.create(10);
    a.create(4);
    a.create(5);
    a.create(11);
    a.create(14);
    a.display();
     a.dele(14);
     a.display();

return 0;
}