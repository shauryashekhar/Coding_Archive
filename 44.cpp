#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1;
        cin>>s2;
        int len1=0;
        int len2=0;
        len1=s1.size();
        len2=s2.size();
        if(len1>len2)
        {
            cout<<len1<<endl;
        }
        else
        {
            cout<<len2<<endl;
        }
        string s3;
        s3=s1+s2;
        cout<<s3<<endl;
    }
	//code
	return 0;
}