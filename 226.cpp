#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;
int t;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unsigned long long int simplesum=0;
        unsigned long long int csum=0;
        for(int i=1;i<=n;i++)
        {
            simplesum=simplesum+i;
            int temp=pow(i,2);
            csum=csum+temp;
        }
        simplesum=simplesum*simplesum;
        //cout<<simplesum<<" "<<csum<<endl;
        unsigned long long int res=simplesum-csum;
        cout<<res<<endl;
    }
    return 0;
}
