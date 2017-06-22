#include <iostream>
#include <string.h>
#include<stdlib.h>
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
        for(int i=0;i<len;i++)
        {
            char c=s[i];
            int ascii=(int)c;
            if(ascii<110)
            {
                int diff=ascii-97;
                ascii=122-diff;
                c=(char)ascii;
                cout<<c;
            }
            else
            {
                int diff=ascii-122;
                diff=abs(diff);
                ascii=diff+97;
                c=(char)ascii;
                cout<<c;
            }
        }
        cout<<endl;
    }
	//code
	return 0;
}