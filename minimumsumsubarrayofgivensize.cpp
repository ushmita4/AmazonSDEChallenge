int minSubarraySum(int arr[], int n, int k) 
{
    // Write your code here 
    int minsum=0,s=0;
    for(int i=0;i<k;i++)
        minsum=minsum+arr[i];
    
    s=minsum;
    for(int i=k;i<n;i++)
    {
        s=s+arr[i]-arr[i-k];
        minsum=min(minsum,s);
    }
    return minsum;
}
