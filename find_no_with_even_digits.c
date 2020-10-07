/*Given an array arr of integers, return how many of them contain an even number of digits.

Constraints:
   -  1 <= nums.length <= 500
   -  1 <= nums[i] <= 10^5
*/

#include <stdio.h>

int count_even_digit_no(int *arr, int len)
{
    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] % 100000 < arr[i]) {
            // 6 digit no.
            count++;
        } else {
            if (arr[i] % 10000 < arr[i]) {
                // 5 digit no. DO NOTHING
            } else {
                if (arr[i] % 1000 < arr[i]) {
                    // 4 digit no.
                    count++;
                } else {
                    if (arr[i] % 100 < arr[i]){
                        //3 digit no.
                    } else {
                        if (arr[i] % 10 < arr[i]) {
                            //2 digit no.
                            count++;
                        } else {
                            //1 digit no.
                        }
                    }   
                }        
            }
        }
    }
    return count;
}

int main()
{
    int arr[4] = {1, 23, 345, 45676};
    int len = sizeof(arr) / sizeof(int);
    int no = count_even_digit_no(arr, len);
    printf("Total integers with even number of digits: %d\n", no);
    return 0;
}