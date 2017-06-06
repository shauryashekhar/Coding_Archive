#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long int sum=0;
    int a[100];
    int num;
    cin>>num;
    for(int i=0;i<num;i++)
        {
        cin>>a[i];
    }
    for(int j=0;j<num;j++)
        {
        sum=sum+a[j];
    }
    cout<<sum;
    return 0;
}