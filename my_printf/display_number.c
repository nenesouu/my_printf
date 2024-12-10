/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** display_number
*/

#include <stdio.h>
#include "headers/my.h"

int get_digit_count(long nb, int base)
{
    int count = 0;
    long tmp = nb;

    while (tmp != 0) {
        tmp = tmp / base;
        count++;
    }
    return count;
}

void print_special_cases(long nb, const char *str)
{
    if (nb < 0) {
        my_putchar('-');
        nb = -nb;
    }
    if (nb == 0) {
        my_putchar(str[0]);
    }
}

void print_base_digits(long nb, const char *str, int base)
{
    int count = get_digit_count(nb, base);
    long divisor;
    int digit;

    while (count > 0) {
        divisor = 1;
        for (int i = 1; i < count; i++) {
            divisor = divisor * base;
        }
        digit = nb / divisor;
        my_putchar(str[digit]);
        nb -= digit * divisor;
        count--;
    }
}

void print_base_long(long nb, const char *str, int base)
{
    print_special_cases(nb, str);
    if (nb != 0) {
        print_base_digits(nb, str, base);
    }
}

int my_display_base_long(long nb, const char *str)
{
    int base = my_strlen(str);

    print_base_long(nb, str, base);
    return 0;
}
