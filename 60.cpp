#include <iostream>
#include <math.h>
using namespace std;
int t;
int stack[100000];
int top=-1;

void push(int a)
{
    top++;
    stack[top]=a;
}

int ifpresent(int a)
{
    int flag;
    flag=0;
    for(int x=0;x<=top;x++)
    {
        if(stack[x]==a)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
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
        int ar[n];
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            num=abs(num);
            ar[i]=num;
        }
        for(int j=0;j<n;j++)
        {
            int niq;
            niq=ar[j];
            if(ifpresent(niq))
            {
                continue;
            }
            else
            {
                push(niq);
            }
        }
        cout<<top+1<<endl;
        top=-1;
    }
	//code
	return 0;
}