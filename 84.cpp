#include <iostream>
using namespace std;
int t;
int n;

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        int ar[n];
        for(int i=0;i<n;i++)
        {
            cin>>ar[i];
        }
        for(int j=0;j<n;j++)
        {   
            int c=1;
            for(int k=0;k<n;k++)
            {   
                int f=0;
                if(ar[j]==ar[k] && j!=k)
                {
                    c++;
                }
            }
            if(c%2==1)
            {
                cout<<ar[j]<<endl;
                break;
            }
        }
    }
	//code
	return 0;
}