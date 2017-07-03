#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,num;
        cin>>n;
        cin>>num;
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
        int pos=n-num-1;
        for(int m=n-1;m>pos;m--)
        {
            cout<<a[m]<<" ";
        }
        cout<<endl;
    }
	//code
	return 0;
}