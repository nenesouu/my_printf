/*
** EPITECH PROJECT, 2023
** x uppercase
** File description:
** flag_x_upper
*/


#include "../headers/my.h"
#include "../headers/my_printf.h"

int display_x_upp(unsigned int nb, int base)
{
    int counter = 0;
    char hex_digits[] = "0123456789ABCDEF";

    if (nb > 0) {
        counter = counter + display_x_upp(nb / base, base);
        my_putchar(hex_digits[nb % base]);
        counter++;
    }
    return counter;
}

void handle_x_upp(va_list args)
{
    unsigned int num = va_arg(args, unsigned int);

    display_x_upp(num, 16);
}
