#include <stdio.h>

int main() {
    int nums[] = {0, 1, 2, 2, 3, 0, 4, 2};
    int n = sizeof(nums) / sizeof(nums[0]); 
    int nums1[100];
    int k = 0; 

    for (int i = 0; i < n; i++) {
        int dup= 0; 

        for (int j = 0; j < k; j++) {
            if (nums[i] == nums1[j]) {
                dup= 1;
            }
        }
       /*!dup means "not dup".
       If dup is 0 (false), then !dup will be 1 (true).
      If dup is not 0 (true), then !dup will be 0 (false).
      So, if (!dup) checks if dup is false (0). 
      If dup is false, the condition evaluates to true, 
      and the code inside the if statement executes. 
      If dup is true (non-zero), the condition evaluates to false
      , and the code inside the if statement does not execute.
      */
        if (!dup) {
            nums1[k] = nums[i];
            k++;
        }
    }

    printf("Size of nums1: %d\n", k);

    printf("nums1: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums1[i]);
    }
    printf("\n");

    return 0;
}
