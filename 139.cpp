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
        for(int j=n-1;j>0;j--)
        {
            int c=1;
            for(int k=j-1;k>=0;k--)
            {
                if(a[k]<=a[j])
                {
                    c++;
                }
                else
                {
                    break;
                }
            }
            a[j]=c;
        }
        a[0]=1;
        for(int m=0;m<n;m++)
        {
            cout<<a[m]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}