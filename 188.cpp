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
        for(int j=0;j<n-1;j++)
        {
            for(int k=0;k<n-j-1;k++)
            {
                if(a[k]>a[k+1])
                {
                    int temp=a[k];
                    a[k]=a[k+1];
                    a[k+1]=temp;
                }
            }
        }
        cout<<a[n-2]<<endl;
    }
	//code
	return 0;
}