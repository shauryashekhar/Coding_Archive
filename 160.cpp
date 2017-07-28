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
        int including=a[0];
        int excluding=0;
        int excluding_new;
        for(int j=1;j<n;j++)
        {
            excluding_new = (including > excluding)? including: excluding;
            including = excluding + a[j];
            excluding = excluding_new;
        }
        if(including>excluding)
        {
            cout<<including<<endl;
        }
        else
        {
            cout<<excluding<<endl;
        }
    }
	//code
	return 0;
}