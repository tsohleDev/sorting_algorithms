#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    size_t n = 101;
    int *array = rand_array(n, 1000);

    print_array(array, n);
    printf("\n");
    quick_sort_hoare(array, n);
    printf("\n");
    print_array(array, n);
    check_array(array, n);
    return (0);
}
