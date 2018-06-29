#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //prompt user for a positive number
    int height;
    do {
        height = get_int("height: ");
    }
    while (height <= 0 || height >= 24);

    //initialize rows based on user input
    for (int rows = 0; rows < height; rows++)
    {
        //input spaces as needed, reducing by one
        for (int spaces = height - rows - 1; spaces > 0; spaces--)
        {
            printf(" ");
        }

        //fill out blocks, increasing by one
         for (int blocks = 0; blocks < rows; blocks++)
         {
         printf("#");
         }
   //break the line to format correctly as a pyramid
    printf("\n");
    }
}
