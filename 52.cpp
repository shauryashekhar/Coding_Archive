#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int num;
        cin>>num;
        for(int j=0;j<n;j++)
        {
            if(ar[j]==num)
            {
                cout<<j<<" ";
                break;
            }
        }
        for(int k=n-1;k>0;k--)
        {
            if(ar[k]==num)
            {
                cout<<k<<endl;
                break;
            }
        }
    }
	//code
	return 0;
}