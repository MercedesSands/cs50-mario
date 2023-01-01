#include <cs50.h>
#include <stdio.h>


// Declare height
// Create function and ask for height with printf statement
// add one up until 8



int main(void)
{
    int i;
    int j;
    int n;
    do
    {
        i = get_int("Height: ");

    } while(i < 1 || i > 8);

    for (j = 0; j < i; j++)
    {
        for(n = 0; n < i; n++)
        {
            if(j + n < i - 1)
                printf(" ");
            else
                printf("#");
        }
        printf("\n");
    }
}





