#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n][n];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
        int sum=0;
        for(int m=0;m<n;m++)
        {
            sum=sum+a[m][m];
        }
        int osum=0;
        for(int x=0,y=n-1;x<=n-1,y>=0;x++,y--)
        {
            osum=osum+a[x][y];
        }
        int diff;
        diff=sum-osum;
        diff=abs(diff);
        cout<<diff<<endl;
    }
	//code
	return 0;
}