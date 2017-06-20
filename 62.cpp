#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int c1,c2,c3;
        c1=c2=c3=0;
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int mid;
        mid=n/2;
        if(ar[mid]==1)
        {
            c1=1;
        }
        else
        {
            c1=0;
        }
        int diff;
        diff=ar[0]-ar[1];
        diff=abs(diff);
        int flagsecond=0;
        for(int j=1;j<n-1;j++)
        {
            int res;
            res=ar[j]-ar[j+1];
            res=abs(res);
            if(res!=diff)
            {
                flagsecond=1;
                break;
            }
        }
        if(flagsecond==0)
        {
            c2=1;
        }
        else
        {
            c2=0;
        }
        int flagthird=0;
        for(int x=0, y=mid+1;x<mid,y<n;x++,y++)
        {
            if(ar[x]!=ar[y])
            {
                flagthird=1;
                break;
            }
        }
        if(flagthird==0)
        {
            c3=1;
        }
        else
        {
            c3=0;
        }
        if(c1==1 && c2==1 && c3==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	//code
	return 0;
}