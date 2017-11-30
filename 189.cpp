#include <iostream>
#include <string.h>
using namespace std;
int t;
char stack[10000];
int top=-1;

void push(char x)
{
    top++;
    stack[top]=x;
}

char pop()
{
    char temp=stack[top];
    top--;
    return temp;
}

int main() {
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int f=0;
        for(int i=0;i<len;i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                push(s[i]);
                //cout<<s[i]<<" pushed."<<endl;
            }
            else if(s[i]=='}' || s[i]==']' || s[i]==')')
            {
                char t=pop();
                //cout<<t<<" "<<s[i]<<endl;
                if(t=='(' && s[i]==')' || t=='{' && s[i]=='}' || t=='[' && s[i]==']')
                {
                    continue;
                }
                else
                {
                    //cout<<t<<" "<<s[i]<<endl;
                    f=1;
                    goto z;
                }
            }
        }
        z:
        if(f==0 && top==-1)
        {
            cout<<"balanced";
        }
        else
        {
            cout<<"not balanced";
        }
        cout<<endl;
        top=-1;
    }
	//code
	return 0;
}