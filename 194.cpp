/*
Please note that it's Function problem i.e.
you need to write your solution in the form Function(s) only.
Driver Code to call/invoke your function would be added by GfG's Online Judge.*/


/*Complete the function below*/
vector<int> formatArray(vector<int> a,int n)
{
    int len=a.size();
    
    int f=0;
    for(int l=1;l<len;l=l+2)
    {
        if(a[l]<a[l-1])
        {
            int temp=a[l];
            a[l]=a[l-1];
            a[l-1]=temp;
        }
    }
    /*for(int k=0;k<len;k++)
    {
        cout<<a[k]<<" ";
    }
    cout<<endl;*/
    return a;
    //add code here.	
}