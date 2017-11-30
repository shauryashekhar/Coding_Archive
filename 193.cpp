#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        int rem=sum%n;
        if(rem!=0)
        {
            cout<<"-1"<<endl;
        }
        else
        {
            int avg=sum/n;
            int diff=0;
            for(int l=0;l<n;l++)
            {
                int temp=abs(a[l]-avg);
                diff=diff+temp;
            }
            cout<<diff/2<<endl;
        }
    }
	//code
	return 0;
}