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
        int sum=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(abs(a[j]-a[k])>1)
                {
                    int temp=a[k]-a[j];
                    sum=sum+temp;
                }
                else if(abs(a[j]-a[k])<=1)
                {
                    sum=sum+0;
                }
            }
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}