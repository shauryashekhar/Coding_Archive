#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        int sum;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    sum=a[j]+a[k]+a[l];
                    if(sum==x)
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