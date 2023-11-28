#include <stdio.h>
#include "kasumi.h"

int main(void)
{
    int i;
    int o;

    u16 key[8] = {
        0x9900, 0xAABB, 0xCCDD, 0xEEFF, 0x1122, 0x3344, 0x5566, 0x7788
    };

    u32 text[2]  = {
 
        0xFEDCBA09, 0x87654321,
        //1: fifteen, fourteen, thirteen, twelve, eleven, ten, zero, nine.
        //2: eight, seven, six, five, four, three, two, one.
    };
    for (o = 0; o < 10000000; ++o)
	{
    KeySchedule(key);
    /*
    for (i = 0; i < 8; i++)
        printf("%04x ", KLi1[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KLi2[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KOi1[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KOi2[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KOi3[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KIi1[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KIi2[i]);
    printf("\n");
    for (i = 0; i < 8; i++)
        printf("%04x ", KIi3[i]);
    printf("\n");
    
    //printf("%s\n", text);*/
    Kasumi(text);

}
	
    for (i = 0; i < 2; i++)
        printf("%02x", text[i]);
    printf("\n");
    i=0;
    return 0;
}