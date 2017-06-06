#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned int n;
int i,j,t,z,k,m,x;
int freeway[10000];
int ent[10000];
int exi[10000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n>>t;
    for(k=0;k<n;k++)
        {
        cin>>freeway[k];
        }
    for(m=0;m<n;m++)
        {
        cin>>ent[m]>>exi[m];
        }
    for(z=0;z<t;z++)
        {
        int en, ex,min;
        en=ent[z];
        ex=exi[z];
        min=freeway[en];
        for(x=en;x<=ex;x++)
            {
            if(freeway[x]<min)
                {
                min=freeway[x];
                }
            }
        cout<<min<<endl;
        }
    return 0;
}