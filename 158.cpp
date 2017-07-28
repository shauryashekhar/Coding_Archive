#include <iostream>
using namespace std;
int t;
int stack[10000];
int top=-1;

void rearrange()
{
    for(int j=0;j<=top-1;j++)
    {
        for(int k=0;k<=top-j-1;k++)
        {
            if(stack[k]>stack[k+1])
            {
                int temp=stack[k];
                stack[k]=stack[k+1];
                stack[k+1]=temp;
            }
        }
    }
}

void display(int y)
{
    if(top>=y-1)
    {
        cout<<stack[top-y+1]<<" ";
    }
    else
    {
        cout<<"-1 ";
    }
}

void push(int x)
{
    //cout<<x<<" was pushed."<<endl;
    top++;
    stack[top]=x;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>k;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            push(num);
            rearrange();
            display(k);
        }
        cout<<endl;
        top=-1;
    }
	//code
	return 0;
}