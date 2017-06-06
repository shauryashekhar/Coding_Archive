#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[3], b[3], r[2];
    for(int i=0;i<3;i++)
        {
        cin>>a[i];
    }
    for(int j=0;j<3;j++)
        {
        cin>>b[j];
    }
    for(int k=0;k<3;k++)
        {
        if(a[k]>b[k])
            {
            r[0]++;
        }
        else if(b[k]>a[k])
            {
            r[1]++;
        }
        else 
            {
            continue;
        }
    }
    cout<<r[0]<<" "<<r[1];
    return 0;
}