#include <iostream>
using namespace std;
int t;

int factorial(int a)
{
    int res=1;
    for(int i=1;i<=a;i++)
    {
        res=res*i;
    }
    return res;
}

int main() {
    cin>>t;
    while(t--)
    {
        int num,c;
        cin>>num;
        c=num;
        int result=0;
        int rem,temp;
        x:
        rem=num%10;
        temp=factorial(rem);
        result=result+temp;
        num=num/10;
        if(num>0)
        {
            goto x;
        }
        if(result==c)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	//code
	return 0;
}