/*
  Return the no. of times search_for value is there in a linked list.
  The input list will have at least one element  

  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/

int count(struct node* head, int search_for)
{
    int c=0;
    while(head->next!=NULL)
    {
        if(head->data==search_for)
        {
            c++;
        }
        head=head->next;
    }
    if(head->data==search_for)
    {
        c++;
    }
    return c;
//add your code here
}