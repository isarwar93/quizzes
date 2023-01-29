#include <stdlib.h>
#include <stdio.h>


/**
 * @brief 
 * 
 * 1480. Running Sum of 1d Array
Easy
5.9K
288
Companies
Given an array nums. We define a running sum of an array as runningSum[i] = sum(nums[0]…nums[i]).

Return the running sum of nums.

Example 1:

Input: nums = [1,2,3,4]
Output: [1,3,6,10]
Explanation: Running sum is obtained as follows: [1, 1+2, 1+2+3, 1+2+3+4].
Example 2:

Input: nums = [1,1,1,1,1]
Output: [1,2,3,4,5]
Explanation: Running sum is obtained as follows: [1, 1+1, 1+1+1, 1+1+1+1, 1+1+1+1+1].
Example 3:

Input: nums = [3,1,2,10,1]
Output: [3,4,6,16,17]
 

Constraints:

1 <= nums.length <= 1000
-10^6 <= nums[i] <= 10^6
 * 
 *
 */


 //Note: The returned array must be malloced, assume caller calls free().
int* runningSum(int* nums, int numsSize, int* returnSize)
{       
    int *arr =(int*) malloc(sizeof(int)*numsSize);
    int sum = 0;
    for (int i = 0; i<numsSize; i++)
    {
        arr[i] =  nums[i]+sum;
        sum = nums[i]+sum;

    }
    *returnSize = (sizeof(arr)*sizeof(int));

    return arr;
}




int main()
{
    int x[5] = {3,1,2,10,1};

    int y=0;
    printf("x size: %d\n",sizeof(x));
    int *array = runningSum(x,sizeof(x)/sizeof(int),&y);

    printf("y:%d :\n",y);
    for(int z = 0;z < 5;z++)
    {
        printf("array[]:%d \n",array[z]);
    }
}