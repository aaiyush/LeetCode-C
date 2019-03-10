int arrayPairSum(int* nums, int numsSize) {
    
    int comp(const void*,const void*);
    int min(int,int);
    qsort(nums,numsSize,sizeof(int),comp);
    
    int i,sum=0;
    for(i=0;i<numsSize;i=i+2)
    {
        sum+=min(nums[i],nums[i+1]);
    }
    return sum;
}
int min(int a,int b)
{
    if(a<b)
        return a;
    return b;
}
int comp(const void* a,const void* b)
{
    return *(int*)a - *(int*)b;
}