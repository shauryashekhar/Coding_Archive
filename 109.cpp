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
        int maxi=a[0];
        for(int j=1;j<n;j++)
        {
            if(a[j]>maxi)
            {
                maxi=a[j];
            }
        }
        int mini=a[0];
        for(int k=0;k<n;k++)
        {
            if(a[k]<mini)
            {
                mini=a[k];
            }
        }
        cout<<mini<<" "<<maxi<<endl;
    }
	//code
	return 0;
}