#include "main.h"
/**
 * get_bit - returns the value of a bit at an in a decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
    if (index >= 64)
    {
        return -1; // index is out of range
    }
    return (n >> index) & 1;
}
