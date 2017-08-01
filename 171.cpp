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
    int n;
    cin >> n;
    vector<int> c(n);
    for(int c_i = 0;c_i < n;c_i++)
    {
       cin >> c[c_i];
    }
    int co=0;
    int j=0;
    x:
    if(c[j+2]!=1)
        {
            j=j+2;
            //cout<<"Jump 2 to "<<j<<endl;
            co++;
        }
    else
        {
            j=j+1;
            //cout<<"Jump 1 to "<<j<<endl;
            co++;
        }
    if(j!=n-1)
    {
        goto x;
    }
    cout<<co<<endl;
    return 0;
}
