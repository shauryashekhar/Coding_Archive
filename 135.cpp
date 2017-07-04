#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n],b[n];
        int c[2*n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        int ap=0;
        int bp=0;
        int cp=0;
        x:
        if(a[ap]<b[bp])
        {
            c[cp]=a[ap];
            ap++;
            cp++;
        }
        else
        {
            c[cp]=b[bp];
            bp++;
            cp++;
        }
        if(ap<n || bp<n)
        {
            goto x;
        }
        cout<<c[n-1]+c[n]<<endl;
    }
	//code
	return 0;
}