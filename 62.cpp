#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int c1,c2,c3;
        c1=c2=c3=1;
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int mid;
        mid=n/2;
        if(ar[mid]!=1)
        {
            c1=0;
        }
        int diff;
        diff=ar[0]-ar[1];
        diff=abs(diff);
        if(diff==0)
        {
            c2=0;
        }
        else
        {
        for(int j=1;j<n-1;j++)
        {
            int res;
            res=ar[j]-ar[j+1];
            res=abs(res);
            if(res!=diff)
            {
                c2=0;
                break;
            }
        }
        }
        int flagthird=0;
        int pos1,pos2;
        for(int x=0,y=n-1;x<mid,y>mid;x++,y--)
        {   
            if(ar[x]!=ar[y])
            {
                pos1=x;
                pos2=y;
                c3=0;
                break;
            }
        }
        z:
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