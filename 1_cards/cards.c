// A program for assessing the importance of cards
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char card_name[3];
    puts("Enter the name of the card:");
    scanf("%2s", card_name);
    short val = 0;
/*
    if(card_name[0] == 'K'){
        val = 10;
    }else if(card_name[0] == 'Q'){
        val = 10;
    }else if(card_name[0] == 'J'){
        val = 10;
    }else if(card_name[0] == 'A'){
        val = 11;
    }else{
        val = atoi(card_name);
    }
*/

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

    default:
        val = atoi(card_name);
        break;
    }

    if ((val > 2) && (val < 7))
    {
        puts("Card count UP");
    }else if (val == 10)
    {
        puts("Card count DOWN");
    }
    

    printf("Card value: %i\n", val); 

    return 0;
}