#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,i;
        cin>>n;
        cin>>i;
        int ar[n];
        for(int j=0;j<n;j++)
        {
            cin>>ar[j];
        }
        for(int k=0;k<n;k++)
        {
            if(k==i)
            {
                cout<<ar[k]<<endl;
            }
        }
    }
	//code
	return 0;
}