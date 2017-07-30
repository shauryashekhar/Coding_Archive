#include <iostream>
using namespace std;
int t,n;

int main() {
    cin>>t;
    while(t--)
    {
        int s1,s2;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int flag=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    for(int m=l+1;m<n;m++)
                    {
                        s1=a[j]+a[k];
                        s2=a[l]+a[m];
                        if(s1==s2)
                        {
                            //cout<<a[j]<<" "<<a[k]<<" "<<a[l]<<" "<<a[m]<<endl;
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
        if(flag==0)
        {
            cout<<"0"<<endl;
        }
    }
	//code
	return 0;
}