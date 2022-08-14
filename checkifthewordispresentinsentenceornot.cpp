#include<bits/stdc++.h>
bool findWord(string &s, string &w)
{
    vector <string> words;
    string ans = "";
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != ' '){
            ans += s[i];
        }

        else{
            words.push_back(ans);
            ans = "";
        }

    }
    words.push_back(ans);
    
   return find(words.begin(), words.end(), w) != words.end();

    
    
}
