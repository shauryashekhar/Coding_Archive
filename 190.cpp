#include <iostream>
#include <algorithm>
using namespace std;
int t;
int stack[1000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int check(int y)
{
    int pos=-1;
    for(int u=0;u<=top;u++)
    {
        if(stack[u]<=y)
        {
            pos=u;
            break;
        }
    }
    return pos;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int d[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>d[j];
        }
        sort(a,a+n);
        sort(d,d+n);
        push(d[0]);
        for(int k=1;k<n;k++)
        {
            int c=check(a[k]);
            if(c==-1)
            {
                push(d[k]);
            }
            else
            {
                stack[c]=d[k];
            }
        }
        cout<<top+1<<endl;
        top=-1;
    }
	//code
	return 0;
}