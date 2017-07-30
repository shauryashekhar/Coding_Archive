#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int m,n;
        cin>>m;
        cin>>n;
        int a[m][n];
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int max=0;
        int ans=0;
        for(int k=0;k<m;k++)
        {
            int count=0;
            for(int l=0;l<n;l++)
            {
                if(a[k][l]==1)
                {
                    count++;
                }
            }
            if(count>max)
            {
                max=count;
                ans=k;
            }
        }
        cout<<ans<<endl;
    }
	//code
	return 0;
}