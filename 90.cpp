#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,x,y,sum1,sum2;
        cin>>x>>y;
        cin>>n;
        int a[n][2];
        for(int i=0;i<n;i++)
        {
            cin>>a[i][0];
            cin>>a[i][1];
        }
        for(int k=0;k<n;k++)
        {
            x=x-a[k][0];
            y=y-a[k][1];
        }
        cout<<x<<" "<<y<<endl;
    }
	//code
	return 0;
}