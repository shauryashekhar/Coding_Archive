#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,p,i,j;
int fl,fr;
int bl,br;
int fcount=0;
int bcount=0;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>n;
    cin>>p;
    fl=0;
    fr=1;
    for(i=1;i<n;i++)
        {
        if(fl==p || fr==p)
            {
            break;
            }
        fl=fl+2;
        fr=fr+2;
        fcount++;
        }
    if(n%2==0)
        {
        bl=n;
        br=n+1;
        }
    else
        {
        bl=n-1;
        br=n;
        }
    for(j=1;j<n;j++)
        {
        if(bl==p || br==p)
            {
            break;
            }
        bl=bl-2;
        br=br-2;
        bcount++;
        }
    if(fcount<bcount)
        {
        cout<<fcount;
        }
    else
        {
        cout<<bcount;
        }
    return 0;
}