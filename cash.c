#include <cs50.h>
#include <stdio.h>
#include <math.h>

   float cash;
    int change;
    int coins = 0;
int main(void)
{
    //prompt user for a cash value

    do
    {
        cash = get_float("Amount Paid: ");
    }
    while (cash < 0);


    //conversion from dollars to coins
     change = round(cash * 100);

    //begin checking for which coins to use
   while ( change >= 25)
   {
       //once a coin is found, subtracts that value from the total change needed and adds one to the coin value to be printed later.
       change = change - 25;
       coins++;
   }

    //repeats process as above for each coin value
    while (change >= 10)
    {
        change = change - 10;
        coins++;
    }

    while (change >= 5)
    {
        change = change - 5;
        coins++;
    }

    while (change >= 1)
    {
        change = change -1;
        coins++;
    }

    printf("%i\n", coins);

}
