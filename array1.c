/* Given a binary array, find the maximum number of consecutive 1s in this array*/

#include <stdio.h>

int findMaxConsecutiveOnes(int* nums, int nums_size){
    int i, max_length = 0;
    int counter = 0;
    
    for(i=0; i<nums_size; i++) {
        if(nums[i] == 1) {
            counter++;
        } else {
            max_length = counter;
            counter = 0;
        }
    }
    return (counter>max_length)?counter:max_length;
}

int main()
{
    int nums[6] = {1, 1, 0, 1, 1, 1};
    int nums_size = sizeof(nums)/sizeof(int);
    int max_length;
    max_length = findMaxConsecutiveOnes(nums, nums_size);
    printf("max_length = %d\n", max_length);
}