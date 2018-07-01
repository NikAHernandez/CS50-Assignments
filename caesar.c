#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include<stdlib.h>
#include <string.h>



int main(int argc, string argv[])
{
    //check for right number of arguments
    if (argc != 2)
    {
        printf("Please enter one number.\n");

        return 1;
    }

    //convert string to int

    int k = atoi(argv[1]);

    //ask for plaintext

    string p = get_string("plaintext: ");

    //begin loop for cypher
    printf("cyphertext: ");

    for(int i = 0, n = strlen(p); i < n; i++)
    {


        //check and keep case of each letter

        if (isupper(p[i]))
        {
            //find modulo number for the correct case of letter


            printf ("%c", 'A' + (p[i] - 'A' + k) % 26);
        }

        else if (islower(p[i]))
        {
            printf ("%c", 'a' + (p[i] - 'a' + k) % 26);
        }

        else
        {
            //keep the same
            printf("%c", p[i]);
        }
    }

    printf("\n");

    return 0;
}
