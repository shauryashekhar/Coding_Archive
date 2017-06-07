#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
signed int s,t;
signed int a,b;
signed int na,nb;
signed int ac=0;
signed int bc=0;
signed int da=0;
signed int posa=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>s;
    cin>>t;
    cin>>a;
    cin>>b;
    cin>>na;
    cin>>nb;
    signed int *apple = new int[na];   //int *array = new int[length];
    signed int *orange = new int[nb];
    for(int x=0;x<na;x++)
        {
        cin>>apple[x];
        }
    for(int y=0;y<na;y++)
        {
        cin>>orange[y];
        }
    for(int i=0;i<na;i++)
        {
        da=apple[i];
        posa=a+da;
        if(posa>=s && posa<=t)
            {
            ac++;
            }
        }
    for(int j=0;j<nb;j++)
        {
        signed int driftb=0;
        signed int posb=0;
        driftb=orange[j];
        posb=b+driftb;
        if(posb>=s && posb<=t)
            {
            bc++;
            }
        }
    cout<<ac<<endl;
    cout<<bc<<endl;
    return 0;
}
