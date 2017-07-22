#include <iostream>
using namespace std;
int t;

int main() {
    int t;
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
        int max_so_far=a[0];
        int curr_max=a[0];
        for(int j=1;j<n;j++)
        {
            curr_max=max(a[j],curr_max+a[j]);
            max_so_far=max(max_so_far,curr_max);
        }
        cout<<max_so_far<<endl;
    }
	//code
	return 0;
}