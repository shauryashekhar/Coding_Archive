#include <iostream>
using namespace std;
int t,n;
int stack[1000];
int top=-1;

int ifpresentarray(int ar[], int y, int p)
{
    int flag=0;
    for(int d=0;d<n;d++)
    {
        if(ar[d]==y && d!=p)
        {
            //cout<<d<<" position causing it to return 1"<<endl;
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int ifpresent(int x)
{
    int f=0;
    for(int z=0;z<=top;z++)
    {
        if(stack[z]==x)
        {
            f=1;
            break;
        }
    }
    if(f==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(int a)
{
    top++;
    stack[top]=a;
}

int main() {
    cin>>t;
    while(t--)
    {
        int k;
        cin>>n;
        cin>>k;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            if(ifpresent(a[j]))
            {
                continue;
            }
            else
            {
                push(a[j]);
            }
        }
        if(top<k)
        {
            cout<<"-1"<<endl;
            goto q;
        }
        else
        {
            int key=0;
            for(int l=0;l<n;l++)
            {
                if(ifpresentarray(a,a[l],l))
                {
                    //cout<<a[l]<<" present in array."<<endl;
                    continue;
                }
                else
                {
                    key++;
                    if(key==k)
                    {
                        //cout<<"Executed ";
                        cout<<a[l]<<endl;
                        break;
                    }
                }
            }
        }
        q:
        top=-1;
    }
	//code
	return 0;
}