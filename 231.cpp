#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int l,r;
    cin>>l;
    cin>>r;
    int ma=INT_MIN;
    for(int i=l;i<=r;i++)
    {
        for(int j=l;j<=r;j++)
        {
            int temp=i^j;
            if(temp>ma)
            {
                ma=temp;
            }
        }
    }
    cout<<ma<<endl;
    return 0;
}
