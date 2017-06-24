#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=n-1;j>=0;j--)
        {
            cout<<a[j]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}