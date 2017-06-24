#include <iostream>
using namespace std;

int t,ma,mi,nma,nmi;

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
        if(n<2)
        {
            cout<<"0"<<endl;
        }
        else
        {
        ma=a[0];
        for(int j=0;j<n;j++)
        {
            if(a[j]>ma)
            {
                ma=a[j];
            }
        }
        nma=0;
        for(int k=0;k<n;k++)
        {
            if(a[k]==ma)
            {
                nma++;
            }
        }
        mi=a[0];
        for(int l=0;l<n;l++)
        {
            if(a[l]<mi)
            {
                mi=a[l];
            }
        }
        nmi=0;
        for(int z=0;z<n;z++)
        {
            if(a[z]==mi)
            {
                nmi++;
            }
        }
        cout<<n-nma-nmi<<endl;
        }
    }
	//code
	return 0;
}