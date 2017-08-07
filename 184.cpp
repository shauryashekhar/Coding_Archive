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
        int k;
        cin>>k;
        int f=0;
        int pos=-1;
        for(int j=0;j<n;j++)
        {
            if(a[j]==k)
            {
                f=1;
                pos=j;
            }
        }
        if(f==0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            cout<<pos<<endl;
        }
    }
	//code
	return 0;
}