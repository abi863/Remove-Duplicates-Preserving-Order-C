#include <stdio.h>
#include <string.h>

int main() {
    char str[1000];
    int seen[256] = {0};
    int j = 0;

    printf("Enter a string: ");
    scanf("%999s", str);

    for (int i = 0; str[i] != '\0'; i++) {
        unsigned char ch = (unsigned char)str[i];

        if (!seen[ch]) {
            seen[ch] = 1;
            str[j] = str[i];
            j++;
        }
    }

    str[j] = '\0';

    printf("String after removing duplicates: %s\n", str);

    return 0;
}