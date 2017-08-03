#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    char s[n];
    int level=0;
    int c=0;
    for(int j=0;j<n;j++)
    {
        cin>>s[j];
    }
    for(int i=0;i<n;i++)
    {
        if(s[i]=='U')
        {
            //cout<<"Level Up"<<endl;
            level++;
        }
        else
        {
            //cout<<"Level Down"<<endl;
            level--;
        }
        if(level==0)
        {
            if(s[i]=='U')
            {
                //cout<<"Count Increased"<<endl;
                c++;
            }
        }
    }
    cout<<c<<endl;
    return 0;
}
