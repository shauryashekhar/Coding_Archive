#include <iostream>
using namespace std;
int t;
int n;

int reverse(int a)
{
    int final=0;
    x:
    int rem=a%10;
    final=final*10;
    final=final+rem;
    a=a/10;
    if(a>0)
    {
        goto x;
    }
    return final;
}

int main() {
    cin>>t;
    while(t--)
    {   int rev=0;
        cin>>n;
        int c=n;
        rev=reverse(n);
        if(c==rev)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	//code
	return 0;
}