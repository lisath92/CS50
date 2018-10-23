#include <stdio.h>
#include <string.h>
#include <cs50.h>
#include <ctype.h>
#include <stdlib.h>

int keyTranslate(int num, string s);

int main(int argc, string argv[])
{
    //Check if there are 2 arguments from the cmd line
    if (argc != 2)
    {
      printf("You did not enter a valid number of arguments.\n");
      return 1;
    }

    //Check arg is all alphabetical
    for(int x = 0, y = strlen(argv[1]); x < y; x++)
    {
      if (!isalpha(argv[1][x])){
        printf("Your key should be all alphabetical.\n");
        return 1;
      }
    }

    //Promp user for a string of plaintext
    printf("plaintext: ");
    string plaintext = get_string();

    //Print out encrypted text
    printf("ciphertext: ");

    int key = 0;
    //Iterates over the plaintext
    for(int i = 0, n = strlen(plaintext); i < n; i++)
    {
        //checks if character is a letter
      if(!isalpha(plaintext[i]))
      {
        printf("%c", plaintext[i]);
      } else if(isupper(plaintext[i])) {
        printf("%c", (plaintext[i] - 'A' + keyTranslate(key % strlen(argv[1]), argv[1])) % 26 + 'A');
        key += 1;
       } else {
        printf("%c", (plaintext[i] - 'a' + keyTranslate(key % strlen(argv[1]), argv[1])) % 26 + 'a');
        key += 1;
      }
    };
    printf("\n");
    return 0;
}

//Get the alphabetical index of each char
int keyTranslate(int num, string s) {
    if(isupper(s[num])) {
      return s[num] - 'A';
    } else {
      return s[num] - 'a';
    }
}
