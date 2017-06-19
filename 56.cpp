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
    int co=0;
    int number;
    cin>>number;
    for(int j=0;j<n;j++)
    {
        if(ar[j]<number || ar[j]==number)
        {
            co++;
        }
    }
    cout<<co<<endl;
    }
	//code
	return 0;
}