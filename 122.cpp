#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int f=0;
        int n;
        cin>>n;
        for(int x=2;x<n;x++)
        {
            for(int y=2;y<n;y++)
            {
                if(x!=n && y!=n)
                {
                    int res;
                    res=pow(x,y);
                    if(res==n)
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	//code
	return 0;
}