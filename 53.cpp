#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,max,smax,pos;
        pos=0;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        max=ar[0];
        for(int k=1;k<n;k++)
        {
            if(ar[k]>max)
            {
                pos=k;
            }
        }
        ar[pos]=0;
        smax=ar[0];
        for(int l=1;l<n;l++)
        {
            if(ar[l]>smax)
            {
                smax=ar[l];
            }
        }
        cout<<smax<<endl;
    }
	//code
	return 0;
}