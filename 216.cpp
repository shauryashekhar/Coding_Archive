#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    int num;
    cin>>num;
    int a[num];
    for(int i=0;i<num;i++)
    {
        int temp;
        cin>>temp;
        if(temp==n)
        {
            cout<<i;
        }
    }
    return 0;
}
