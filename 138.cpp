#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int num;
        cin>>num;
        int f=0;
        a:
        int rem=num%2;
        if(rem==0)
        {
            f=1;
            goto x;
        }
        else
        {
            num=num/2;
            if(num!=0)
            {
                goto a;
            }
        }
        x:
        if(f==1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
	//code
	return 0;
}