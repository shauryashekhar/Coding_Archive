#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int total;
    cin>>total;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    unsigned long long int table[total+1]={0};
    table[0]=1;
    for(int j=0;j<n;j++)
    {
        for(int k=a[j];k<=total;k++)
        {
            table[k]=table[k]+table[k-a[j]];
        }
    }
    cout<<table[total]<<endl;
    return 0;
}
