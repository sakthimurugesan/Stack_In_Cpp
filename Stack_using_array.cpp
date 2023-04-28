#include <iostream>
#define n 10
using namespace std;
int stack[n];
int top=-1;
void push(int ele)
{
    if(top!=n-1)
    {
        top++;
        stack[top]=ele;
    }
    else
    {
        cout<<"Stack Overflowing\n";
        return;
    }
}
void pop()
{
    if(top!=-1)
    {
        int item=stack[top];
        top--;
    }
    
}
void peek()
{
    if(top!=-1)
    {
        cout<<stack[top]<<endl;
    }
    else
    {
        cout<<"Stack is empty\n";
    }
}
void display()
{
    int t=top;
    while(t>=0)
    {
        cout<<stack[t]<<" ";
        t--;
    }
    cout<<endl;
}

int main()
{
    for(int i=1;i<=n;i++)
    {
        push(i);
    }
    display();
    pop();
    peek();
    display();
    
    
}