#include <iostream>
using namespace std;
int t;

int dayofweek(int d, int m, int y)
{
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1, 4, 6, 2, 4 };
    y -= m < 3;
    return ( y + y/4 - y/100 + y/400 + t[m-1] + d) % 7;
}
 
int main()
{
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a;
        cin>>b;
        cin>>c;
    int day = dayofweek(a,b,c);
    if(day==0)
    {
        cout<<"Sunday"<<endl;
    }
    if(day==1)
    {
        cout<<"Monday"<<endl;
    }
    if(day==2)
    {
        cout<<"Tuesday"<<endl;
    }
    if(day==3)
    {
        cout<<"Wednesday"<<endl;
    }
    if(day==4)
    {
        cout<<"Thursday"<<endl;
    }
    if(day==5)
    {
        cout<<"Friday"<<endl;
    }
    if(day==6)
    {
        cout<<"Saturday"<<endl;
    }
    }
    return 0;
}