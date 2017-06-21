#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        int c;
        for(int k=0;k<n;k++)
        {
            c=0;
            for(int x=0;x<n;x++)
            {
                if(b[x]<a[k] || b[x]==a[k])
                {
                    c++;
                }
            }
            if(k==n-1)
            {
                cout<<c;
            }
            else
            {
                cout<<c<<",";
            }
        }
        cout<<endl;
    }
	//code
	return 0;
}