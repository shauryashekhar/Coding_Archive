/* struct Node
 {
   int data;
   Node* next;
 }; */

/* Should return data of n'th node from the end of linked list */
int getNthFromLast(Node* head, int n)
{
    int len=1;
    struct Node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
        len++;
    }
    if(n>len)
    {
        return -1;
    }
    int pos=1;
    int postoprint=len+1-n;
    struct Node *first=head;
    while(first)
    {
        if(pos==postoprint)
        {
            return first->data;
            break;
        }
        first=first->next;
        pos++;
    }
       // Your code here
}