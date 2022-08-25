

int countColumns(vector<string> &strings)
{

    // Variable to store count of unsorted columns.
    int count = 0;

   
    for (int col = 0; col < strings[0].length(); col++)
    {
        
        for (int row = 0; row < strings.size() - 1; row++)
        {

            
            if (strings[row][col] > strings[row + 1][col])
            {
                count = count + 1;
                break;
            }
        }
    }

    return count;
}
