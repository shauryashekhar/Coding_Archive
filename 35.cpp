#include <iostream>
using namespace std;
int t;
int pos=0;
int main() {
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int len=s.size();
        for(int i=len-1;i>=0;i--)
        {
            if(s[i]=='1')
            {
                pos=i;
                break;
            }
        }
        cout<<pos<<endl;
    }
	//code
	return 0;
}