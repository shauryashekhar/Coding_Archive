#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,mi,sum;
        cin>>n;
        mi=0;
        int a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        mi=a[0]+b[1];
        for(int k=0;k<n;k++)
        {
            for(int m=0;m<n;m++)
            {
                sum=a[k]+b[m];
                if(sum<mi && k!=m)
                {
                    mi=sum;
                }
            }
        }
        cout<<mi<<endl;
    }
	//code
	return 0;
}