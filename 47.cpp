#include <iostream>
using namespace std;
int t,n;

int factorial(int x)
{
    int prod=1;
    for(int i=1;i<=x;i++)
    {
        prod=prod*i;
    }
    return prod;
}

int main() {
    cin>>t;
    while(t--)
    {   
        int finaladd=0;
        cin>>n;
        int c;
        c=n;
        x:
        int rem=n%10;
        int add=factorial(rem);
        finaladd=finaladd+add;
        n=n/10;
        if(n>0)
        {
            goto x;
        }
        if(finaladd==c)
        {
            cout<<"Perfect"<<endl;
        }
        else
        {
            cout<<"Not Perfect"<<endl;
        }
    }
	//code
	return 0;
}