#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        if(k==0)
        {
            goto z;
        }
        int mak,mik;
        mak=k;
        mik=k;
        for(int j=1;j<=mak;j++)
        {
            int max=a[0];
            int posma=0;
            for(int l=1;l<n;l++)
            {
                if(a[l]>max)
                {
                    max=a[l];
                    posma=l;
                }
            }
            a[posma]=0;
        }
        for(int u=1;u<=mik;u++)
        {
            int min=255;
            int posmi=0;
            for(int m=0;m<n;m++)
            {
                if(a[m]<min && a[m]!=0)
                {
                    min=a[m];
                    posmi=m;
                }
            }
            a[posmi]=0;
        }
        z:
        double sum=0;
        double result;
        k=2*k;
        int no=n-k;
        for(int h=0;h<n;h++)
        {
            sum=sum+a[h];
        }
        result=sum/no;
        cout<<result<<endl;
    }
    
	// your code goes here
	return 0;
}
