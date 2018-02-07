#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;
    while(t--)
    {
        unsigned long long int sum=0;
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            if((i%3==0) || (i%5==0))
            {
                sum=sum+i;
            }
        }
        cout<<sum<<endl;
    }
    return 0;
}
