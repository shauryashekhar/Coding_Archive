#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int sum;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        cin>>sum;
        int flag=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    for(int m=l+1;m<n;m++)
                    {
                        if(ar[j]+ar[k]+ar[l]+ar[m]==sum)
                        {
                            flag=1;
                            break;
                        }
                    }
                    if(flag==1)
                    {
                        break;
                    }
                }
                if(flag==1)
                    {
                        break;
                    }
            }
            if(flag==1)
                    {
                        break;
                    }
        }
        if(flag==1)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	//code
	return 0;
}