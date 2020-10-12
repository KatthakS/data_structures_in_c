/*
Given an array nums and a value val, remove all instances of that value in-place and return the new length.

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

*/

#include <stdio.h>

int remove_element(int *nums, int nums_size, int val)
{
    int length = 0;
    int i = 0, j = 0;
    while (i < nums_size)
    {
        if (i + length == nums_size) {
            break;
        }
        if (nums[i] == val) {
            for (j = i; j < nums_size; j++) {
                nums[j] = nums[j+1];
            }
            nums[nums_size] = val;
            length++;
        } else {
            i++;
        }
    }
    return (nums_size - length);
}

int main()
{
    int nums[8] = {0,1,2,2,3,0,4,2};
    int val = 2;
    int size = sizeof(nums)/sizeof(int);
    int recv_len = remove_element(nums, size, val);
    for(int i=0; i<recv_len; i++) {
        printf("%d\n", nums[i]);
    }
    return 0;
}