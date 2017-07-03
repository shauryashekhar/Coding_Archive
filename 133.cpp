#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long int count[n+1];
        count[0]=1;
        count[1]=1;
        for(int i=2;i<=n;i++)
        {
            count[i]=count[i-1]+count[i-2];
        }
        cout<<count[n]<<endl;
    }
	//code
	return 0;
}