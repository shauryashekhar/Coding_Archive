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
        int mid=n/2;
        int suml,sumr;
        suml=0;
        sumr=0;
        for(int j=0,k=mid;j<mid,k<n;j++,k++)
        {
            suml=suml+a[j];
            sumr=sumr+a[k];
        }
        if(suml>sumr)
        {
            cout<<suml-sumr<<endl;
        }
        else
        {
            cout<<sumr-suml<<endl;
        }
    }
	//code
	return 0;
}