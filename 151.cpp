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
        int max=a[0]*a[1]*a[2];
        for(int j=0;j<n;j++)
        {
            for(int k=j+1;k<n;k++)
            {
                for(int l=k+1;l<n;l++)
                {
                    int temp=a[j]*a[k]*a[l];
                    if(temp>max)
                    {
                        max=temp;
                    }
                }
            }
        }
        cout<<max<<endl;
    }
	//code
	return 0;
}