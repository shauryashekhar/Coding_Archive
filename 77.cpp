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
    if(top==NULL)
    {
        temp->next=NULL;
        top=temp;
    }
    else
    {
        struct node *curr=top;
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
        cout<<"Queue is empty"<<endl;
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
    cout<<"Queue"<<endl;
    cout<<"1. Enqueue"<<endl;
    cout<<"2. Dequeue"<<endl;
    cout<<"3. Display"<<endl;
    cin>>opt;
    switch(opt)
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
    return 0;
}
