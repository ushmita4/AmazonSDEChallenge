

vector<int> chocolateFest(vector<int> choco, int x)
{
   
    int n = choco.size();
    int curr_sum = 0;
    int min_len = n + 1;
    int start_index = 0;
 
 
    int start = 0;
    int end = 0;

    while (end < n) 
    {
       
        while (curr_sum <= x && end < n)
        {
            curr_sum = curr_sum + choco[end];
            end++;
        }
 
        
        while (curr_sum > x && start < n) 
        {
            // Update minimum length if needed
            if (end - start < min_len)
            {
                min_len = end - start;
                start_index = start;
            }
 
            // remove starting elements
            curr_sum = curr_sum - choco[start];
            start++;
        }
    }

    vector<int> result;

    for (int i = start_index; i < start_index + min_len; i++)
    {
        result.push_back(choco[i]);
    }
    
    return result;
}
