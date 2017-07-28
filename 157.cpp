#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int c=0;
        x:
        int rem=n%2;
        if(rem==1)
        {
            c++;
        }
        n=n/2;
        if(n!=0)
        {
            goto x;
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}