/* You are given an m x n integer grid accounts where accounts[i][j] is the amount of money the i​​​​​​​​​​​th​​​​ customer has in the j​​​​​​​​​​​th​​​​ bank. Return the wealth that the richest customer has.

A customer's wealth is the amount of money they have in all their bank accounts. The richest customer is the customer that has the maximum wealth.

 

Example 1:

Input: accounts = [[1,2,3],[3,2,1]]
Output: 6
Explanation:
1st customer has wealth = 1 + 2 + 3 = 6
2nd customer has wealth = 3 + 2 + 1 = 6
Both customers are considered the richest with a wealth of 6 each, so return 6.
Example 2:

Input: accounts = [[1,5],[7,3],[3,5]]
Output: 10
Explanation: 
1st customer has wealth = 6
2nd customer has wealth = 10 
3rd customer has wealth = 8
The 2nd customer is the richest with a wealth of 10.
Example 3:

Input: accounts = [[2,8,7],[7,1,3],[1,9,5]]
Output: 17
 

Constraints:

m == accounts.length
n == accounts[i].length
1 <= m, n <= 50
1 <= accounts[i][j] <= 100 */


#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int sum = 0;
    int ret = 1;
    bool initial = true;

    for(int i = 0; i<accountsSize;i++)
    {
        for (int j = 0;j<(int) *accountsColSize;j++)
        {
            sum = (int)*(accounts[i]+j)+sum;
        }
        if (sum > ret || initial == true)
        {
            ret = sum;  
            initial = false;
        }
        sum=0;
    }
    return ret;
}

int main()
{
int row_acc_size = 2;
int col_size = 3;

int **acc;
acc = calloc(row_acc_size,sizeof(int*));
for (int i=0; i<row_acc_size; i++)
{
   acc[i] = calloc(col_size,sizeof(int));
}

acc[0][1] =1;
acc[0][1] =2;
acc[0][2] =3;
acc[1][0] =3;
acc[1][1] =2;
acc[1][2] =1;

int ret =  maximumWealth(acc, row_acc_size,  &col_size);

printf("\nReturn Size: %d",ret);


for(int i = 0;i<row_acc_size;i++)
{
    free(acc[i]);
}
free(acc);

}