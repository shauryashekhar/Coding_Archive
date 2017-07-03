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
            int max=0;
            for(int k=j+1;k<n;k++)
            {
                if(a[k]>max)
                {
                    max=a[k];
                }
            }
            a[j]=max;
        }
        a[n-1]=-1;
        for(int l=0;l<n;l++)
        {
            cout<<a[l]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}