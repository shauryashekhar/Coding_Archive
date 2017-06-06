#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int arr[1000];
int num;
long double countp=0;
long double countn=0;
long double countz=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>num;
    for(int i=0;i<num;i++)
        {
        cin>>arr[i];
    }
    for(int j=0;j<num;j++)
        {
        if(arr[j]>0)
            {
            countp++;
        }
        else if(arr[j]==0)
            {
            countz++;
        }
        else
            {
            countn++;
        }
    }
    cout<<countp/num<<endl;
    cout<<countn/num<<endl;
    cout<<countz/num<<endl;
    return 0;
}
