#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int i, j, len;
    printf("Enter a string: ");
    scanf(" %[^\n]", str);
    len = strlen(str);
    for(i = 0; i < len; i++)
    {
        for(j = i + 1; j < len; )
        {
            if(str[i] == str[j])
            {
                int k;
                for(k = j; k < len; k++)
                {
                    str[k] = str[k + 1];
                }
                len--;
            }
            else
            {
                j++;
            }
        }
    }
    printf("\nString after removing duplicate characters: %s\n", str);
    return 0;
}