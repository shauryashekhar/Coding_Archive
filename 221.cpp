#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int t;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int first=1;
        int second=2;
        unsigned long long int sum=2;
        d:
        int third=first+second;
        if(third<n)
        {
            if(third%2==0)
            {
                //cout<<third<<" ";
                sum=sum+third;
            }
            first=second;
            second=third;
            goto d;
        }    
        cout<<sum<<endl;
    }
    return 0;
}
