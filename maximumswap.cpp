

int maximumSwap(int n) {

    string s = to_string(n);

   
    vector < int > last(10, -1);

    for (int i = 0; i < (int) s.size(); i++) {
        last[s[i] - '0'] = i;
    }

    for (int i = 0; i < s.size(); i++) {
        for (int digit = 9; digit > s[i] - '0'; digit--) {
            if (last[digit] > i) {

              
                swap(s[i], s[last[digit]]);

               
                return stoi(s);
            }
        }
    }

    
    return n;
}
