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
    for(int j=1;j<=n;j++)
    {
        int y,z;
        for(z=0;z<n;z++)
        {
            if(a[z]==j)
            {
                break;
            }
        }
        z=z+1;
        for(y=0;y<n;y++)
        {
            if(a[y]==z)
            {
                break;
            }
        }
        cout<<y+1<<endl;
    }
    return 0;
}
