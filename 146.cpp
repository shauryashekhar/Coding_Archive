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
        int max=a[0];
        for(int j=1;j<n;j++)
        {
            if(a[j]>max)
            {
                max=a[j];
            }
        }
        cout<<max<<endl;
    }
	//code
	return 0;
}