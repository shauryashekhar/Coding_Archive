#include <iostream>
using namespace std;
int t,n;

int nooffour(int a)
{
    int rem,result;
    result=0;
    x:
    rem=a%10;
    if(rem==4)
    {
        result++;
        goto y;
    }
    a=a/10;
    if(a>0)
    {
        goto x;
    }
    y:
    return result;
}

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        int num=0;
        for(int i=3;i<=n;i++)
        {
            int temp=0;
            temp=nooffour(i);
            num=num+temp;
        }
        cout<<num<<endl;
    }
	//code
	return 0;
}