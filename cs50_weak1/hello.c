#include <cs50.h>
#include <stdio.h>

int main()
{
    string answer = get_string("what's your name? ");
    printf("hello, %s\n", answer);
}
