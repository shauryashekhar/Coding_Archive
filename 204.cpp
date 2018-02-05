#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        long long n,temp,temp1;
        cin>>n;
        temp=n;
        temp1=n;
        int c=0;
        while(temp1>0)
        {
            c++;
            temp1=temp1/10;
        }
        long long sum=0;
        d:
        int rem=temp%10;
        sum=sum+pow(rem,c);
        temp=temp/10;
        if(temp!=0)
        {
            goto d;
        }
        if(sum==n)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	//code
	return 0;
}