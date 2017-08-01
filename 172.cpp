#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while(q--)
    {
    string s;
    cin>>s;
    string check = "hackerrank";
    int len=s.length();
    int j=0;
    int co=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]==check[j])
        {
            //cout<<s[i]<<" match."<<endl;
            j++;
            co++;
        }
    }
        if(co==10)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
