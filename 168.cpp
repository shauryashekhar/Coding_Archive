#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    int a[t];
    for(int i=0;i<t;i++)
    {
        cin>>a[i];
    }
    for(int j=0;j<t;j++)
    {
        int n;
        n=a[j];
        int temp=n;
        int c=0;
        a:
        int rem=temp%10;
        if(rem!=0)
        {
            if(n%rem==0)
            {
                c++;
            }
        }
        temp=temp/10;
        if(temp==0)
        {
            cout<<c<<endl;
        }
        else
        {
            goto a;
        }
        //cout<<c<<endl;
    }
    return 0;
}
