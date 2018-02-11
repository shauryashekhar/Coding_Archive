#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t;
char stack[1000];
unsigned long long int top=-1;

void push(char x)
{
    top++;
    stack[top]=x;
}

int issame(char y)
{
    if(stack[top]==y)
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
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        unsigned long long int len=s.size();
        unsigned long long int c=0;
        for(unsigned long long int i=0;i<len;i++)
        {
            if(top==-1)
            {
                push(s[i]);
            }
            else
            {
                if(issame(s[i]))
                {
                    c++;
                }
                else
                {
                    push(s[i]);
                }
            }
        }
        cout<<c<<endl;
        top=-1;
    }
    return 0;
}
