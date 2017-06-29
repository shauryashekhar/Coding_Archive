#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n,rams,rohans;
        cin>>n;
        cin>>rams;
        cin>>rohans;
        int so[n];
        for(int i=0;i<n;i++)
        {
            cin>>so[i];
        }
        int ramno,rohanno;
        ramno=0;
        for(int j=0;j<n;j++)
        {
            if(so[j]%rams==0)
            {
                ramno++;
            }
        }
        rohanno=0;
        for(int k=0;k<n;k++)
        {
            if(so[k]%rohans==0)
            {
                rohanno++;
            }
        }
        if(ramno>rohanno)
        {
            cout<<"Ram"<<endl;
        }
        else if(rohanno>ramno)
        {
            cout<<"Rohan"<<endl;
        }
        else
        {
            cout<<"Both"<<endl;
        }
    }
	//code
	return 0;
}