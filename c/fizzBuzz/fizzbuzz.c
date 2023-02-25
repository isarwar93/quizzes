#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/* Given an integer n, return a string array answer (1-indexed) where:

answer[i] == "FizzBuzz" if i is divisible by 3 and 5.
answer[i] == "Fizz" if i is divisible by 3.
answer[i] == "Buzz" if i is divisible by 5.
answer[i] == i (as a string) if none of the above conditions are true.
 

Example 1:

Input: n = 3
Output: ["1","2","Fizz"]
Example 2:

Input: n = 5
Output: ["1","2","Fizz","4","Buzz"]
Example 3:

Input: n = 15
Output: ["1","2","Fizz","4","Buzz","Fizz","7","8","Fizz","Buzz","11","Fizz","13","14","FizzBuzz"] */


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
 #include <stdio.h>
 #include<stdlib.h>
#include <string.h>

char ** fizzBuzz(int n, int* returnSize)
{
    char **a;
    a = (char**)malloc((n)*sizeof(char*));
    for (int i = 0; i<n;i++)
    {  
        if ((i+1)%3 == 0 && (i+1)%5 ==0)
        {
            a[i] = (char*)malloc(9*sizeof(char));
            //As it is first element of the string therefore strcpy needs to be done
            strcpy(a[i],"FizzBuzz");
        }
        else if ((i+1)%3 == 0 )
        {
            a[i] = (char*)malloc(5*sizeof(char));
            strcpy(a[i],"Fizz");
        }
        else if ((i+1)%5 == 0)
        {
            a[i] = malloc(5*sizeof(char));
            strcpy(a[i],"Buzz");
        }
        else
        { 
            a[i] = (char*)malloc(5*sizeof(char));
            char temp[5];
            sprintf(temp, "%d", (i+1));
            strcpy(a[i],temp);
        }
    }
    *returnSize = n;
    return a;
}

int main()
{
    int n = 4;
    int return_size;
    int * return_size_ptr = &return_size;
    char ** array= fizzBuzz(n,return_size_ptr);

    printf("return size: %d \n",return_size);
    for (int i = 0; i < n;i++)
    {
        printf("array: %s \n",array[i]);
    }

    for(int i = 0; i<n ;i++)
    {    
        free(array[i]);
    }
    free(array);
    return 0;
}