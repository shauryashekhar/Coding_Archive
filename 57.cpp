#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        int ar[n];
        cin>>n;
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        int flag=0;
        for(int j=0;j<n-1;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(ar[j]==ar[k])
                {   
                    flag=1;
                    break;
                }
            }
        }
        if(flag==1)
        {
            cout<<"BOYS"<<endl;
        }
        else
        {
            cout<<"GIRLS"<<endl;
        }
    }
	//code
	return 0;
}