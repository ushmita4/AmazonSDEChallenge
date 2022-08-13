

bool findOverlap(string &s){

   
    int firstOccurAB = s.size();
    int firstOccurBA = s.size(); 
    int lastOccurBA = -1;
    int lastOccurAB = -1;

  
    for(int i = 1; i < s.size() ; i++){
        if (s[i]=='A' && s[i-1]=='B'){

           
            lastOccurBA = max (lastOccurBA , i - 1);
            firstOccurBA = min (firstOccurBA , i);
        }
    
        if (s[i]=='B' && s[i-1]=='A'){

            
            lastOccurAB = max (lastOccurAB , i - 1);
            firstOccurAB = min (firstOccurAB , i);
        }
    }
  
  
    if (lastOccurAB != - 1 && firstOccurBA != s.size() && lastOccurAB > firstOccurBA){
        return true;
    }

   
    if (lastOccurBA != - 1 && firstOccurAB != s.size() && lastOccurBA > firstOccurAB){ 
        return true;
    }

    return false;
}
