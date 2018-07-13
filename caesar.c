#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        return 1;
    }
    else
    {
        string y = argv[1];
        int k = atoi(y);
        if (k < 0)
        {
            return 1;
        }
        else
        {
            string p = get_string("plaintext: ");
            printf("ciphertext: ");
            for (int i = 0, n = strlen(p); i < n; i++)
            {
                if (islower(p[i]))
                {
                    printf("%c", (((p[i] + k) - 97) % 26) + 97);
                }
                else if (isupper(p[i]))
                {
                    printf("%c", (((p[i] + k) - 65) % 26) + 65);
                }
                else
                {
                    printf("%c", p[i]);
                }
            }
        }
        printf("\n");
    }
}