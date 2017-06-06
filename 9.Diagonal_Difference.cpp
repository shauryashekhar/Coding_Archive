#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int a[1000][1000];
int num;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin>>num;
    for(int i=0;i<num;i++)
        {
        for(int j=0;j<num;j++)
            {
            cin>>a[i][j];
            }
        }
    int sum1=0;
    for(int k=0;k<num;k++)
        {
        for(int m=0;m<num;m++)
            {
            if(k==m)
                {
                sum1=sum1+a[k][m];
            }
        }
    }
    int sum2=0;
    int x=0;
    int z=num-1;
    b:
    sum2=sum2+a[x][z];
    x++;
    z--;
    if(z>0)
        {
        goto b;
    }
    else
        {
        sum2=sum2+a[x][z];
    }
    int result;
    result=sum1-sum2;
    if(result>0)
        {
        cout<<result;
    }
    else
        {
        int diff;
        diff=(-2)*result;
        result=result+diff;
        cout<<result;
    }
    return 0;
}
