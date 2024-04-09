#include <stdio.h>

void findSubarrays(int arr[], int n, int k) {
    int i, j;
    for (i = 0; i < n; i++) {
        int subarraySum = 0;
        for (j = i; j < n; j++) {
            subarraySum += arr[j];
            if (subarraySum < k) {
                printf("[");
                for (int l = i; l <= j; l++) {
                    printf("%d", arr[l]);
                    if (l < j) {
                        printf(",");
                    }
                }
                if(i<n-1){
                	 printf("],");
				}
				else{
				    printf("]");
				}
            }
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int k = 7;
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("{");
    findSubarrays(arr, n, k);
    printf("}");
    return 0;
}
