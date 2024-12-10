/*
** EPITECH PROJECT, 2023
** my_putnbr
** File description:
** my_putnbr
*/

#include <stdio.h>
#include <stdlib.h>
#include "my.h"

int my_put_nbr(int a)
{
    if (a < 0) {
        a = a * (-1);
        my_putchar('-');
    }
    if (a == 0) {
        my_putchar('0');
        return 0;
    }
    if (a <= 9) {
        my_putchar(a + 48);
        return (0);
    } else {
        my_put_nbr(a / 10);
        my_putchar((a % 10) + 48);
    }
}
