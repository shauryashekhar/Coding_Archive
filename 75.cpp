#include <iostream>
using namespace std;
int t,len,c;
string s;

int main() {
    cin>>t;
    while(t--)
    {   
        c=0;
        cin>>s;
        len=s.size();
        for(int i=0;i<len;i++)
        {
            int k=i+1;
            if(s[i]=='R')
            {
                if(k%2!=1)
                {
                    c++;
                }
            }
            else if(s[i]=='B')
            {
                if(k%2!=0)
                {
                    c++;
                }
            }
        }
        cout<<c<<endl;
    }
	//code
	return 0;
}