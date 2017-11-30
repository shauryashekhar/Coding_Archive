#include <iostream>
#include <string>
using namespace std;
char stack[1000];
int top=-1;
string str;

void push(char c)
{
    top++;
    stack[top]=c;
}

void popuntil()
{
    while(stack[top]!='(')
    {
        cout<<stack[top];
        top--;
    }
    top--;
}

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        cin>>str;
        int len=str.size();
        for(int i=0;i<len;i++)
        {
            if(isalpha(str[i]))
            {
                cout<<str[i];
            }
            else if(str[i]==')')
            {
                popuntil();
            }
            else
            {
                push(str[i]);
            }
        }
        cout<<endl;
    }
	return 0;
}