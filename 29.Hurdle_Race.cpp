#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,initial;
int diff=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    cin>>initial;
    int *ar = new int[n];
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
        }
    for(int k=0;k<n;k++)
        {
        if(ar[k]>initial)
            {
            int dif = ar[k]-initial;
            if(dif>diff)
                {
                diff=dif;
                }
            }
        }
    cout<<diff;
    return 0;
}
