int maxAreaContainer(vector<int> &arr) {
    // Write your code here.
    int n=arr.size();
    int i=0,j=n-1;
    int maxarea=0,area=0;
    while(i<j)
    {
       area=(j-i)*min(arr[i],arr[j]);
       maxarea=max(area,maxarea);
        if(arr[i]<=arr[j])
            i++;
        else
            j--;
    }
    return maxarea;
}
