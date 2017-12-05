#include <iostream>
#include <math.h>
using namespace std;
int t;
int stack[1000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int compute()
{
    int z=0;
    for(int l=0;l<=top;l++)
    {
        int power=pow(2,l);
        int f=power*stack[l];
        z=z+f;
    }
    return z;
}

void display()
{
    for(int y=0;y<=top;y++)
    {
        cout<<stack[y]<<" ";
    }
    cout<<endl;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int actual=n;
        d:
        int temp=n%2;
        push(temp);
        n=n/2;
        if(n!=0)
        {
            goto d;
        }
        //display();
        int flag=0;
        for(int k=0;k<=top;k++)
        {
            if(stack[k]==0)
            {
                stack[k]=1;
                flag=1;
                break;
            }
        }
        //display();
        if(flag==0)
        {
            cout<<actual<<endl;
        }
        else
        {
            int final=compute();
            cout<<final<<endl;
        }
        top=-1;
    }
	//code
	return 0;
}