//Concatenation
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i, j;

    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);

    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline from str1 if present
    for(i = 0; str1[i] != '\0'; i++)
    {
        if(str1[i] == '\n')
        {
            str1[i] = '\0';
            break;
        }
    }

    // Remove newline from str2 if present
    for(j = 0; str2[j] != '\0'; j++)
    {
        if(str2[j] == '\n')
        {
            str2[j] = '\0';
            break;
        }
    }

    // Find the end of str1
    for(i = 0; str1[i] != '\0'; i++);

    // Append str2 to str1
    for(j = 0; str2[j] != '\0'; j++, i++)
    {
        str1[i] = str2[j];
    }

    // Null terminate the concatenated string
    str1[i] = '\0';

    printf("\nThe concatenated string is: %s\n", str1);

    return 0;
}
