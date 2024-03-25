#include<stdio.h>
#include<stdbool.h>

//int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
//    int i = 0, j = 0;
//    returnSize = (int*)malloc(sizeof(int) * 2);
//    for (i = 0;i < numsSize;i++)
//    {
//        for (j = i + 1;j < numsSize;j++)
//        {
//            if (target == nums[j] + nums[i])
//            {
//                returnSize[0] = i;
//                returnSize[1] = j;
//            }
//        }
//    }
//    return returnSize;
//}
//int main()
//{
//    int nums[4] = { 2,7,11,15 };
//    int target = 9;
//    int* returnsize = NULL;
//    int sz = sizeof(nums) / sizeof(nums[0]);
//    int* returnSize = twoSum(nums, sz, target, returnsize);
//
//    return 0;
//}

bool isPalindrome(int x) {
    int count = 0;
    int ret = x;
    while (ret)
    {
        ret = ret / 10;
        count++;
    }
    int arr[count];
    for (int i = 0;i < count;i++)
    {
        arr[i] = x % 10;
        x = x / 10;
    }
    int l = 0;
    int r = count - 1;
    while (l < r)
    {
        if (arr[l] != arr[r])
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int x = 121;

}