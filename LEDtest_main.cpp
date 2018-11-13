
#include <stdio.h>
#include "spiLED.h"


int main(int argc, char **argv)
{   
    printf("Start LED\n");
    spiLED_start(200, 1, 20);
    printf("Done!\n");
    return 0;
}
