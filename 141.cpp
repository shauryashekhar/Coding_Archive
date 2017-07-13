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
            int num=a[i];
            int sum=0;
            for(int j=1;j<num;j++)
            {
                if(num%j==0)
                {
                    sum=sum+j;
                }
            }
            cout<<sum<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}