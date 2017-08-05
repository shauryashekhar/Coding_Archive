#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    string s;
    getline(cin,s);
    int a[27]={0};
    int len=s.length();
    for(int j=0;j<len;j++)
    {
        int temp=s[j]-'a';
        if(temp<0)
        {
            temp=temp+32;
        }
        if(temp==-65)
        {
            continue;
        }
        a[temp]++;
    }
    int f=0;
    for(int i=0;i<26;i++)
    {
        //cout<<a[i]<<" ";
        if(a[i]==0)
        {
            //cout<<a[i]<<endl;
            f=1;
            break;
        }
    }
    if(f==0)
    {
        cout<<"pangram"<<endl;
    }
    else
    {
        cout<<"not pangram"<<endl;
    }
    return 0;
}
