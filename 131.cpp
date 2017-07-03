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
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int min=255;
        int res=abs(a[0]-a[1]);
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(j!=k)
                {
                    res=abs(a[j]-a[k]);
                    if(res<min)
                    {
                        min=res;
                    }
                }
            }
        }
        cout<<min<<endl;
    }
	//code
	return 0;
}