#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int p1, v1, p2, v2;
int pos1, pos2;
int ctr=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>p1;
    cin>>v1;
    cin>>p2;
    cin>>v2;
    if(p2>p1 && v2>v1)
        {
        cout<<"NO";
    }
    else
        {
        pos1=p1+v1;
        pos2=p2+v2;
        goto y;
        x:
        pos1=pos1+v1;
        pos2=pos2+v2;
        y:
        ctr=ctr+1;
        if(pos1==pos2)
            {
            cout<<"YES";
            }
        else if(ctr<5000)
            {
            goto x;
            }
        else
            {
            cout<<"NO";
            }
    }
    return 0;
}