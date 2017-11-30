#include <iostream>
using namespace std;

int main() 
{
    int t=1;
    while(t)	
    {
        int i;
        cin>>i;
        if(i==42)
        {
            t=0;
        }
        else
        {
            cout<<i<<endl;
        }
    }
	return 0;
}