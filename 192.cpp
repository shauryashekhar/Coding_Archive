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
    cout<<"Stack is ";
    for(int s=0;s<=top;s++)
    {
        cout<<stack[s]<<" ";
    }
    cout<<endl;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        a:
        int rem=n%2;
        push(rem);
        n=n/2;
        while(n!=0)
        {
            goto a;
        }
        //display();
        for(int j=0;j<=top;j=j+2)
        {
            stack[j]=0;
        }
        //display();
        int number=0;
        for(int l=0,pos=0;l<=top;l++,pos++)
        {
            if(stack[l]==1)
            {
                int power=pow(2,pos);
                number=number+power;
            }
        }
        cout<<number<<endl;
        top=-1;
    }
	//code
	return 0;
}