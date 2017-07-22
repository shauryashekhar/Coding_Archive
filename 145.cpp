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

int number_needed(string a, string b) 
{
   int la=a.size();
   int lb=b.size();
   string bcopy=b;
   int c=0;
   for(int x=0;x<la;x++)
   {
       int f=0;
       char temp=a[x];
       for(int y=0;y<lb;y++)
       {
           if(temp==bcopy[y])
           {
               f=1;
               bcopy[y]='0';
               break;
           }
       }
       if(f==0)
       {
           c++;
       }
   }
    string acopy2=a;
   for(int r=0;r<lb;r++)
   {
       int f2=0;
       char temp2=b[r];
       for(int t=0;t<la;t++)
       {
           if(temp2==acopy2[t])
           {
               f2=1;
               acopy2[t]='0';
               break;
           }
       }
       if(f2==0)
       {
           c++;
       }
   }
    return c;
}

int main(){
    string a;
    cin >> a;
    string b;
    cin >> b;
    cout << number_needed(a, b) << endl;
    return 0;
}
