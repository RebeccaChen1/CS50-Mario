#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("height: ");
    int i = get_int();
    
    while(i > 23 || i < 0)
    {
        printf("Retry: ");
        i = get_int();
    }
    
    for(int j = 0; j < i ; j++)
    {
        for(int z = 0; z < i - j - 1 ; z++)
        {
            printf(" ");
        }
        for(int k = 0; k < j + 2; k++)
        {
            printf("#");
        }
        printf("\n");
    }
}
