#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int t;
int stack[100000];
int top=-1;

void push(int x)
{
    top++;
    stack[top]=x;
}

int main() {
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.length();
        for(int i=0;i<len;i++)
        {
            int num=s[i]-'0';
            push(num);
        }
        sort(stack,stack+len);
        for(int u=top;u>=0;u--)
        {
            cout<<stack[u];
        }
        cout<<endl;
        top=-1;
    }
	//code
	return 0;
}