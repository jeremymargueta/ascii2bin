int main (int argc, char * argv[], char ** envp)
{
    int offset = 0x30;
    char ascii_value;
    int number = 0;
    int digit;
    
    int retval = read(0, &ascii_value, 1);
    while (retval == 1)
        digit = ascii_value - offset;
        number = (number << 1) + digit;  
        retval = read(0, &ascii_value, 1);
        
    printf("%u\n", number);
    return 0;

}