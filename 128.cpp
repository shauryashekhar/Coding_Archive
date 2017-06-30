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
        int res=(a[0]-0)-(a[1]-1);
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                if(j!=k)
                {
                    int temp=(a[j]-j)-(a[k]-k);
                    if(temp>res)
                    {
                        res=temp;
                    }
                }
            }
        }
        cout<<res<<endl;
    }
	//code
	return 0;
}