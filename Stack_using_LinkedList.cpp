#include<iostream>
using namespace std;
struct Node
{
    int data;
    Node *next;
};
Node *top=0;
void push(int val)
{
    Node *obj=new Node();
    obj->data=val;
    obj->next=top;
    top=obj;
    
}
void pop()
{
    if(top!=0)
    {
    Node *temp=top;
    top=temp->next;
    delete temp;
    }
}
void peek()
{
    cout<<top->data<<endl;
}
void display()
{
    Node *temp=top;
    while(temp!=0)
    {
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}
int main()
{
    for(int i=1;i<=10;i++)
    {
        push(i);
    }
    display();
    pop();
    display();
    peek();
    pop();
    peek();
}