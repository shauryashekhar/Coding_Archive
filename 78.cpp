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
        for(int j=0;j<=n;j++)
        {
            int f=0;
            for(int k=0;k<n;k++)
            {
                if(a[k]==j)
                {
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<j<<" ";
            }
        }
        cout<<endl;
    }
	//code
	return 0;
}