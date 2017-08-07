#include <iostream>
using namespace std;
int t;

int noz(int x)
{
    int c=0;
    d:
    int rem=x%10;
    if(rem==0)
    {
        c++;
    }
    x=x/10;
    if(x!=0)
    {
        goto d;
    }
    return c;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int f=0;
        int m=0;
        int number=-1;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            int t=noz(num);
            if(t>m || t!=0 && t==m && num>number)
            {
                f=1;
                m=t;
                number=num;
            }
        }
        if(f==1)
        {
            cout<<number<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
	//code
	return 0;
}