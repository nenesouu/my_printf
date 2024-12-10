/*
** EPITECH PROJECT, 2023
** B-CPE-101-STG-1-1-myprintf-iness.el-atouani
** File description:
** flag_f
*/


#include "../headers/my.h"
#include "../headers/my_printf.h"

int float_low(double n)
{
    int entier = (int)n;

    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    my_put_nbr(entier);
    my_putchar('.');
    entier = (int)n;
    n = n - entier;
    for (int i = 0; i < 6; i++){
        n = n * 10;
        entier = (int)n;
        n = n - entier;
        my_put_nbr(entier);
    }
}

int handle_float(va_list args)
{
    double value = va_arg(args, double);

    float_low(value);
    return 0;
}

int handle_float_upper(va_list args)
{
    double value = va_arg(args, double);

    float_low(value);
    return 0;
}
