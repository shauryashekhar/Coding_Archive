#include <iostream>
using namespace std;
int t;

int istrue(int x)
{
    if(x<10)
    {
        return 1;
    }
    else
    {
        int last=x%10;
        x=x/10;
        a:
        int first=x%10;
        x=x/10;
        if(x!=0)
        {
            goto a;
        }
        if(first==last)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
}

int main() {
    cin>>t;
    while(t--)
    {
        int l,r;
        cin>>l;
        cin>>r;
        int c=0;
        for(int i=l;i<=r;i++)
        {
            if(istrue(i))
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}