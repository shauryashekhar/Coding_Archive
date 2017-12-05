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
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        int final=100000;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                int temp=abs(a[j]-a[k]);
                if(final>temp)
                {
                    final=temp;
                }
            }
        }
        cout<<final<<endl;
    }
	//code
	return 0;
}