#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t,x,y,z;
int d1,d2;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin>>t;
    while(t--)
        {
        x=y=z=0;
        d1=d2=0;
        cin>>x;
        cin>>y;
        cin>>z;
        a:
        if(z>x)
            {
            x++;
            d1++;
            if(z!=x)
                {
                goto a;
                }
            }
        else
            {
            x--;
            d1++;
            if(z!=x)
                {
                goto a;
                }
            }
        b:
        if(z>y)
            {
            y++;
            d2++;
            if(z!=y)
                {
                goto b;
                }
            }
        else
            {
            y--;
            d2++;
            if(z!=y)
                {
                goto b;
                }
            }
        if(d1>d2)
            {
            cout<<"Cat B"<<endl;
            }
        else if(d2>d1)
            {
            cout<<"Cat A"<<endl;
            }
        else
            {
            cout<<"Mouse C"<<endl;
            }        
        }
    return 0;
}
