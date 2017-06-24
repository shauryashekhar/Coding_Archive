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
        int c;
        for(int y=1;y<n;y++)
        {
            for(int x=0;x<(n-y);x++)
            if(a[x]>a[x+1])
            {
                int temp=a[x];
                a[x]=a[x+1];
                a[x+1]=temp;
            }
        }
        for(int j=0;j<n;j++)
        {
            c=0;
            for(int k=0;k<n;k++)
            {
                if(a[k]>a[j] && j!=k)
                {
                    c++;
                }
            }
            if(c>=2)
            {
                cout<<a[j]<<" ";
            }
        }
        cout<<endl;
    }
	//code
	return 0;
}