#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    string s;
    cin >> s;
    long long n;
    cin >> n;
    long long len=s.size();
    long long ans;
    if(len==1)
    {
        if(s=="a")
        {
            cout<<n<<endl;
        }
        else
        {
            cout<<"0"<<endl;
        }
    }
    else
    {
    ans=n/len;
    long long c=0;
    for(int i=0;i<len;i++)
    {
        if(s[i]=='a')
        {
            c++;
        }
    }
    ans=ans*c;
    //cout<<ans<<endl;
    long rem=n%len;
    for(int j=0;j<rem;j++)
    {
        if(s[j]=='a')
        {
            ans++;
        }
    }
            cout<<ans<<endl;
    }
    return 0;
}
