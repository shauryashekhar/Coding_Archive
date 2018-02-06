#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int ma=0;
    int mi=0;
    for(int j=0;j<n;j++)
    {
        if(a[j]==1)
        {
            ma++;
            mi++;
            a[j]=0;
            if(a[j+1]==1)
            {
                ma++;
                a[j+1]=0;
            }
        }
    }
    cout<<mi<<" "<<ma<<endl;
    return 0;
}
