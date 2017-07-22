#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,pos;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==1)
            {
                f=1;
                pos=j;
                break;
            }
        }
        if(f==1)
        {
            cout<<pos<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
	//code
	return 0;
}