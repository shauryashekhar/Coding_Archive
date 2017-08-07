#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long first=1;
        long long second=1;
        if(n==1)
        {
            cout<<first<<endl;
        }
        else if(n==2)
        {
            cout<<first<<" "<<second<<endl;
        }
        else if(n>2)
        {
            cout<<first<<" "<<second<<" ";
            for(int i=3;i<=n;i++)
            {
                long long temp=first+second;
                first=second;
                second=temp;
                cout<<temp<<" ";
            }
            cout<<endl;
        }
    }
	//code
	return 0;
}