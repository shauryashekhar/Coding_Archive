#include <iostream>
using namespace std;
int t, n;

int pos(int x[],int j)
{
    int position=0;
    for(int l=0;l<n;l++)
    {
        if(x[l]==j)
        {
            position=l;
            break;
        }
    }
    return position;
}

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum=0;
        for(int j=1;j<n;j++)
        {
            int start,stop;
            start=pos(a,j);
            int k=j+1;
            stop=pos(a,k);
            int diff=start-stop;
            diff=abs(diff);
            sum=sum+diff;
        }
        cout<<sum<<endl;
    }
	//code
	return 0;
}