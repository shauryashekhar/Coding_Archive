#include <iostream>
using namespace std;

int max(int x, int y)
{
    if(x>y)
    {
        return x;
    }
    else
    {
        return y;
    }
}

int min(int q, int w)
{
    if(q<w)
    {
        return q;
    }
    else
    {
        return w;
    }
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
    int a,b,n;
    cin>>a;
    cin>>b;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        if(i%2==1)
        {
            a=a*2;
        }
        else
        {
            b=b*2;
        }
    }
    int up,down;
    up=max(a,b);
    down=min(a,b);
    int result=up/down;
    cout<<result<<endl;
    }
	//code
	return 0;
}