#include <iostream>
#include <math.h>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        float num,k;
        cin>>num;
        cin>>k;
        float quo=0;
        quo=num/k;
        float diff=0;
        diff=quo-(int)quo;
        if(diff>=0.5)
        {
        quo=ceil(quo);
        int final=0;
        final=quo*k;
        cout<<final<<endl;
        }
        else
        {
        quo=floor(quo);
        int final=0;
        final=quo*k;
        cout<<final<<endl;
        }
        
    }
	//code
	return 0;
}