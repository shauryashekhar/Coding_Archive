#include <iostream>
#include <string.h>
using namespace std;
int t,co;
string s;

int main() {
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len=s.size();
        co=0;
        for(int i=0;i<len;i++)
        {   
            int f=0;
            char c=s[i];
            if(c!='a' && c!='e'&& c!='o' && c!='i' && c!= '0' && c!='u')
            {
                for(int j=i+1;j<len;j++)
                {
                    if(c==s[j])
                    {
                        s[j]='0';
                        f=1;
                    }
                }
                if(f==0)
                {   
                    co=co+1;
                }
                else
                {
                    s[i]=='0';
                    co=co+1;
                }
            }
        }
        if(co%2==0)
        {
            cout<<"SHE!"<<endl;
        }
        else
        {
            cout<<"HE!"<<endl;
        }
    }
	//code
	return 0;
}