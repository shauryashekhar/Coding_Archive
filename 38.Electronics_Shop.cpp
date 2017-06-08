#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned int s,m,n;
int flag=0;
unsigned int maxi;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>s;
    cin>>n;
    cin>>m;
    unsigned int *kprice=new unsigned int[n];
    unsigned int *uprice=new unsigned int[m];
    for(int i=0;i<n;i++)
        {
        cin>>kprice[i];
        }
    for(int j=0;j<m;j++)
        {
        cin>>uprice[j];
        }
    maxi=kprice[0]+uprice[0];
    for(int k=1;k<n;k++)
        {
        for(int x=1;x<m;x++)
            {
            int total=kprice[k]+uprice[x];
            if(total>maxi && total<s)
                {
                maxi=total;
                flag=1;
                }
            }
        }
    if(flag==0)
        {
        cout<<"-1";
        }
    else
        {
        cout<<maxi;
        }
    return 0;
}
