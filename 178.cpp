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
    int like=0;
    int total=5;
    like=floor(total/2);
    int likeonday=like;
    for(int i=2;i<=n;i++)
    {
        //cout<<"Entering on Day "<<i<<" is "<<like<<endl;
        int total=likeonday*3;
        //cout<<"Total on Day "<<i<<" is "<<total<<endl;
        likeonday=floor(total/2);
        like=like+likeonday;
    }
    cout<<like<<endl;
    return 0;
}
