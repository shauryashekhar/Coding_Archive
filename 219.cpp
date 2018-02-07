/*
  Insert Node at the end of a linked list 
  head pointer input could be NULL as well for empty list
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Insert(Node *head,int data)
{
    struct Node *newNode= new Node;
    newNode->data=data;
    newNode->next=NULL;
    if(!head)
    {
        head=newNode;
        return head;
    }
    struct Node *current=head;
    while(current->next!=NULL)
    {
        current=current->next;
    }
    current->next=newNode;
    return head;
  // Complete this method
}
