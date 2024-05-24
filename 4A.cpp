#include <stdio.h>


int main() {
    short unsigned int in;
    scanf("%du", &in);
    
    unsigned short quotient = (in / 2) * 2;
    unsigned short remainder = in - quotient;

    if (quotient > 2 && remainder == 0)
        printf("%s\n", "YES");
    else
        printf("%s\n", "NO");
}
