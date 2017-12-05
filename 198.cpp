#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,i;
        cin>>n;
        int flag=0;
        long long int sum=0;
        for(i=0;i<n;i++)
        {
            sum=sum+i;
            if(sum==n)
            {
                break;
            }
            else if(sum>n)
            {
                cout<<"-1"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            cout<<i<<endl;
        }
    }
	//code
	return 0;
}