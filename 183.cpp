#include <iostream>
using namespace std;
int t;
int so[10000];
int se[10000];
int topo=-1;
int tope=-1;

void pusho(int x)
{
    topo++;
    so[topo]=x;
}

void pushe(int y)
{
    tope++;
    se[tope]=y;
}

int main() {
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        for(int i=0;i<n;i++)
        {
            int num;
            cin>>num;
            if(num%2==0)
            {
                pushe(num);
            }
            else
            {
                pusho(num);
            }
        }
        int poso=0;
        int pose=0;
        int c=0;
        while(poso<=topo && pose<=tope)
        {
            if(c%2==0)
            {
                //cout<<"At c "<<c<<" outputing "<<se[pose]<<endl;
                cout<<se[pose]<<" ";
                pose++;
                c++;
            }
            else
            {
                //cout<<"At c "<<c<<" outputing "<<so[poso]<<endl;
                cout<<so[poso]<<" ";
                poso++;
                c++;
            }
        }
        if(poso<=topo)
        {
            //cout<<"ODD ELEMENTS REMAINING"<<endl;
            for(int u=poso;u<=topo;u++)
            {
                cout<<so[u]<<" ";
            }
        }
        else
        {
            //cout<<"EVEN ELEMENTS REMAINING"<<endl;
            for(int w=pose;w<=tope;w++)
            {
                cout<<se[w]<<" ";
            }
        }
        cout<<endl;
        topo=-1;
        tope=-1;
    }
	//code
	return 0;
}