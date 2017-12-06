#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        signed int n;
        cin>>n;
        int temp=abs(n%10);
        //cout<<temp<<endl;
        if(temp==0 || temp==5)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
	//code
	return 0;
}