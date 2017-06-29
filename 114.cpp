/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/

int detectloop(Node *list)
{
    int f=0;
    struct Node *slow=list, *fast=list;
    while(slow && fast && fast->next)
    {
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast)
        {
            f=1;
            break;
        }
    }
    if(f==0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
   // your code here
}