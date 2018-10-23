#include <stdio.h>
#include <cs50.h>

void print_hashes();
void print_spaces();
int main(void)
{
    int stairs;
    do {
        printf("Height: ");
        stairs = get_int();
    } while( stairs < 0 || stairs > 23);

      for (int x = 1; x <= stairs; x++) {
          print_spaces(stairs-x);
          print_hashes(x);
          printf("%s", "  ");
          print_hashes(x);
          printf("\n");

      }
}

void print_spaces(int height){
    for(int i = 0; i < height; i++) {
        printf("%s", " ");
    }
}

void print_hashes(int height) {
    for(int i = 0; i < height; i++) {
        printf("%s", "#");
    }
}
