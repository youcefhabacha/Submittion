#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char c, ch[100];
    int i, j, n;
    printf("Input: \n");
    scanf("%s", ch);
    n = strlen(ch);
    i = 0;
    j = n - 1; // Adjust for the null terminator

    while (i <= j) { // Corrected condition
        while (!isalpha(ch[i]) && i <= j) {
            i++;
        }
        while (!isalpha(ch[j]) && i <= j) {
            j--;
        }
        if (isalpha(ch[i]) && isalpha(ch[j])) {
            c = ch[i];
            ch[i] = ch[j];
            ch[j] = c;
        }
        i++;
        j--;
    }

    printf("Output: %s\n", ch);

    return 0;
}
