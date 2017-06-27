/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */

/* Should return data of middle node. If linked list is empty, then  -1*/
int getMiddle(Node *head)
{
    struct Node* temp=head;
    int c=1;
    int mid;
    while(temp)
    {
        temp=temp->next;
        c++;
    }
    c=c-1;
    if(c%2==0)
    {
        mid=c/2;
        mid=mid+1;
    }
    else
    {
        mid=c/2;
        mid=mid+1;
    }
    struct Node* temp2=head;
    int co=1;
    while(head)
    {
        if(co==mid)
        {
            return head->data;
        }
        else
        {
            head=head->next;
            co++;
        }
    }
   // Your code here
}
