#include <iostream>
using namespace std;
int t;
int stack[1000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int ifpresent(int b)
{
    int f=0;
    for(int j=0;j<=top;j++)
    {
        if(stack[j]==b)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int k=0;k<n;k++)
        {
            int temp=a[k];
            r:
            int rem=temp%10;
            if(!ifpresent(rem))
            {
                push(rem);
            }
            temp=temp/10;
            if(temp>0)
            {
                goto r;
            }
        }
        for(int h=0;h<=top;h++)
        {
            for(int u=0;u<top-h;u++)
            {
                if(stack[u+1]<stack[u])
                {
                    int temp1=stack[u+1];
                    stack[u+1]=stack[u];
                    stack[u]=temp1;
                }
            }
        }
        for(int o=0;o<=top;o++)
        {
            cout<<stack[o]<<" ";
        }
        cout<<endl;
        top=-1;
    }
	//code
	return 0;
}