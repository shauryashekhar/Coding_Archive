/*
Structure of the linked list node is as
struct node
{
    int data;
    struct node *next;
};
*/

// function inserts the data in front of the list
void insertAtBegining(struct node** headRef, int newData)
{
    struct node *temp=new node;
    temp->data=newData;
    temp->next=*headRef;
    (*headRef)=temp;
    // Code here
}

// function appends the data at the end of the list
void insertAtEnd(struct node** headRef, int newData)
{
    struct node *temp=new node;
    temp->data=newData;
    temp->next=NULL;
    struct node *curr=*headRef;
    if(*headRef==NULL)
    {
        *headRef=temp;
    }
    else
    {
    while(curr->next!=NULL)
    {
        curr=curr->next;
    }
    curr->next=temp;
    }
    // Code here
}