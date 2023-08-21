#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * description - program computes the absolute value of an integer
 * @n: number that will be computed
 * Return: int
 */
int _abs(int n)

{
        if (n < 0)
        {
                int abs_val;

                abs_val = n * -1;
                return (abs_val);
        }
        else
        {
                return (n);
        }

        return (0);
}
