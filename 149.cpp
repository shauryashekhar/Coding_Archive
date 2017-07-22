#include <iostream>
#include <string.h>
using namespace std;
int t;
int stack[1000];
int top=-1;

void push(int a)
{
    top++;
    stack[top]=a;
}

int main() {
    cin>>t;
    while(t--)
    {
        int num;
        string s;
        cin>>s;
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            //cout<<"Checking "<<s[i]<<endl;
            int f=0;
            if(isdigit(s[i]))
            {
                num=0;
                num=s[i]-'0';
                for(int j=i+1;j<len;j++)
                {
                    if(isdigit(s[j]))
                    {
                        int temp=s[j]-'0';
                        num=num*10;
                        num=num+temp;
                    }
                    else
                    {
                        f=1;
                        push(num);
                        //cout<<num<<" was pushed."<<endl;
                        break;
                    }
                }
                if(f==0)
                {
                    push(num);
                }
            }
        }
        int max=stack[0];
        for(int l=1;l<=top;l++)
        {
            if(stack[l]>max)
            {
                max=stack[l];
            }
        }
        cout<<max<<endl;
        top=-1;
    }
	//code
	return 0;
}