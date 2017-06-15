#include <iostream>
using namespace std;
int t,n;

int main() {
    cin>>t;
    while(t--)
    {   int c=0;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if(n%i==0)
            {
                if(i%3==0)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}