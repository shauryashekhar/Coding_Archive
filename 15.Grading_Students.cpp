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
    for(int i=0;i<n;i++)
        {
        int temp=arr[i];
        int check=temp/5;
        check=check+1;
        check=check*5;
        int diff=check-temp;
        if(temp<38)
            {
            cout<<arr[i]<<endl;
        }
        else if(diff<3)
            {
            cout<<check<<endl;
        }
        else
            {
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}