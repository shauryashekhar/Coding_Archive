#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=n/2;
        c=c+1;
        int co,f;
        f=0;
        for(int j=0;j<n;j++)
        {
            co=1;
            for(int k=0;k<n;k++)
            {
                if(a[j]==a[k] && j!=k)
                {
                    co++;
                }
            }
            if(co==c)
            {
                cout<<a[j]<<endl;
                f=1;
            }
            if(f==1)
            {
                break;
            }
        }
        if(f==0)
        {
            cout<<"NO Majority Element"<<endl;
        }
    }
	//code
	return 0;
}