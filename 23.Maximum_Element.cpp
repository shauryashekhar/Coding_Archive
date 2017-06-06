#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int top=-1;
int choice,value,highest;
int n;
int stack[100000];

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin>>n;
    for(int i=0;i<n;i++)
        {
        cin>>choice;
        if(choice==1)
            {
            cin>>value;
            top++;
            stack[top]=value;
            }
        if(choice==2)
            {
            top--;
            }
        if(choice==3)
            {
            int highest=stack[0];
            for(int k=1;k<=top;k++)
                {
                if(stack[k]>highest)
                    {
                    highest=stack[k];
                    }
                }
            cout<<highest<<endl;
            }
        }
    return 0;
}