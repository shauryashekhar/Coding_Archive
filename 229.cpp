#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
vector <int> x;
vector <int> y;
vector <int> z;
vector <int> h;
vector <int> c;
vector <int> l;
vector <int> jmax;
vector <int> f;
vector <int> g;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int t1;
        cin>>t1;
        x.push_back(t1);
    }
    for(int j=0;j<n;j++)
    {
        int t2;
        cin>>t2;
        y.push_back(t2);
    }
    for(int k=0;k<n;k++)
    {
        int t3;
        cin>>t3;
        z.push_back(t3);
    }
    int temph,tempc,templ;
    h.push_back(x[0]);
    c.push_back(y[0]);
    l.push_back(z[0]);
    int currlevel=1;
    repeat:
    int ma=INT_MIN;
    int finalj=0;
    if(currlevel==1)
    {
        goto startpos;
    }
    temph=x[currlevel-1]^g[currlevel-2];
    h.push_back(temph);
    tempc=y[currlevel-1]^g[currlevel-2];
    c.push_back(tempc);
    templ=z[currlevel-1]^g[currlevel-2];
    l.push_back(templ);
    startpos:
    for(int j=0;j<=currlevel-l[currlevel-1];j++)
    {
        int temp=(h[j]*c[currlevel-1])-(c[j]*h[currlevel-1]);
        if(temp>ma)
        {
            ma=temp;
            finalj=j;
        }
    }
    jmax.push_back(finalj+1);
    f.push_back(ma);
    int tot=0;
    for(int z=0;z<currlevel;z++)
    {
        tot=tot+f[z];
    }
    g.push_back(tot);
    currlevel=currlevel+1;
    if(currlevel<=n)
    {
        goto repeat;
    }
    /*for(int d=0;d<n;d++)
    {
        cout<<d+1<<" "<<h[d]<<" "<<c[d]<<" "<<l[d]<<" "<<jmax[d]<<" "<<f[d]<<" "<<g[d]<<endl;
    }*/
    cout<<g[n-1]<<endl;
    return 0;
}
