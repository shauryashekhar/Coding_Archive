#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t,n,k;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>t;
    for(int i=0;i<t;i++)
        {
        cin>>n;
        cin>>k;
        int *ar=new int[n]();
        for(int j=0;j<n;j++)
            {
            cin>>ar[j];
            }
        int c=0;
        for(int l=0;l<n;l++)
            {
            if(ar[l]==0 || ar[l]<0)
                {
                c++;
                }
            }
        if(c>k || c==k)
            {
            cout<<"NO"<<endl;
            }
        else
            {
            cout<<"YES"<<endl;
            }
        }
    return 0;
}