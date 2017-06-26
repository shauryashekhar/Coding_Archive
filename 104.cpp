#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,z;
        cin>>n;
        cin>>z;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int co=0;
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(a[j]%a[k]==z)
                {
                    co++;
                }
            }
        }
        cout<<co<<endl;
    }
	//code
	return 0;
}