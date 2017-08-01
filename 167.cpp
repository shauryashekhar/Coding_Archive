#include <bits/stdc++.h>

using namespace std;

int migratoryBirds(int n, vector <int> ar) {
    // Complete this function
    int b[200000]={0};
    for(int i=0;i<n;i++)
    {
        b[ar[i]]++;
    }
    int max=b[0];
    int p=1;
    for(int j=1;j<20000;j++)
    {
        if(b[j]>max)
        {
            p=j;
            max=b[j];
        }
    }
    return p;
}

int main() {
    int n;
    cin >> n;
    vector<int> ar(n);
    for(int ar_i = 0; ar_i < n; ar_i++){
       cin >> ar[ar_i];
    }
    int result = migratoryBirds(n, ar);
    cout << result << endl;
    return 0;
}
