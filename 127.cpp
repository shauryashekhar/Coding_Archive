#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,d;
        cin>>n;
        cin>>d;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int temp=abs(a[j]-a[k]);
                if(temp==d)
                {
                    f=1;
                    break;
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
            cout<<"-1"<<endl;
        }
    }
	//code
	return 0;
}