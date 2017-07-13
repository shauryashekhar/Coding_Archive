#include <iostream>
using namespace std;
int t;
int top=-1;
int stack[1000];

void push(int u)
{
    top++;
    stack[top]=u;
}

int ifpresent(int q)
{
    int f=0;
    for(int p=0;p<=top;p++)
    {
        if(stack[p]==q)
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
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int o[n];
        int s[n];
        for(int i=0;i<n;i++)
        {
            cin>>o[i];
            s[i]=o[i];
        }
        int range;
        cin>>range;
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-j-1;k++)
            {
                if(s[k]>s[k+1])
                {
                    int temp=s[k];
                    s[k]=s[k+1];
                    s[k+1]=temp;
                }
            }
        }
        for(int w=0;w<n;w++)
        {
            int num=s[w];
            if(ifpresent(num))
            {
                continue;
            }
            else
            {
                push(num);
            }
        }
        for(int g=0;g<range;g++)
        {
            int val=stack[top-g];
            for(int a=0;a<n;a++)
            {
                if(o[a]==val)
                {
                    cout<<a<<" ";
                }
            }
        }
        cout<<endl;
        top=-1;
    }
	//code
	return 0;
}