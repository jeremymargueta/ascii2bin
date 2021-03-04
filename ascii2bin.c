#include "stdio.h"
#include "stdlib.h"
#include <unistd.h>
#include <sys/types.h>

#define max_int (255)
#define byte unsigned char

int main (int argc, char * argv[], char ** envp)
{
    int offset = 0x30;
    byte ascii_value;
    int number = 0;
    int digit;
    int retval;

   
    retval = read(0, &ascii_value, 1);

     if(retval != 0 || retval != 1)
    {
        fprintf(stderr, "Error Detected!\n"); 
        return 1;
    }

    fprintf(stderr, "Error Detected!\n");
     printf("%u\n", retval);
    

    // while (retval == 1)
    // {
    //     digit = ascii_value - offset;
    //     number = (number << 1) + digit;  
    //     retval = read(0, &ascii_value, 1);
    //     printf("%u\n", number);
    // }
    // printf("%u\n", number);
    return 0;

}