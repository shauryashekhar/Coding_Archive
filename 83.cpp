#include <iostream>
using namespace std;
int t;
int sum=0;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int m=n-1;
        int a[m];
        for(int i=0;i<m;i++)
        {
            cin>>a[i];
        }
        sum=0;
        for(int j=1;j<=n;j++)
        {
            sum=sum+j;
        }
        for(int k=0;k<m;k++)
        {
            sum=sum-a[k];
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}