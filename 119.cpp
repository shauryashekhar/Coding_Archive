#include <iostream>
#include <math.h>
using namespace std;
int t,n;
int x[1000];
char dir[1000];
int xc=0;
int yc=0;

void newposition(int dis,char c)
{
    if(c=='N')
    {
        xc=xc+dis;
    }
    if(c=='S')
    {
        xc=xc-dis;
    }
    if(c=='E')
    {
        yc=yc+dis;
    }
    if(c=='W')
    {
        yc=yc-dis;
    }
}

float calc(int a, int b)
{
    float ts1,ts2,tst,tsf;
    ts1=a*a;
    ts2=b*b;
    tst=ts1+ts2;
    tsf=sqrt(tst);
    return tsf;
}
int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>x[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>dir[j];
        }
        xc=0;
        yc=0;
        for(int k=0;k<n;k++)
        {
            newposition(x[k],dir[k]);
        }
        float sum=0;
        float final;
        final=calc(xc,yc);
        sum=sum+final;
        for(int b=0;b<n;b++)
        {
            sum=sum+x[b];
        }
        cout<<ceil(sum)<<endl;
    }
	//code
	return 0;
}