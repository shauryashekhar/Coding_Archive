/*
  Delete Node at a given position in a linked list 
  Node is defined as 
  struct Node
  {
     int data;
     struct Node *next;
  }
*/
Node* Delete(Node *head, int position)
{
    struct Node *current=head;
    if(position==0)
    {
        head=head->next;
        free(current);
        return head;
    }
    int k=0;
    struct Node *p=head;
    while(current->next!=NULL && k<position)
    {
        k++;
        p=current;
        current=current->next;
    }
    p->next=current->next;
    return head;
  // Complete this method
}
