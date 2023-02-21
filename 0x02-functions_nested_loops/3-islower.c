#include "main.h"

/**
 * _islower - checks for lowercase charactor
 * @c: The charactor to be checked
 * return 1 for lowercase charactor or 0 for anything else
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	return (0);
}
