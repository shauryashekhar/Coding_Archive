#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int index;
        cin>>index;
        int len=s.size();
        int top=1;
        for(int i=index+1;i<len;i++)
        {
            if(s[i]=='[')
            {
                top++;
            }
            if(s[i]==']')
            {
                top--;
                if(top==0)
                {
                    cout<<i<<endl;
                    break;
                }
            }
            
        }
    }
	//code
	return 0;
}