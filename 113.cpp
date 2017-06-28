#include <iostream>
#include <string.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int len,mid;
        string s;
        cin>>len;
        cin>>s;
        if(len%2==0)
        {
            mid=len/2;
            int f=0;
            for(int i=0,j=len-1;i<mid,j>mid;i++,j--)
            {
                if(s[i]!=s[j])
                {
                    f=1;
                    break;
                }
            }
            if(f==1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
        else
        {
            mid=len/2;
            int flag=0;
            for(int k=0,l=len-1;k<=mid,l>mid;k++,l--)
            {
                if(s[k]!=s[l])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==1)
            {
                cout<<"No"<<endl;
            }
            else
            {
                cout<<"Yes"<<endl;
            }
        }
    }
	//code
	return 0;
}