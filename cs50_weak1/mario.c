#include <cs50.h>
#include <stdio.h>

int height;
int main()
{
    do
    {
        height = get_int("Height Input= ");
    }
    while (height < 1 || height > 8);
    for (int hash = 1; hash <= height; hash++)
    {
        int emptySpace = height - hash;
        for (int space = 0; space < emptySpace; space++)
        {
            printf(" ");
        }
        for (int block = 0; block < hash; block++)
        {
            printf("#");
        }
        printf("\n");
    }
}
