#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int n;
int stack[10000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int check(int y)
{
    int f=0;
    for(int u=0;u<=top;u++)
    {
        int temp=abs(stack[u]-y);
        {
            if(temp>1)
            {
                f=1;
                break;
            }
        }
    }
    if(f==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>n;
    int *a=new int[n];
    for(int i=0;i<n;i++)
        {
        cin>>a[i];
        }
    for(int q=0;q<n-1;q++)
    {
        for(int w=0;w<n-q-1;w++)
        {
            if(a[w]>a[w+1])
            {
                int temp=a[w];
                a[w]=a[w+1];
                a[w+1]=temp;
            }
        }
    }
    int m=0;
    for(int j=0;j<n;j++)
    {
        push(a[j]);
        for(int k=j+1;k<n;k++)
        {
            int res=check(a[k]);
            if(res)
            {
                push(a[k]);
            }
        }
        m=max(m,top+1);
        top=-1;
    }
    cout<<m<<endl;
    return 0;
}
