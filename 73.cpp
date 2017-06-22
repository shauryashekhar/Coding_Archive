#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        cin>>num;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==num)
            {
                flag=1;
                cout<<j<<" ";
                break;
            }
        }
        if(flag==0)
        {
            cout<<"-1";
            goto y;
        }
        for(int k=n-1;k>=0;k--)
        {
            if(a[k]==num)
            {
                cout<<k<<" ";
                break;
            }
        }
        y:
        cout<<endl;
    }
	//code
	return 0;
}