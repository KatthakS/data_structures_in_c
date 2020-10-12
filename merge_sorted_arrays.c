// Given two sorted integer arrays nums1 and nums2, merge nums2 into nums1 as one sorted array.

/*
Constraints:
    -10^9 <= nums1[i], nums2[i] <= 10^9
    nums1.length == m + n
    nums2.length == n
*/

#include <stdio.h>
#include <stdlib.h>

void merge_sorted_arrays(int *nums1, int m, int *nums2, int n)
{
    int length1 = m + n;
    int l1 = length1 - 1;

    m = m - 1;
    n = n - 1;

    while (m >= 0 && n >= 0) {
         if (nums1[m] >= nums2[n]) {
                nums1[l1] = nums1[m];
                m -= 1;
         } else {
                nums1[l1] = nums2[n];
                n -= 1;
         }
        l1 -= 1;
    }
    while (n >= 0) {
        nums1[l1] = nums2[n];
        n-=1;
        l1-=1;
    }
    
}

int main()
{
    int nums1[6] = {2, 3, 4, 0, 0, 0};
    int length1 = sizeof(nums1)/sizeof(int);
    int nums2[3] = {1, 5, 6};
    merge_sorted_arrays(nums1, 3, nums2, 3);
    for(int i=0; i < length1; i++) {
        printf("%d\n", nums1[i]);
    }
}