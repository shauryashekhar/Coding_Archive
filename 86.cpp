#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,sum;
        cin>>n>>sum;
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
                int temp;
                temp=a[j]+a[k];
                if(temp==sum)
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"Yes"<<endl;
                break;
            }
        }
        if(f==0)
        {
            cout<<"No"<<endl;
        }
    }
	//code
	return 0;
}