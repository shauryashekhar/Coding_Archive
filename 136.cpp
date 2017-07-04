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

int main() {
    cin>>t;
    while(t--)
    {
        long long int n,k;
        cin>>n;
        cin>>k;
        a:
        int rem=n%2;
        push(rem);
        n=n/2;
        if(n!=0)
        {
            goto a;
        }
        int res=stack[k];
        if(res==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
        top=-1;
    }
	//code
	return 0;
}