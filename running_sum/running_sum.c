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

    int *arr = malloc(sizeof(int)*numsSize);
    //memcpy(nums,arr);
    int sum = 0;
    for (int i = 0; i<numsSize-1; i++)
    {
        arr[i] =  nums[i]+sum;
        sum = arr[i]+sum;

    }
    returnSize = malloc(sizeof(int)*2);
    returnSize[0] = (sizeof(arr));
    return arr;
}




int main()
{
    printf("hello_world!!!\n");
    int x[5] = {1,2,3,4,5};
    //int y = 0;
    int *y;
    int*array = runningSum(x,sizeof(x)/sizeof(int),y);
    printf("y[0]:%d \n",y);
    for(int z = 0;z < 5;z++)
    {
        printf("array[]:%d \n",array[z]);
    }
    //runningSum[i] = sum(nums[0]…nums[i])
}