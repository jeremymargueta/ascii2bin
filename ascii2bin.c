#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/types.h>

#define max_int (255)
#define byte unsigned char

int main (int argc, char * argv[], char ** envp)
{
    int offset = 48;
    byte ascii_value;
    int number = 0;
    int digit;
    int retval;

   
    retval = read(0, &ascii_value, 1);

    if( ascii_value < 0 || ascii_value > 1 )
    {
        fprintf(stderr, "Error Detected!\n"); 
        return 1;
    }

    while (retval == 1 && ascii_value != '\n')
    {
        digit = ascii_value - offset;
        number = (number << 1) + digit;  
        retval = read(0, &ascii_value, 1);
    }
    printf("%u\n", number);
    return 0;

}