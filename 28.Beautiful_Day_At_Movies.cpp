#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
signed int first,last,k;
unsigned int fcount=0;

int reversed(int x)
    {
    signed int res=0;
    int rem;
    z:
    rem=x%10;
    res=res*10;
    res=res+rem;
    x=x/10;
    if(x!=0)
        {
        goto z;
        }
    return res;
    }

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>first;
    cin>>last;
    cin>>k;
    for(int i=first;i<=last;i++)
        {
        signed int rev = reversed(i);
        //signed int check = i-rev;    
        if(abs(i-rev)%k==0)
            {
            fcount++;
            }
        }
    cout<<fcount;
    return 0;
}