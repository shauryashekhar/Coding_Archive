#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int sum=0;
        for(int j=0;j<n;j++)
        {
            sum=sum+ar[j];
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}