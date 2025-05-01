#include<iostream>
using namespace std;
class node{
    public:
    int* arr;
    int size;
    int f,r;
    node(int s){
        size=s;
        arr=new int[size];
        f=r=-1;
    }
    bool isfull(){
        if(f==0 && r==size-1 || f==(r+1)%size){
            return true;
        }
        else{
            return false;
        }
    }
    bool isempty(){
        if(f==-1){
            return true;
        }
        else{return false;}
    }
void push(int d){
    if(isfull()){
        cout<<"queue is full"<<endl;
    }
    else
    {
        if(f==-1){
            f=0;
            r=0;
        }
        else{
            r=(r+1)%size;
        }
        arr[r]=d;
    }
}
void pop(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
    }
    else if(f==r){
        f=r=-1;
    }
    else{
        f=(f+1)%size;
    }
}
void display(){
    if(isempty()){
        cout<<"queue is empty"<<endl;
    }
    else{
        int i;
        for(i=f;i!=r;i=(i+1)%size){
            cout<<arr[i]<<" ";
        }
        cout<<arr[i]<<endl;
    }
}
};
int main()
{
node a(4);
a.push(5);
a.push(6);
a.push(7);
a.push(4);
a.display();
a.pop();
a.display();
a.push(6);
a.pop();
a.push(7);
a.display();

return 0;
}