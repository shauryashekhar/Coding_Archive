/*
  Get Nth element from the end in a linked list of integers
  Number of elements in the list will always be greater than N.
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
int GetNode(Node *head,int positionFromTail)
{
    if(positionFromTail==0)
    {
        struct Node *current=head;
        while(current->next!=NULL)
        {
            current=current->next;
        }
        return current->data;
    }
    else
    {
        struct Node *plast=head;
        for(int i=0;i<positionFromTail;i++)
        {
            plast=plast->next;
        }
        struct Node *pth=head;
        while(plast->next!=NULL)
        {
            pth=pth->next;
            plast=plast->next;
        }
        return pth->data;
    }
  // This is a "method-only" submission. 
  // You only need to complete this method. 
}
