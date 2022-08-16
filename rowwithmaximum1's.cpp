

int first(vector<int>& nums, int si, int ei) {
    int ans = ei + 1;

    while (si <= ei) {
        int mid = si + (ei - si) / 2;

        if (nums[mid] == 1) {
            ans = mid;
            ei = mid - 1;
        }
        else {
            si = mid + 1;
        }
    }

    return ans;
}

int rowMaxOnes(vector<vector<int>>& mat, int n, int m) {
    int maxRowIndex = 0;

   
    int j = first(mat[0], 0, m - 1) - 1;

    for (int i = 1; i < n; i++) {
        
        while (j >= 0 && mat[i][j] == 1) {
          
            j = j - 1;  
            
            maxRowIndex = i;  
        }
    }
    return maxRowIndex;
}


