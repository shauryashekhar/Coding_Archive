#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;



    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    void solution() {

   string str;
   cin >> str;
   int len = str.size();
   int ans = 1;
   for(int i = 0; i < len; i++){
       if(str[i] >= 'A' && str[i] <= 'Z') {
           ans++;
       }
   }
   cout<<ans<<endl;
}


int main() {

        solution();

    return 0;
}