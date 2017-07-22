#include <iostream>
#include <string.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s[n];
        string scopy[n];
        int fc=0;
        for(int l=0;l<n;l++)
        {
            cin>>s[l];
            scopy[l]=s[l];
        }
        for(int i=0;i<n;i++)
        {
            int c=0;
            for(int j=0;j<n;j++)
            {
                if(s[i]==scopy[j])
                {
                    scopy[j]='0';
                    c++;
                }
            }
            if(c==2)
            {
                fc++;
            }
        }
        cout<<fc<<endl;
    }
	//code
	return 0;
}