#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k;
int e=100;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    cin>>k;
    int pos=0;
    int *ar=new int[n];
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
        }
    r:
    pos=pos+k;
    if(ar[pos]==1)
        {
        e=e-3;
        }
    else
        {
        e=e-1;
        }
    if(pos%n==0)
        {
        goto x;
        }
    else
        {
        goto r;
        }
    x:
    cout<<e;
    return 0;
}
