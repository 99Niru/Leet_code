#include <stdio.h>
#include <stdlib.h>
int* twoSum(int* nums_array, int numsSize, int target, int* returnSize);
int main() 
{   
    int nums_array[5]={5,1,2,3,4};
    int numsSize=0,target=0,returnSize=0;
    numsSize=sizeof(nums_array)/sizeof(nums_array[0]);
    printf("enter the target value \n"); scanf("%d",&target);
    int* result= twoSum(nums_array, numsSize,target, &returnSize);
    if(result!=NULL && returnSize ==2)
    printf("indices %d %d \n",result[0],result[1]);
    else
    printf("result not found\n");
}
int* twoSum(int* nums_array, int numsSize, int target, int* returnSize)
{
    int i=0,j=0;
    int *result = (int*) malloc (2*sizeof(int)); 
    for(i=0;i<numsSize;i++)
    {
        for(j=i+1;j<numsSize;j++)
        {
            if(nums_array[i]+nums_array[j] == target)
            {
                result[0]=nums_array[i];
                result[1]=nums_array[j];
                *returnSize =2;
                return result;
            }
        }
    }
    // if nothing found 
    *returnSize = 0;
    free(result);
    return NULL;
}
