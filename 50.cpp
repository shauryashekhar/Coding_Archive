#include <iostream>
using namespace std;
int t,n,p;

int main() {
    cin>>t;
    while(t--)
    {
        int flag=0;
        int prod;
        cin>>n;
        int ar[n];
        cin>>p;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                prod=ar[j]*ar[k];
                if(p==prod)
                {   
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }
    }
	//code
	return 0;
}