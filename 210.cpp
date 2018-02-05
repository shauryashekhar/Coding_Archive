#include <iostream>
#include <string.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int l1=s1.size();
        int l2=s2.size();
        for(int i=0;i<l1;i++)
        {
            char c=s1[i];
            if(isupper(c))
            {
                c=tolower(c);
                s1[i]=c;
            }
        }
        for(int j=0;j<l1;j++)
        {
            char d=s2[j];
            if(isupper(d))
            {
                d=tolower(d);
                s2[j]=d;
            }
        }
        int c=0;
        for(int k=0;k<l1;k++)
        {
            if(s1[k]==s2[k])
            {
                c++;
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}