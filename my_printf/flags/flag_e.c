/*
** EPITECH PROJECT, 2023
** flag_e.c
** File description:
**  keviiiiii
*/

#include "../headers/my.h"
#include "../headers/my_printf.h"

int cas1_0(double n)
{
    int i = 0;
    int a = (int)n;

    for (; a < 1; i++) {
        n = n * 10.0;
        a = (int)n;
    }
    n = n + 0.0000001;
    float_low(n);
    my_putchar('e');
    my_putchar('-');
    if (i <= 9){
        my_putchar('0');
        my_put_nbr(i);
    } else {
        my_put_nbr(i);
    }
}

int e_fin(double n)
{
    int i = 0;
    int a = (int)n;

    n = n + 0.0000001;
    for (; a >= 10; i++) {
        if (a > 9) {
            n = n / 10.0;
            a = (int)n;
        }
    }
    float_low(n);
    my_putchar('e');
    my_putchar('+');
    if (i <= 9){
        my_putchar('0');
        my_put_nbr(i);
    } else
        my_put_nbr(i);
}

int flag_e(double n)
{
    int i = 0;
    int a = 0;

    if (n < 0) {
        my_putchar('-');
        n = n * -1.0;
    }
    a = (int)n;
    if (a == 0){
        cas1_0(n);
        return 0;
    }
    e_fin(n);
    return (0);
}

int handle_e_low(va_list args)
{
    double value = va_arg(args, double);

    flag_e(value);
    return 0;
}

int handle_e_upper(va_list args)
{
    double value = va_arg(args, double);

    flag_e(value);
    return 0;
}
