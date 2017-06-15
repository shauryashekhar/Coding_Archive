#include <iostream>
using namespace std;

class student
{
    public:
    string name;
    int m1;
    int m2;
    int m3;
    int average;
    
    void calculate()
    {
        int total=m1+m2+m3;
        average=total/3;
    }
    
};

int t,n;

int main() {
    cin>>t;
    while(t--)
    {
        cin>>n;
        student s[n];
        for(int i=0;i<n;i++)
        {
            cin>>s[i].name;
            cin>>s[i].m1;
            cin>>s[i].m2;
            cin>>s[i].m3;
            s[i].calculate();
        }
        int max=s[0].average;
        int pos=0;
        for(int j=1;j<n;j++)
        {
            if(s[j].average>max)
            {
                pos=j;
            }
        }
        cout<<s[pos].name<<" "<<s[pos].average<<endl;
    }
	//code
	return 0;
}