/*
** EPITECH PROJECT, 2023
** main flags
** File description:
** main_flags
*/

#include "my.h"
#include <stdarg.h>
#include "headers/my.h"

int handle_char(va_list args)
{
    return my_putchar(va_arg(args, int));
}

int handle_int(va_list args)
{
    return my_put_nbr(va_arg(args, int));
}

int handle_string(va_list args)
{
    return my_putstr(va_arg(args, const char *));
}

int handle_percent(va_list args)
{
    (void)args;
    return my_putchar('%');
}
