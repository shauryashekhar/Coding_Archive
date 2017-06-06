#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n,k,charged;
int ar[1000000];
int actual=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>n>>k;
    for(int i=0;i<n;i++)
        {
        cin>>ar[i];
        }    
    cin>>charged;
    for(int j=0;j<n;j++)
        {
        if(j!=k)
            {
            actual=actual+ar[j];
            }
        }
    actual=actual/2;
    if(actual==charged)
        {
        cout<<"Bon Appetit";
        }
    else
        {
        cout<<charged-actual;
        }
    return 0;
}