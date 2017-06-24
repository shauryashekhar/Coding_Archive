#include<iostream>
using namespace std;

struct node
{
    int n;
    struct node *next;
}*top=NULL;

void enqueue(int a)
{
    struct node *temp=new node;
    temp->n=a;
    temp->next=NULL;
    if(top==NULL)
    {
        top=temp;
    }
    else
    {
        struct node *curr;
        curr=top;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
    }
}

void dequeue()
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
    if(top==NULL)
    {
        cout<<"Queue is empty"<<endl;
    }
    else
    {
        struct node *curr;
        curr=top;
        while(curr->next!=NULL)
        {
            cout<<curr->n<<"<-";
            curr=curr->next;
        }
        cout<<curr->n<<endl;
    }
}

int main()
{
x:
    cout<<"QUEUE"<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Display"<<endl;
    cout<<"Enter option"<<endl;
    int opt;
    cin>>opt;
    switch (opt)
    {
        case 1:
            int num;
            cout<<"Enter number"<<endl;
            cin>>num;
            enqueue(num);
            goto x;
        case 2:
            dequeue();
            goto x;
        case 3:
            display();
            goto x;
    }
}