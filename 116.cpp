#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n;
        cin>>num;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c=0;
        for(int j=0;j<n;j++)
        {
            if(a[j]==num)
            {
                c++;
            }
        }
        if(c>0)
        {
            cout<<c<<endl;
        }
        else
        {
            cout<<"-1"<<endl;
        }
    }
	//code
	return 0;
}