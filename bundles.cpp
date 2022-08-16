

#include <unordered_map>

int groupsOfK(vector<string> &strList, int k)
{
    int n = strList.size();

    
    unordered_map<string, int> prefixCount;

    
    for (int i = 0; i < n; i++)
    {

      
        for (int j = 0; j < strList[i].size(); j++)
        {
           
            string pref = strList[i].substr(0, j + 1);

            
            prefixCount[pref]++;
        }
    }

   
    int finalScore = 0;

    
    for (unordered_map<string, int>::iterator i = prefixCount.begin(); i != prefixCount.end(); i++)
    {
        int count = i->second;
        finalScore = finalScore + (count / k);
    }

   
    return finalScore;
}
