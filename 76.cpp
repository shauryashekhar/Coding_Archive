#include<iostream>
using namespace std;

struct node
{
    int n;
    struct node *next;
}*top=NULL;

void push(int a)
{
    struct node *temp=new node;
    temp->n=a;
    if(top==NULL)
    {
        temp->next=NULL;
    }
    else
    {
        temp->next=top;
    }
    top=temp;
}

void pop()
{
    if(top==NULL)
    {
        cout<<"Stack is empty"<<endl;
    }
    else
    {
        top=top->next;
    }
}

void display()
{
    struct node *curr=top;
    
    while(curr->next!=NULL)
    {
        cout<<curr->n<<"->";
        curr=curr->next;
    }
    cout<<curr->n;
    cout<<endl;
}

int main()
{
    int opt;
x:
    cout<<"Stack"<<endl;
    cout<<"1. Push"<<endl;
    cout<<"2. Pop"<<endl;
    cout<<"3. Display"<<endl;
    cin>>opt;
    switch(opt)
    {
        case 1:
            int num;
            cout<<"Enter number"<<endl;
            cin>>num;
            push(num);
            goto x;
        case 2:
            pop();
            goto x;
        case 3:
            display();
            goto x;
    }
    return 0;
}
