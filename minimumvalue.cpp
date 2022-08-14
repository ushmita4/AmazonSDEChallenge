#include<bits/stdc++.h>
int minValue(vector<int>&arr, int n, int k)
{
	// Write your code here.
    int mini=INT_MAX;
    sort(arr.begin(),arr.end());
    for(int i=0;i<n-k+1;i++)
        mini=min(mini,arr[i+k-1]-arr[i]);
    
    return mini;
}
