#include <iostream>
using namespace std;
int t;

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int c[n];
        for(int j=0;j<n;j++)
        {
            int c1=0;
            int c2=0;
            /*for(int k=j-1;k>0;k--)
            {
                if(a[k]>a[k+1])
                {
                    c1++;
                }
                else
                {
                    break;
                }
            }*/
            for(int l=j+1;l<n;l++)
            {
                if(a[l]>a[l-1])
                {
                    c2++;
                }
                else
                {
                    break;
                }
            }
            if(c1>c2)
            {
                c[j]=c1;
            }
            else
            {
                c[j]=c2;
            }
            //cout<<c[j]<<" ";
        }
        //cout<<endl;
        int max=c[0];
        for(int z=0;z<n;z++)
        {
            if(c[z]==5)
            {
                //cout<<"Exists at "<<a[z]<<endl;
            }
            if(c[z]>max)
            {
                max=c[z];
            }
        }
        cout<<max<<endl;
    }
	//code
	return 0;
}