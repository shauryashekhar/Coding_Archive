#include <iostream>
using namespace std;
int t;
int stack[1000];
int top=-1;

void push(int a)
{
    top++;
    stack[top]=a;
}

int ifpresent(int x)
{
    int f=0;
    for(int i=0;i<=top;i++)
    {
        if(stack[i]==x)
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
        int n1,n2;
        cin>>n1;
        cin>>n2;
        int a[n1];
        int b[n2];
        for(int j=0;j<n1;j++)
        {
            cin>>a[j];
        }
        for(int k=0;k<n2;k++)
        {
            cin>>b[k];
        }
        for(int q=0;q<n1;q++)
        {
            if(ifpresent(a[q]))
            {
                continue;
            }
            else
            {
                push(a[q]);
            }
        }
        for(int w=0;w<n2;w++)
        {
            if(ifpresent(b[w]))
            {
                continue;
            }
            else
            {
                push(b[w]);
            }
        }
        for(int r=0;r<top;r++)
        {
        for(int t=0;t<(top-r);t++)
            if(stack[t]>stack[t+1])
            {
                int temp=stack[t];
                stack[t]=stack[t+1];
                stack[t+1]=temp;
            }
        }
        for(int z=0;z<=top;z++)
        {
            cout<<stack[z]<<" ";
        }
        cout<<endl;
        top=-1;
    }
	//code
	return 0;
}