#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int j=0;j<k;j++)
        {
            sum=sum+a[j];
        }
        for(int l=0;l<=n-k;l++)
        {
            int temp=0;
            for(int z=0;z<k;z++)
            {
                temp=temp+a[l+z];
            }
            if(temp>sum)
            {
                sum=temp;
            }
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}