// Tracking a player by longitude and latitude
#include <stdio.h>

void go_south_east(short *lat, short *lon)
{
    *lat = *lat - 1;
    *lon = *lon + 1;
}

int main()
{
    short lantitude = 32;
    short longitude = -64;

    go_south_east(&lantitude, &longitude);

    printf("Stop! Now our coordinates: [%i, %i]\n", lantitude, longitude);

    return 0;
}