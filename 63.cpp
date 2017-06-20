#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int na,nb;
        cin>>na;
        nb=na-1;
        unsigned int a[na];
        unsigned int b[nb];
        for(int i=0;i<na;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<nb;j++)
        {
            cin>>b[j];
        }
        for(int k=0;k<nb;k++)
        {
            for(int m=0;m<na;m++)
            {
                if(b[k]==a[m])
                {
                    a[m]=0;
                    break;
                }
            }
        }
        for(int l=0;l<na;l++)
        {
            if(a[l]!=0)
            {
                cout<<a[l]<<endl;
            }
        }
    }
	//code
	return 0;
}