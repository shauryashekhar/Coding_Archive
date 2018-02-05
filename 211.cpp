#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string.h>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int size=s.length();
        int sum=0;
        int i=0;
        d:
            for(int j=0,k=i;j<size,k<size;j++,k++)
            {
                if(s[k]==s[j])
                {
                    sum++;
                }
                else
                {
                    break;
                }
            }
        if(i<size)
        {
            i++;
            goto d;
        }
        cout<<sum<<endl;
    }
    return 0;
}
