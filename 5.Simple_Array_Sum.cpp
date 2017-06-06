#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a[1000], num;
    cin>>num;
    for(int i=0;i<num;i++)
        {
        cin>>a[i];
    }
    int sum=0;
    for(int j=0;j<num;j++)
        {
        sum=sum+a[j];
    }
    cout<<sum;
    return 0;
}