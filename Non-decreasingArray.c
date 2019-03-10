bool checkPossibility(int* nums, int numsSize) {
    
    int i,c=0,ii;
for(i=0;i<numsSize-1;i++)
{
    if(nums[i] > nums[i+1])
    {
        c++;
        ii=i+1;
    }
}
if(c == 0)
{
    return true;
}
else if(c > 1)
    return false;
else
{
    if(ii == 1)
    {
        return true;
    }
    else
    {
        if(ii == (numsSize-1))
            return true;
        if(nums[ii+1] - nums[ii-1] >=0)
            return true;
        else if(nums[ii] - nums[ii-2] >=0)
            return true;
        else
        {
            return false;
        }
    }
}
}

