#include <iostream>
#include <math.h>
using namespace std;
int t;

int stack[10000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

void display()
{
    for(int i=top;i>=0;i--)
    {
        cout<<stack[i];
    }
    cout<<endl;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        d:
        int temp=n%2;
        push(temp);
        n=n/2;
        if(n!=0)
        {
            goto d;
        }
        for(int j=0;j<=top;j=j+2)
        {
            stack[j]=1;
        }
        int sum=0;
        for(int k=top;k>=0;k--)
        {
            int mul=pow(2,k);
            int res=mul*stack[k];
            sum=sum+res;
        }
        cout<<sum<<endl;
        top=-1;
    }
	//code
	return 0;
}