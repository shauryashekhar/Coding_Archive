#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int c=0;
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    int *ar=new int[n];
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
        }
    for(int j=0;j<n;j++)
        {
        if(ar[j]!=-1)
            {
            for(int k=j+1;k<n;k++)
                {
                if(ar[j]==ar[k])
                    {
                    ar[j]=-1;
                    ar[k]=-1;
                    c++;
                    break;
                    }
                }
            }
        else
            {
            continue;
            }
        }
    cout<<c;
    return 0;
}
