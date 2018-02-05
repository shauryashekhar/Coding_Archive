#include <iostream>
#include <limits.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n1, n2;
        cin>>n1;
        int a[n1];
        int ma=INT_MIN;
        for(int i=0;i<n1;i++)
        {
            cin>>a[i];
            if(a[i]>ma)
            {
                ma=a[i];
            }
        }
        cin>>n2;
        int b[n2];
        int mi=INT_MAX;
        for(int j=0;j<n2;j++)
        {
            cin>>b[j];
            if(b[j]<mi)
            {
                mi=b[j];
            }
        }
        cout<<ma*mi<<endl;
    }
	//code
	return 0;
}