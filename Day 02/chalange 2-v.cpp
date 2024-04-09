#include <stdio.h>
#include <string.h>

void find_substring(char text[], char pattern[], int list[], int *count) {
    int i, j, k = 0, n1, n2;
    n1 = strlen(text);
    n2 = strlen(pattern);
    
    for (i = 0; i <= n1 - n2; i++) {
        j = 0;
        while (j < n2 && text[i + j] == pattern[j]) {
            j++;
        }
        if (j == n2) { 
            list[k++] = i;
        }
    }
    *count = k;
}

int main() {
    char text[] = "abracadabra";
    char pattern[] = "abra";
    int list[20], count;
    find_substring(text, pattern, list, &count);
    
    if (count > 0) {
        printf("Pattern found at indices: ");
        for (int i = 0; i < count; i++) {
            printf("%d ", list[i]);
        }
        printf("\n");
    } else {
        printf("Pattern not found.\n");
    }
    return 0;
}
