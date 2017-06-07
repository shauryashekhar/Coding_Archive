int Solution::maxArr(vector<int> &A) {
    int length=A.size();
    int max=0;
    for(int i=0;i<length;i++)
    {
        for(int j=0;j<length;j++)
        {
            if(i==j)
            {
                continue;
            }
            int result;
            result=abs(A[i]-A[j])+abs(i-j);
            if(result>max)
            {
                max=result;
            }
        }
    }
    return max;
}