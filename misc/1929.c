/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* getConcatenation(int* nums, int numsize, int* returnSize) 
{
    int *ans = (int *) malloc(sizeof(int) * (numsize * 2));
    for (int i = 0; i < numsize; i++)
    {
        ans[i] = nums[i];
    }
    int x = numsize * 2;
    int j = 0;
    for(int i = numsize; i < x; i++,j++)
    {
        ans[i] = nums[j];
    }
    *returnSize = x;
    return ans;
}