#include <iostream>
using namespace std;
int t,n;

int noofone(int a)
{
    int c=0;
    int rem;
    x:
    rem=a%2;
    if(rem==1)
    {
        c++;
    }
    a=a/2;
    if(a>0)
    {
        goto x;
    }
    else
    {
    return c;
    }
}

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        int sum=0;
        for(int i=1;i<=n;i++)
        {
            int temp;
            temp=noofone(i);
            sum=sum+temp;
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}