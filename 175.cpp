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
    int b[100]={0};
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[a[i]]++;
    }
    int max=0;
    for(int k=0;k<100;k++)
    {
        if(b[k]>max)
        {
            max=b[k];
        }
    }
    cout<<n-max<<endl;
    return 0;
}
