#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long sum=0;
        long long first=1;
        long long second=1;
        d:
        long long temp=first+second;
        if(temp%2==0 && temp<=n)
        {
            sum=sum+temp;
        }
        first=second;
        second=temp;
        if(temp<=n)
        {
            goto d;
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}