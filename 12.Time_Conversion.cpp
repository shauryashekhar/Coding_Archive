#include <cmath>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
        char t[10], f[10];
        int x=0;
        int x2=0;
        int zero=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>t;
    if(t[8]=='A')
        {
        x=t[0]-'0';
        x2=t[1]-'0';
        x=x*10;
        x=x+x2;
        if(x==12)
            {
            t[1]=zero+'0';
            t[0]=zero+'0';
            }
        for(int i=0;i<8;i++)
            {
            f[i]=t[i];
            }
        cout<<f;
        }
    else
        {
        x=t[0]-'0';
        x2=t[1]-'0';
        x=x*10;
        x=x+x2;
        if(x==12)
            {
            goto b;
            }
        x=x+12;
        int second;
        second = x%10;
        x=x/10;
        t[1]=second+'0';
        t[0]=x+'0';
        b:
        for(int i=0;i<8;i++)
            {
            f[i]=t[i];
            }
        cout<<f;
        }
    return 0;
}