#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        for(int j=n-1;j>=0;j--)
        {
            int temp=a[j]*j;
            sum=sum+temp;
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}