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
        int c=0;
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                if(a[j]+a[k]%3==0)
                {
                    c++;
                }
                for(int o=k+1;o<n;o++)
                {
                    if(a[j]+a[k]+a[o]%3==0)
                    {
                        c++;
                    }
                }
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}