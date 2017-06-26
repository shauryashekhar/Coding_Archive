#include <iostream>
#include <string>
using namespace std;
int t;
string s;

int main() {
    cin>>t;
    while(t--)
    {
        cin>>s;
        int len=s.size();
        int lenno=0;
        for(int i=len-1;i>=0;i--)
        {
            if(isdigit(s[i]))
            {
                lenno++;
            }
            else
            {
                break;
            }
        }
        int rlen=len-lenno;
        int number=0;
        for(int j=rlen;j<=len-1;j++)
        {
            number=number*10;
            int temp=(s[j]-'0');
            number=number+temp;
        }
        if(rlen==number)
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