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
        int total;
        cin>>total;
        int table[total+1]={0};
        table[0]=1;
        for(int j=0;j<n;j++)
        {
            for(int k=a[j];k<=total;k++)
            {
                table[k]=table[k]+table[k-a[j]];
            }
        }
        cout<<table[total]<<endl;
    }
	//code
	return 0;
}