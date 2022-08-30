#include<bits/stdc++.h>

bool validIndices(int i, int j, int n)
{
    if(i<0 || i>=n || j<0 || j>=n)
        return false;
    return true;
}

int findPath(vector<vector<int>> &mat, int n, int i, int j)
{
    if(!validIndices(i, j, n))
        return 0;
    int lenRight=0, lenLeft=0, lenUp=0, lenDown=0;
    if(validIndices(i, j+1, n) && mat[i][j+1]-mat[i][j]==1)
        lenRight=findPath(mat, n, i, j+1);
    if(validIndices(i, j-1, n) && mat[i][j-1]-mat[i][j]==1)
        lenLeft=findPath(mat, n, i, j-1);
    if(validIndices(i+1, j, n) && mat[i+1][j]-mat[i][j]==1)
        lenUp=findPath(mat, n, i+1, j);
    if(validIndices(i-1, j, n) && mat[i-1][j]-mat[i][j]==1)
        lenDown=findPath(mat, n, i-1, j);
    return 1+max(max(lenRight, lenLeft), max(lenUp, lenDown));
}

int findLongestOverAll(vector<vector<int>> &mat, int n){  
    // Write your code here.
    int maxLen=-1;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            int pathLen=findPath(mat, n, i, j);
            maxLen=max(maxLen, pathLen);
        }
    }
    return maxLen;
}
