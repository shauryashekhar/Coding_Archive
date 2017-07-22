#include <iostream>
using namespace std;
int t;
int stack[1000];
int top=-1;

void push(int w, int x, int y, int z)
{
    top++;
    stack[top]=w;
    top++;
    stack[top]=x;
    top++;
    stack[top]=y;
    top++;
    stack[top]=z;
}

int ifpresent(int q, int r, int s, int t)
{
    int f=0;
    for(int u=0;u<=top;u=u+4)
    {
        if(stack[u]==q && stack[u+1]==r && stack[u+2]==s && stack[u+3]==t)
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
        int tb;
        cin>>n;
        cin>>tb;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-j-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    int temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        int flag=0;
        for(int b=0;b<n;b++)
        {
            for(int c=b+1;c<n;c++)
            {
                for(int d=c+1;d<n;d++)
                {
                    for(int e=d+1;e<n;e++)
                    {
                        int sum=a[b]+a[c]+a[d]+a[e];
                        if(sum==tb)
                        {
                            if(ifpresent(a[b],a[c],a[d],a[e]))
                            {
                                continue;
                            }
                            else
                            {
                                flag=1;
                                push(a[b],a[c],a[d],a[e]);   
                                cout<<a[b]<<" "<<a[c]<<" "<<a[d]<<" "<<a[e]<<" $";
                            }
                        }
                    }
                }
            }
        }
        if(flag==0)
        {
            cout<<"-1";
        }
        top=-1;
        cout<<endl;
    }
	//code
	return 0;
}