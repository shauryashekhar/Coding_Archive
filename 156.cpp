#include <iostream>
using namespace std;
int t;

int reverse (int n)
{
    int temp=0;
    a:
    int rem=n%10;
    temp=temp*10;
    temp=temp+rem;
    n=n/10;
    while(n>0)
    {
        goto a;
    }
    return temp;
}

int main() {
    cin>>t;
    while(t--)
    {
        int num1,num2;
        cin>>num1;
        cin>>num2;
        num1=reverse(num1);
        num2=reverse(num2);
        int sum=num1+num2;
        sum=reverse(sum);
        cout<<sum<<endl;
    }
	//code
	return 0;
}