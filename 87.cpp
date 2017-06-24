#include <iostream>
using namespace std;
int t;
int cz=0;
int co=0;
int ct=0;

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
        for(int j=0;j<n;j++)
        {
            if(a[j]==0)
            {
                cz++;
            }
            else if(a[j]==1)
            {
                co++;
            }
            else if(a[j]==2)
            {
                ct++;
            }
        }
        for(int k=0;k<cz;k++)
        {
            cout<<"0"<<" ";
        }
        for(int m=0;m<co;m++)
        {
            cout<<"1"<<" ";
        }
        for(int n=0;n<ct;n++)
        {
            cout<<"2"<<" ";
        }
        cout<<endl;
        cz=co=ct=0;
    }
	//code
	return 0;
}