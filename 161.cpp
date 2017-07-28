#include <iostream>
using namespace std;
int t,n;

int main() {
    cin>>t;
    while(t--)
    {
        int s;
        cin>>n;
        cin>>s;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int w=0;w<n-1;w++)
        {
            for(int e=0;e<n-w-1;e++)
            {
                if(a[e]>a[e+1])
                {
                    int temp=a[e];
                    a[e]=a[e+1];
                    a[e+1]=temp;
                }
            }
        }
        int c=0;
        for(int j=0;j<n-2;j++)
        {
            int k=j+1;
            int l=n-1;
            while(k<l)
            {
                if(a[j]+a[k]+a[l]>=s)
                {
                    l--;
                }
                else
                {
                    c=c+(l-k);
                    k++;
                }
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}