#include<iostream>
using namespace std;
int t;

int main()
{
        cin>>t;
        while(t--)
        {
            int n;
            cin>>n;
            int temp=0;
            a:
            int rem=n%2;
            temp=temp*10;
            temp=temp+rem;
            n=n/2;
            while(n>0)
            {
                goto a;
            }
            cout<<temp<<endl;
        }
}
