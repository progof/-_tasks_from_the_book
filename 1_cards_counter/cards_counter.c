// A program for assessing the importance of cards
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char card_name[3];
    short count = 0;

    while (card_name[3] != 'X')
    {    
        puts("Enter the name of the card:");
        scanf("%2s", card_name);
        short val = 0;

        switch (card_name[0])
        {
            case 'K':
            case 'Q':
            case 'J':
                val = 10;
                break;

            case 'A':
                val = 11;
                break;  

            case 'X':
                continue;          

            default:
                val = atoi(card_name);
                if((val < 1) || (val > 10))
                {
                    puts("unknown value");
                    continue;
                }
        }

        if ((val > 2) && (val < 7))
        {
            count++;
        }else if (val == 10)
        {
            count--;
        }
        printf("Сurrent card account: %i\n", count); 
    }
    return 0;
}