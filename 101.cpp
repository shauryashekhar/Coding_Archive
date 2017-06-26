#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        int co=0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            if(a[i]==0)
            {
                co++;
            }
        }
        cout<<co<<endl;
    }
	//code
	return 0;
}