#include <iostream>
using namespace std;
int t;
int n;

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        int val=n-1;
        int ar[val];
        for(int i=0;i<val;i++)
        {
            cin>>ar[i];
        }
        for(int j=n;j>0;j--)
        {
            int flag=0;
            for(int k=0;k<n;k++)
            {
                if(ar[k]==j)
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {
                cout<<j<<endl;
            }
        }
    }
	//code
	return 0;
}