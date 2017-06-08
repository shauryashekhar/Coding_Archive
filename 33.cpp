#include <iostream>
using namespace std;
int t,n,len;
int main() {
	//code
	cin>>t;
	for(int i=0;i<t;i++)
	{
	    cin>>n;
	    string *s=new string[n];
	    for(int j=0;j<n;j++)
	    {
	        cin>>s[j];
	    }
	    len=s[0].size();
	    string f;
	    f=s[0];
	    for(int m=1;m<n;m++)
	    {
	        int lenc=s[m].size();
	        if(lenc>len)
	        {
	            len=lenc;
	            f=s[m];
	        }
	    }
	    cout<<f<<endl;
	}
	return 0;
}