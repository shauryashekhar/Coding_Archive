#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],ca[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int k1,k2;
        cin>>k1;
        cin>>k2;
        for(int j=0;j<n;j++)
        {
            ca[j]=a[j];
        }
        for(int k=0;k<n-1;k++)
        {
            for(int p=0;p<n-1-k;p++)
            {
                if(ca[p]>ca[p+1])
                {
                    int temp=ca[p];
                    ca[p]=ca[p+1];
                    ca[p+1]=temp;
                }
            }
        }
        int kn1,kn2;
        kn1=ca[k1-1];
        kn2=ca[k2-1];
        int sum=0;
        for(int h=0;h<n;h++)
        {
            if(a[h]>kn1 && a[h]<kn2)
            {
                sum=sum+a[h];
            }
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}