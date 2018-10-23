#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    if(argc != 2)
    {
      printf("You did not enter a valid number of arguments.\n");
      return 1;
    }
    
    int key = atoi(argv[1]);

    printf("plaintext: ");
    string plaintext = get_string();
    printf("ciphertext: ");
    for(int i = 0, n = strlen(plaintext); i < n; i++)
    {
      if(!isalpha(plaintext[i]))
      {
        printf("%c", plaintext[i]);
      } else if(isupper(plaintext[i]))
      {
        printf("%c", ((plaintext[i] - 65 + key) % 26) + 65);
      } else
      {
        printf("%c", ((plaintext[i] - 97 + key) % 26) + 97);
      }
    };
    printf("\n");
    return 0;
}
