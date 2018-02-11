#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    unsigned long long int n;
    unsigned long long int total;
    cin>>n;
    cin>>total;
    vector <unsigned long long int> v;
    for(int i=0;i<n;i++)
    {
        unsigned long long int temp;
        cin>>temp;
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    unsigned long long int c=0;
    unsigned long long int tot=0;
    for(int j=0;j<n;j++)
    {
        if(tot+v[j]<total)
        {
            tot=tot+v[j];
            c++;
        }
        else
        {
            break;
        }
    }
    cout<<c<<endl;
    return 0;
}
