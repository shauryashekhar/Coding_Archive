#include <iostream>
using namespace std;
int t;

long long reversed(long long c)
{
    long long num=0;
    x:
    int rem=c%10;
    num=num*10;
    num=num+rem;
    c=c/10;
    if(c!=0)
    {
        goto x;
    }
    return num;
}

int main() {
    cin>>t;
    while(t--)
    {
        long long a;
        cin>>a;
        long long sqa=a*a;
        //cout<<sqa<<endl;
        long long b=reversed(a);
        //cout<<b<<endl;
        long long sqb=b*b;
        //cout<<sqb<<endl;
        long long sqbr=reversed(sqb);
        //cout<<sqbr<<endl;
        if(sqbr==sqa)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	//code
	return 0;
}