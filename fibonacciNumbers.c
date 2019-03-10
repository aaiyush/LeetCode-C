int fib(int N) {
    
    if(N < 2)
        return N;
    else
    {
        int a = 0,b = 1,c,i;
        for(i=2;i<=N;i++)
        {
            c = a+b;
            a = b;
            b = c;
        }
        return c;
        
    }
    
}