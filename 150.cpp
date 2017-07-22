#include <iostream>
using namespace std;
int t,n;
int stack[1000];
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
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            int num=i;
            x:
            int rem=num%2;
            push(rem);
            num=num/2;
            if(num!=0)
            {
                goto x;
            }
            for(int j=top;j>=0;j--)
            {
                cout<<stack[j];
            }
            cout<<" ";
            top=-1;
        }
        cout<<endl;
    }
	//code
	return 0;
}