

bool oneSegment(string str) {
    
    int len = str.size();

    for(int i=0;i<len-1;i++) {
       
        if(str[i]=='0' && str[i+1]=='1') {
            return false;
        }
    }
  
    return true;
}
