#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i, length;

    // Input string
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if(str[strlen(str) - 1] == '\n')
    {
        str[strlen(str) - 1] = '\0';
    }

    // Print the original string
    printf("You entered: %s\n", str);

    // Calculate length
    length = strlen(str);
    printf("Length of the string: %d\n", length);

    // Print the string in reverse
    printf("Reverse: ");
    for(i = length - 1; i >= 0; i--) {
        printf("%c", str[i]);
    }

    printf("\n");
    return 0;
}
