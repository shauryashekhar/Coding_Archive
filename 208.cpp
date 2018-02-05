#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        unsigned long long int ans=pow(n,3);
        d:
        int c1=n%10;
        int c2=ans%10;
        if(c1==c2)
        {
            n=n/10;
            ans=ans/10;
            if(n!=0)
            {
                goto d;
            }
            else
            {
                cout<<"1"<<endl;
            }
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	//code
	return 0;
}