/*
Count the number of nodes 
in the linked list
Node is defined as 
struct node
{
    int data;
    struct node* next;
};
 
*/

int getCount(struct node* head)
{
    int c=1;
    while(head->next!=NULL)
    {
        head=head->next;
        c++;
    }
    return c;
//Code here

}
