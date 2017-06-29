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
        int c=1;
        for(int j=n-1;j>=1;j--)
        {
            int f=0;
            for(int k=j-1;k>=0;k--)
            {
                if(a[k]>=a[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                continue;
            }
            else
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}