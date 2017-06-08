#include <iostream>
using namespace std;
int t;
int m;
int n;
int pos=0;
int main() {
	//code
	cin>>t;
	for(int i=0;i<t;i++)
	{   int r=0;
	    cin>>n;
	    int *ar=new int[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>ar[j];
	    }
	    for(int k=0;k<n;k++)
	    {
	        m=ar[0];
	        for(int l=1;l<n;l++)
	        {
	            if(ar[l]>m)
	            {
	                m=ar[l];
                    pos=l;
	            }
	        }
	        ar[pos]=0;
	        r=r*10;
	        r=r+m;
	    }
	    cout<<r<<endl;
	}
	return 0;
}