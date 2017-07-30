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
        int f=0;
        for(int j=0;j<n;j++)
        {
            if(j+1==a[j])
            {
                f=1;
                cout<<j+1<<" ";
            }
        }
        if(f==0)
        {
            cout<<"Not Found"<<endl;
        }
        else
        {
            cout<<endl;
        }
    }
	//code
	return 0;
}