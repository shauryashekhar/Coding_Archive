#include <iostream>
#include <string.h>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        int p=0;
        int ec=0;
        int oc=0;
        long long int sum=0;
        for(int i=0;i<=len;i=i+2)
        {
            int t=s[i]-'0';
            if(t==1)
            {
                ec++;
            }
        }
        for(int j=1;j<=len;j=j+2)
        {
            int t2=s[j]-'0';
            if(t2==1)
            {
                oc++;
            }
        }
        sum=abs(oc-ec);
        if(sum%3==0)
        {
            cout<<"1"<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
	//code
	return 0;
}