#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int s,n,m;
    cin>>s;
    cin>>n;
    cin>>m;
    int a[n];
    int b[m];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<m;j++)
    {
        cin>>b[j];
    }
    int f=0;
    int max=0;
    for(int k=0;k<n;k++)
    {
        for(int l=0;l<m;l++)
        {
            int temp=a[k]+b[l];
            if(temp<=s && temp>max)
            {
                max=temp;
                f=1;
            }
        }
    }
    if(f==0)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<max<<endl;
    }
    return 0;
}
