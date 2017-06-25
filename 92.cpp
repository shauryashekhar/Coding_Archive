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
        int num,f,ans;
        for(int j=0;j<n-1;j++)
        {
            num=a[j];
            f=0;
            for(int k=j+1;k<n;k++)
            {
                if(a[k]>num)
                {
                    cout<<a[k]<<" ";
                    f=1;
                    break;
                }
            }
            if(f==0)
            {
                cout<<"-1"<<" ";
            }
        }
        cout<<"-1"<<endl;
    }
	//code
	return 0;
}