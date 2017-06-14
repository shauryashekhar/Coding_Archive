#include <iostream>
using namespace std;
int t;
int n;
int mi,smin;
int flag=0;
int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int val=ar[0];
        for(int a=0;a<n;a++)
        {
            if(ar[a]==val)
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
        }
        if(flag==0)
        {
        mi=ar[0];
        for(int j=1;j<n;j++)
        {
            if(ar[j]<mi)
            {
                mi=ar[j];
            }
        }
        smin=1000;
        for(int k=0;k<n;k++)
        {
            if(ar[k]<smin && ar[k]>mi)
            {
                smin=ar[k];
            }
        }
        cout<<mi<<" "<<smin<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
	//code
	return 0;
}