/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** flag_x
*/

#include "../headers/my.h"
#include "../headers/my_printf.h"

int display_x(unsigned int nb, int base)
{
    int counter = 0;
    char hex_digits[] = "0123456789abcdef";

    if (nb > 0) {
        counter = counter + display_x(nb / base, base);
        my_putchar(hex_digits[nb % base]);
        counter++;
    }
    return counter;
}

void handle_x(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);

    display_x(num, 16);
}
