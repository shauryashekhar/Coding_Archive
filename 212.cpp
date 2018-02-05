#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    cin>>s;
    int c[26]={0};
    int size=s.length();
    for(int i=0;i<size;i++)
    {
        int temp=s[i]-'0';
        temp=temp-49;
        c[temp]++;
    }
    int cflag=0;
    int dflag=0;
    for(int j=0;j<26;j++)
    {
        for(int k=j+1;k<26;k++)
        {
            //if(c[j]>0 && c[k]>0)
            {
                if(c[j]==c[k])
                {
                    continue;
                }
                else if(c[j]!=c[k] && c[j]-c[k]==1 && cflag==0)
                {
                    cflag=1;
                    continue;
                }
                else if(c[j]!=c[k] && c[j]-c[k]==1 && cflag==1)
                {
                    cflag=2;
                    goto z;
                }
                else if(c[j]!=c[k] && abs(c[j]-c[k])>1)
                {
                    //cout<<j<<" "<<k<<endl;
                    dflag=1;
                    goto z;
                }
            }
        }
    }
    z:
    if(dflag==1 || cflag==2)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }
    return 0;
}
