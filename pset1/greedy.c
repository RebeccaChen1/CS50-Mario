#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    int count = 0;
    printf("how much change is owed?\n");
    float change = get_float();
    while(change < 0)
    {
        printf("Retry\n");
        change = get_float();
    }
    change = change * 100;
    change = round(change);
    
    while(change >= 25)
    {
        count++;
        change = change - 25;
    }
    while(change >= 10)
    {
        count++;
        change = change - 10;
    }
    while(change >= 5)
    {
        count++;
        change = change - 5;
    }
    while(change >= 1)
    {
        count++;
        change = change - 1;
    }
    
    printf("%i\n",count);
    
}