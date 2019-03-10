int* sortArrayByParity(int* A, int ASize, int* returnSize) {
    int *arr = (int*)malloc(sizeof(int)*ASize);
    int j = 0, i;
    for(i = 0; i < ASize; i++)
    {
        if(A[i] % 2 == 0)
        {
            arr[j++] = A[i];
        }
    }
    for(i = 0; i < ASize; i++)
    {
        if(A[i] % 2 != 0)
        {
            arr[j++] = A[i];
        }
    }

    *returnSize = j;
    return arr;
}