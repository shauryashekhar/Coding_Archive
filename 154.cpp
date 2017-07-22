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
        int f=0;
        for(int j=1;j<n-1;j++)
        {
            int fl=0;
            int fr=0;
            for(int k=0;k<j;k++)
            {
                if(a[k]<=a[j])
                {
                    continue;
                }
                else
                {
                    fl=1;
                    break;
                }
            }
            if(fl==0)
            {
                for(int m=j+1;m<n;m++)
                {
                    if(a[m]>=a[j])
                    {
                        continue;
                    }
                    else
                    {
                        fr=1;
                        break;
                    }
                }
            }
            if(fl==0 && fr==0)
            {
                f=1;
                cout<<a[j]<<endl;
                break;
            }
            else
            {
                continue;
            }
        }
        if(f==0)
        {
            cout<<"-1"<<endl;
        }
    }
	//code
	return 0;
}