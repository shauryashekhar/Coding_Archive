#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned int arr[5];
int i1,i2,i3,i4;
unsigned int sum[5];
unsigned int mini, maxi;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i=0;i<5;i++)
        {
        cin>>arr[i];
        }
    for(int j=0;j<5;j++)
        {
        i1=j+1;
        i2=j+2;
        i3=j+3;
        i4=j+4;
        if(i1>4)
            {
            i1=i1%5;
            }
        if(i2>4)
            {
            i2=i2%5;
            }
        if(i3>4)
            {
            i3=i3%5;
            }
        if(i4>4)
            {
            i4=i4%5;
            }
        sum[j]=arr[i1]+arr[i2]+arr[i3]+arr[i4];
        }
    mini=sum[0];
    for(int k=1;k<5;k++)
        {
        if(mini>sum[k])
            {
            mini=sum[k];
            }
        }
    maxi=sum[0];
    for(int k=1;k<5;k++)
        {
        if(maxi<sum[k])
            {
            maxi=sum[k];
            }
        }
    cout<<mini<<" "<<maxi;
    return 0;
}