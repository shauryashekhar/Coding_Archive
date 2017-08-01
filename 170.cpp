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
    vector<int> a(n);
    for(int i = 0;i < n;i++){
       cin >> a[i];
    }
    long min=10000;
    for(int j=0;j<n;j++)
    {
        if(a[j]!=-1)
        {    
        for(int k=0;k<n;k++)
            {
                if(a[j]==a[k] && j!=k)
                {
                    //cout<<"Satisfied "<<a[j]<<" "<<a[k]<<endl;
                    long temp=abs(j-k);
                    //cout<<"Temp is "<<temp<<endl;
                    a[j]=-1;
                    a[k]=-1;
                    if(temp<min)
                    {
                        min=temp;
                        //cout<<"Min updated to "<<min<<endl;
                    }
                    break;
                }
            }
        }
    }
    if(min==10000)
    {
        cout<<"-1"<<endl;
    }
    else
    {
        cout<<min<<endl;
    }
    return 0;
}
