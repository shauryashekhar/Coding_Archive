#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int ar[10000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
        }
    for(int j=n-1;j>=0;j--)
        {
        cout<<ar[j]<<" ";
        }
    return 0;
}