#include <iostream>
#include <string.h>
using namespace std;
int top=-1;
int t;
char stack[10000];

void push(char a)
{
    top++;
    stack[top]=a;
}

int ifpresent(char b)
{   
    int flag=0;
    for(int i=0;i<=top;i++)
    {
        if(stack[i]==b)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len;
        int flag=0;
        char p;
        len=s.size();
        for(int i=0;i<len;i++)
        {
            if(ifpresent(s[i]))
            {
                p=s[i];
                flag=1;
                break;
            }
            else
            {
                push(s[i]);
            }
        }
        if(flag==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<p<<endl;
        }
        top=-1;
    }
	//code
	return 0;
}