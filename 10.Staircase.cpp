#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main(){
    int n;
    cin >> n;
    int i=0;
    int ctr=0;
    int x=n-1;
    b:
    for(int j=x;j>0;j--)
        {
        cout<<" ";
    }
    ctr++;
    for(int i=0;i<ctr;i++)
        {
        cout<<"#";
    }
    cout<<endl;
    x--;
    if(x>=0)
        {
            goto b;
        }
    return 0;
}