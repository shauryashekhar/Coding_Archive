/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/

/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    struct Node* back=head;
    int c=1;
    while(back)
    {
        back=back->next;
        c++;
    }
    c=c-1;
    int mid=c/2;
    mid=mid+1;
    int f=1;
    for(int i=1;i<mid;i++)
    {
        struct Node* front=head;
        for(int j=1;j<i;j++)
        {
            front=front->next;
        }
        struct Node* backc=head;
        for(int k=1;k<=c-i;k++)
        {
            backc=backc->next;
        }
        if(front->data!=backc->data)
        {
            f=0;
            break;
        }
    }
    if(f==0)
    {
        return false;
    }
    else
    {
        return true;
    }
    //Your code here
}