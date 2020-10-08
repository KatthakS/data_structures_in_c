//Given a fixed length array arr of integers, duplicate each occurrence of zero, shifting the remaining elements to the right.
/*
Constraints:
    * 1 <= arr.length <= 10000
    * 0 <= arr[i] <= 9
*/

#include <stdio.h>

void duplicate_zeros_in_array(int *arr, int arr_size)
{
    int i, j;
    for (i = 0; i < arr_size; i++) {
        if (arr[i] == 0) {
            for (j = arr_size-1; j > i; j--) {
                    arr[j] = arr[j-1];
            }
            arr[j] = 0;
            i+=1;
        }   
    }
}
int main()
{
    int arr[8] = {1,0,2,3,0,4,5,0};
    int size = sizeof(arr) / sizeof(int);
    printf("Before:");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
    duplicate_zeros_in_array(arr, size);
    printf("After:");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
    }
    printf("\n");
}