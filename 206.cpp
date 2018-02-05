#include <iostream>
using namespace std;
int t;
int stack[10000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

void view()
{
    for(int z=top;z>=0;z--)
    {
        cout<<stack[z]<<" ";
    }
    cout<<endl;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n,l,r;
        cin>>n;
        cin>>l;
        cin>>r;
        d:
        int rem=n%2;
        //cout<<rem<<endl;
        push(rem);
        n=n/2;
        while(n!=0)
        {
            goto d;
        }
        //view();
        int c=0;
        //cout<<top<<endl;
        for(int i=l-1;i<=r-1;i++)
        {
            //cout<<i<<" ";
            if(stack[i]==0)
            {
                c++;
            }
        }
        //cout<<endl;
        cout<<c<<endl;
        top=-1;
    }
	//code
	return 0;
}