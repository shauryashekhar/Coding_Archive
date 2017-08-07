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

int ifpresent(int y)
{
    int f=0;
    for(int q=0;q<=top;q++)
    {
        if(stack[q]==y)
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
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            if(ifpresent(num))
            {
                continue;
            }
            else
            {
                push(num);
            }
        }
        int sum=0;
        for(int u=0;u<=top;u++)
        {
            sum=sum+stack[u];
        }
        cout<<sum<<endl;
        top=-1;
    }
	//code
	return 0;
}