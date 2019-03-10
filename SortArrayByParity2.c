int* sortArrayByParityII(int* A, int ASize, int* returnSize) {
                         
    
    *returnSize = ASize;
    int e=0,o=1;
    while(e < ASize)
    {
        if(A[e]%2 == 0)
        {
            e+=2;
        }
        else
        {
            while(o < ASize)
            {
                if(A[o]%2 == 0)
                {
                    int t = A[e];
                    A[e] = A[o];
                    A[o] = t;
                    e+=2;
                    o+=2;
                    break;
                }
                else
                {
                    o+=2;
                }
            }
        }
    }
    return A;
    
    
}