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
        int left=0;
        int right=n-1;
        while(left<right)
        {
            if(ar[left]==0)
            {
                left=left+1;
            }
            if(ar[right]==1)
            {
                right=right-1;
            }
            if(ar[left]==1 && ar[right]==0)
            {
                ar[left]=0;
                ar[right]=1;
            }
        }
        for(int k=0;k<n;k++)
        {
            cout<<ar[k]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}