#include <iostream>
#include <math.h>
using namespace std;
int t,n,k;
int stack[1000];
int fstack[1000];
int top=-1;

void push(int a)
{
    top++;
    stack[top]=a;
}

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
        x:
        int rem=n%2;
        push(rem);
        n=n/2;
        if(n!=0)
        {
            goto x;
        }
        for(int j=top,k=0;j>=0,k<=top;j--,k++)
        {
            fstack[k]=stack[j];
        }
        for(int l=0;l<=top;l++)
        {
            if(l==k-1 && fstack[l]==1)
            {
                fstack[l]=0;
            }
        }
        int final=0;
        int c=0;
        for(int z=top;z>=0;z--)
        {
            if(fstack[z]==1)
            {
                int temp=pow(2,c);
                final=final+temp;
            }
            c=c+1;
        }
        cout<<final<<endl;
        top=-1;
    }
	//code
	return 0;
}