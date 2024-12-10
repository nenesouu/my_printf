/*
** EPITECH PROJECT, 2023
** flag u
** File description:
** flag_u
*/

#include "../headers/my.h"
#include "../headers/my_printf.h"

int display_u(unsigned long int nb)
{
    int counter = 0;

    if (nb > 9) {
        counter = counter + display_u(nb / 10);
    }
    my_putchar(nb % 10 + '0');
    counter++;
    return counter;
}

int handle_u(va_list args)
{
    unsigned int value = va_arg(args, unsigned int);

    return display_u(value);
}
