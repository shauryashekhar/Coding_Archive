#include <iostream>
using namespace std;
int t,n,amount,final;

int main() {
	//code
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    cin>>amount;
	    if(n%2==0)
	    {
	        int mul;
	        mul=n/2;
	        final=amount*mul;
	        cout<<final<<endl;
	    }
	    else
	    {
	        int mul;
	        mul=n/2;
	        mul=mul+1;
	        final=amount*mul;
	        cout<<final<<endl;
	    }
	}
	return 0;
}