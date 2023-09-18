#include <stdio.h>
#include "main.h"
void jack_bauer(void)
{
    int hour;
    int minute;

    hour = 0;
    while (hour < 24)
    {
        minute = 0;
        while (minute < 60)
        {
            printf("%02d:%02d\n", hour, minute);
            minute++;
        }
        hour++;
    }
}

