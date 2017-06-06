#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,m,d,j,k;
int sum=0;
int ar[1000];
int fcount=0;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
        }
    cin>>d>>m;
    for(j=0;j<n;j++)
        {
        sum=ar[j];
        for(k=1;k<m;k++)
            {
            sum=sum+ar[j+k];
            }
        if(sum==d)
            {
            fcount++;
            }
        }
    cout<<fcount;
    return 0;
}