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
        for(int j=0;j<n-1;j++)
        {
            int flag=1;
            for(int k=j+1;k<n;k++)
            {
                if(a[j]<=a[k])
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                continue;
            }
            else
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<a[n-1]<<endl;
    }
	//code
	return 0;
}