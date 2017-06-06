#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[100];
int n;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>n;
    for(int j=0;j<n;j++)
        {
        cin>>arr[j];
        }
    for(int k=0;k<n;k++)
        {
        int h=1;
        int temp=arr[k];
        int ctr=0;
        x:
        if(temp>ctr)
            {
            h=h*2;
            ctr=ctr+1;
            }
        if(temp>ctr)
            {
            h=h+1;
            ctr=ctr+1;
            }
        if(temp==ctr)
            {
            cout<<h<<endl;
            }
        else
            {
            goto x;
            }
        }
    return 0;
}