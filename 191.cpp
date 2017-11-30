#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0,j=1;i*j<=n;i++,j++)
        {
            cout<<i*j<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}