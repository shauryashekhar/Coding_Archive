#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,d,i,j,k,sum;
int ar[1000];
int fcount=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n>>d;
    for(i=0;i<n;i++)
        {
        cin>>ar[i];
        }
    for(j=0;j<n;j++)
        {
        for(k=j+1;k<n;k++)
            {
            sum=ar[j]+ar[k];
            if(sum%d==0)
                {
                fcount++;
                }
            }
        }
    cout<<fcount;
    return 0;
}
