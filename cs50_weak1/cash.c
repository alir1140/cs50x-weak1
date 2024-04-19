#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    int cents = get_cents();
    int num_quarters = calculate_quarters(cents);
    cents -= num_quarters * 25;
    int num_dimes = calculate_dimes(cents);
    cents -= num_dimes * 10;
    int num_nickels = calculate_nickels(cents);
    cents -= num_nickels * 5;
    int num_pennies = calculate_pennies(cents);
    cents -= num_pennies;
    int total_coins = num_quarters + num_dimes + num_nickels + num_pennies;
    printf("Total coins: %i\n", total_coins);
}

int get_cents(void)
{
    int no_cents;
    do
    {
        no_cents = get_int("Change owed: ");
    }
    while (no_cents < 0);
    return no_cents;
}

int calculate_quarters(int cents)
{
    int num_quarters = cents / 25;
    return num_quarters;
}

int calculate_dimes(int cents)
{
    int num_dimes = cents / 10;
    return num_dimes;
}

int calculate_nickels(int cents)
{
    int num_nickels = cents / 5;
    return num_nickels;
}

int calculate_pennies(int cents)
{
    return cents;
}
