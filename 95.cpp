/* Link list Node 
struct Node
{
    int data;
    Node* next;
};*/

/*You are required to complete below method*/
Node* deleteNode(Node *head,int x)
{
    struct Node* temp1=head;
int i;
if(x == 1)
{
head=temp1->next;

return head;
}
for(i=0;i<x-2;i++) {temp1=temp1->next;

}
struct Node* temp2=temp1->next;
temp1->next=temp2->next;
return head;
    //Your code here
}
