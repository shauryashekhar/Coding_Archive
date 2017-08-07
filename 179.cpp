#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        cin>>n;
        int a[m],b[n];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        for(int k=0;k<m;k++)
        {
            int f=0;
            for(int l=0;l<n;l++)
            {
                if(a[k]==b[l])
                {
                    f=1;
                    b[l]==-1;
                }
            }
            if(f==0)
            {
                cout<<a[k]<<" ";
            }
        }
        cout<<endl;
    }
	//code
	return 0;
}