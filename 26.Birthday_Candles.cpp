#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
unsigned int num;
unsigned int highest;
unsigned int c=0;

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>num;
    unsigned int *height = new unsigned int[num];
    for(int i=0;i<num;i++)
        {
        cin>>height[i];
        }
    highest=height[0];
    for(int j=1;j<num;j++)
        {
        if(height[j]>highest)
            {
            highest=height[j];
            }
        }
    for(int k=0;k<num;k++)
        {
        if(height[k]==highest)
            {
            c++;
            }
        }
    cout<<c;
    return 0;
}
