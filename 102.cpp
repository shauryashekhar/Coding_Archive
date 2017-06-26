#include <iostream>
#include <string.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {   
        int len1,len2,co;
        string s1,s2;
        cin>>s1;
        cin>>s2;
        len1=s1.size();
        len2=s2.size();
        if(len1!=len2)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            co=0;
            for(int i=0;i<len1;i++)
            {
                for(int j=0;j<len2;j++)
                {
                    if(s1[i]==s2[j] && s1[i]!='0' && s2[j]!='0')
                    {
                        s1[i]='0';
                        s2[j]='0';
                        co++;
                    }
                }
            }
            if(co==len1)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                cout<<"NO"<<endl;
            }
        }
    }
	//code
	return 0;
}