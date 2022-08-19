

bool CheckFiboNum(int n)
{    
 
    long long m = n;
    
  
    long long a = 5 * m * m + 4;
    long long b = 5 * m * m - 4;

    
    long long aSq = sqrtl(a);
    long long bSq = sqrtl(b);

  
    return (aSq * aSq == a) || (bSq * bSq == b);
}
