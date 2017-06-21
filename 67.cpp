#include <iostream>
using namespace std;
long int t,n,c,cm;

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        c=n;
        cm=0;
        x:
        int rem=n%10;
        if(rem==1 || rem==2)
        {
            cm++;
        }
        n=n/10;
        if(n>0)
        {
            goto x;
        }
        int flag=1;
        y:
        int remtwo=cm%10;
        if(remtwo==1 || remtwo==2)
        {
            flag=0;
        }
        remtwo=remtwo/10;
        if(remtwo>0)
        {
            goto y;
        }
        if(flag==1)
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