#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int h[26];
char w[10];
int ctr=0;
int maxi;
int first,firstt,lnum,lval,area;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    for(int i=0;i<26;i++)
        {
        cin>>h[i];    
        }
    cin>>w;
    for(int l=0;l<10;l++)
        {
        if(w[l]!='\0')
            {
            ctr++;
            }
        }
    firstt=w[0]-'0';
    firstt=firstt-49;
    first=h[firstt];
    maxi=first;
    for(int m=1;m<ctr;m++)
        {
        lnum=w[m]-'0';
        lnum=lnum-49;
        lval=h[lnum];
        if(lval>maxi)
            {
            maxi=lval;
            }
        }
    area=maxi*ctr;
    cout<<area;
    return 0;
}