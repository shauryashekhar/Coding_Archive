#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int s[1000];
int n;
int i,j;
int highest,lowest;
int hcount=0;
int lcount=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>s[i];
        }
    highest=s[0];
    for(j=1;j<n;j++)
        {
        if(s[j]>highest)
            {
            hcount++;
            highest=s[j];
            }
        }
    lowest=s[0];
    for(j=1;j<n;j++)
        {
        if(s[j]<lowest)
            {
            lcount++;
            lowest=s[j];
            }
        }
    cout<<hcount<<" "<<lcount;
    return 0;
}