#include "main.h"
/**
 * print_binary - prints binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
    int i, count = 0;
    unsigned long int current;

    for (i = 63; i >= 0; i--)
    {
        current = n >> i;

        if (current & 1)
        {
            std::cout << '1';
            count++;
        }
        else if (count)
            std::cout << '0';
    }
    if (!count)
        std::cout << '0';
}
