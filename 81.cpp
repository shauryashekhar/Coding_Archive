#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int x;
        char c;
        cin>>x>>c;
        if(c=='U')
        {
            if(x<=11)
            {
                cout<<11-x<<endl;
            }
            else
            {
                cout<<(19-x)+8<<endl;
            }
        }
        else if(c=='D')
        {
            if(x>=11)
            {
                cout<<x-11<<endl;
            }
            else
            {
                cout<<(x-0)+11<<endl;
            }
        }
    }
	//code
	return 0;
}