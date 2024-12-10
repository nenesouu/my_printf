/*
** EPITECH PROJECT, 2023
** flag_g.c
** File description:
** 2ème fois que je le refais jpp de kevvvvviiiiiiiiiiiiiiiiiiiiiii
*/


#include "../headers/my.h"
#include "../headers/my_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

static int len_nbr(int n)
{
    int i = 0;

    while ((n / 10) > 0) {
        n /= 10;
        i++;
    }
    return (i);
}

double cas_n(double n)
{
    if (n < 0) {
        my_putchar('-');
        n = n * -1;
    }
    return n;
}

int flag_f_pour_g(double n, int entier, int i, int compteur)
{
    n = cas_n(n);
    entier = n;
    while (n / i > 1)
        i *= 10;
    my_put_nbr(entier);
    if (i < 1e6)
        my_putchar('.');
    n = n - entier;
    for (; n >= 0 && i <= 1e5; i *= 10){
        n = n * 10;
        entier = n;
        if (compteur == 5 && (n - (int)n) * 10 >= 5 && (n - (int)n) * 10 > 0)
            n++;
        my_put_nbr(n);
        n = n - entier;
        compteur++;
    }
}

int flag_g(double n)
{
    if (n < 1000000 && n > -1000000) {
        return flag_f_pour_g(n, 0, 1, 0);
    }
    if (len_nbr(n) == 6) {
        return my_put_nbr(n);
    }
    if (n > 1000000 || n < -1000000) {
        return flag_e(n);
    }
}

int handle_g_low(va_list args)
{
    double value = va_arg(args, double);

    flag_g(value);
    return 0;
}

int handle_g_upper(va_list args)
{
    double value = va_arg(args, double);

    flag_g(value);
    return 0;
}
