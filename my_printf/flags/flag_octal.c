/*
** EPITECH PROJECT, 2023
** octal
** File description:
** flag_octal
*/

#include "../headers/my.h"
#include "../headers/my_printf.h"

int my_put_octal(int n)
{
    int octal_num[100];
    int i = 0;
    int result;

    while (n != 0) {
        octal_num[i] = n % 8;
        n = n / 8;
        i++;
    }
    result = 0;
    for (int j = i - 1; j >= 0; j--) {
        result = result + my_putchar('0' + octal_num[j]);
    }
    return result;
}

int handle_octal(va_list args)
{
    return my_put_octal(va_arg(args, int));
}
