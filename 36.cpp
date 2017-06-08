#include <iostream>
using namespace std;
int t,first,n,val;

int main() {
    cin>>t;
    while(t--)
    {   
        cin>>first;
        cin>>n;
        val=first;
        for(int i=2;i<=n;i++)
        {
            val=val/2;
        }
        cout<<val<<endl;
    }
	//code
	return 0;
}