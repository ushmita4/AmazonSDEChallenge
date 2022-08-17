

int minimum(int arr[], int n)
{
    int idx = 0;
    int m = 1000000002;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] < m)
        {
            m = arr[i];
            idx = i;
        }
    }
    return idx;
}

int maximum(int arr[], int n)
{
    int idx = 0;
    int m = -1000000002;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] > m)
        {
            m = arr[i];
            idx = i;
        }
    }
    return idx;
}

vector<vector<int>> minCashFlow(vector<vector<int>> &transaction, int n)
{
   
    int netAmount[n] = {0};

  
    for(int i = 0; i < n; i++)
    {
        for(int j = 0; j < n; j++)
        {
            netAmount[i] += (transaction[j][i] - transaction[i][j]);
        }
    }

  
    int numberOfZero = 0;

    for(int i = 0; i < n; i++)
    {
        if(netAmount[i] == 0)
        {
            numberOfZero += 1;
        }
    }

  
    vector<vector<int>> answer(n, vector<int>(n, 0));

  
    while(numberOfZero != n)
    {
        int minAmountIdx = minimum(netAmount, n);
        int maxAmountIdx = maximum(netAmount, n);

        
        if(netAmount[maxAmountIdx] > abs(netAmount[minAmountIdx]))
        {
            answer[minAmountIdx][maxAmountIdx] = abs(netAmount[minAmountIdx]);
            netAmount[maxAmountIdx] = netAmount[maxAmountIdx] -abs(netAmount[minAmountIdx]);
            netAmount[minAmountIdx] = 0;
        }
      
        else if(netAmount[maxAmountIdx] < abs(netAmount[minAmountIdx]))
        {
            answer[minAmountIdx][maxAmountIdx] = netAmount[maxAmountIdx];
            netAmount[minAmountIdx] = netAmount[minAmountIdx] + netAmount[maxAmountIdx];
            netAmount[maxAmountIdx] = 0;
        }
        
        else
        {
            answer[minAmountIdx][maxAmountIdx] = abs(netAmount[minAmountIdx]);
            netAmount[maxAmountIdx] = 0;
            netAmount[minAmountIdx] = 0;
            numberOfZero += 1;
        }

        numberOfZero += 1;
    }

    return answer;
}
