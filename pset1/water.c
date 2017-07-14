#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("minutes: ");
    int i = get_int();
    printf("bottles: %i\n", i * 12);
}