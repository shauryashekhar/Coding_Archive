/* Print he nth node in the linked list Node is defined as 
struct node
{
    int data;
    struct node* next;
}; */

// Should return data of node at given index. The function may
//  assume that there are at least index+1 nodes in linked list
int GetNth(struct node* head, int index)
{
    int i=0;
    while(head)
    {
        if(i==index)
        {
            return head->data;
        }
        head=head->next;
        i++;
    }
  // Code here

}
