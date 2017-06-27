#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //declare variables
    int h;
    int row;
    int space;
    int hash;
    
    // do while loop to ask user for height and repeat if height input is invalid
    do {
        printf("Height: ");
        h = get_int();
    }
    while (h < 0 || h > 23);
    
    // for loop used to construct the pyramid
    for (row = 1; row <= h; row++)
    {
        //print spaces on each row
        for (space = (h - row); space > 0; space--)
        {
            printf(" ");
        }
        
        //print # on each row
        for (hash = 1; hash <= (row + 1); hash++)
        {
            printf("#");
        }
        
        printf("\n");
    }
    return 0;
}
