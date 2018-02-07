#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
int t;

int isvalid(int a)
{
    if(a<8 && a>=0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    cin>>t;
    while(t--)
    {
        int pos1,pos2;
        string board[8][8];
        for(int i=0;i<8;i++)
        {
            for(int j=0;j<8;j++)
            {
                char temp;
                cin>>temp;
                board[i][j]=temp;
                if(board[i][j]=="P" && board[i-1][j]=="#")
                {
                    pos1=i-1;
                    pos2=j;
                }
            }
        }
        int c=0;

                    //In case of knight
            if(board[pos1+1][pos2-2]=="k" && isvalid(pos1+1) && isvalid(pos2-2))
            {
                c++;
            }
            if(board[pos1+1][pos2+2]=="k" && isvalid(pos1+1) && isvalid(pos2+2))
            {
                c++;
            }
            if(board[pos1+2][pos2-1]=="k" && isvalid(pos1+2) && isvalid(pos2-1))
            {
                c++;
            }
            if(board[pos1+2][pos2+1]=="k" && isvalid(pos1+2) && isvalid(pos2+1))
            {
                c++;
            }
                    //In case of Bishop
            for(int j=1;j<8;j++)
            {
                if(isvalid(pos1+j) && isvalid(pos2-j))
                {
                    if(board[pos1+j][pos2-j]=="k")
                    {
                        c=c+2;
                    }
                }
                else
                {
                    break;
                }
            }
            for(int k=1;k<8;k++)
            {
                if(isvalid(pos1+k) && isvalid(pos2+k))
                {
                    if(board[pos1+k][pos2+k]=="k")
                    {
                        c=c+2;
                    }
                }
                else
                {
                    break;
                }
            }
                    //In case of Rook
            for(int j=1;j<8;j++)
            {
                if(isvalid(pos1) && isvalid(pos2-j))
                {
                    if(board[pos1][pos2-j]=="k")
                    {
                        c=c+2;
                    }
                }
                else
                {
                    break;
                }
            }
            for(int k=1;k<8;k++)
            {
                if(isvalid(pos1) && isvalid(pos2+k))
                {
                    if(board[pos1][pos2+k]=="k")
                    {
                        c=c+2;
                    }
                }
                else
                {
                    break;
                }
            }
            for(int k=1;k<8;k++)
            {
                if(isvalid(pos1+k) && isvalid(pos2))
                {
                    if(board[pos1+k][pos2]=="k")
                    {
                        c=c+2;
                    }
                }
                else
                {
                    break;
                }
            }
        cout<<c<<endl;
        }
    return 0;
}
