#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert hexadecimal to binary
void hexToBinary(char hexDec[])
{
    int len = strlen(hexDec);

    // Iterate through each character of the hexadecimal number
    for (int i = 0; i < len; i++) {

        // Get the current character and convert it to an integer
        int ch = (int)hexDec[i];
        if (ch >= 48 && ch <= 57)
            ch -= 48;
        else if (ch >= 65 && ch <= 70)
            ch -= 55;
        else if (ch >= 97 && ch <= 102)
            ch -= 87;

        // Use a bitmask to extract each digit of the integer
        // and print it in binary format
        for (int j = 3; j >= 0; j--)
            printf("%d", (ch >> j) & 1);
    }
}

// Driver program to test above function
int main()
{
    char hexDec[20];

    printf("Enter a hexadecimal number: ");
    scanf("%s", hexDec);

    printf("Binary representation of %s is: ", hexDec);
    hexToBinary(hexDec);

    return 0;
}
