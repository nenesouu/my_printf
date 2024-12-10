/*
** EPITECH PROJECT, 2023
** B-CPE-101-STG-1-1-miniprintf-iness.el-atouani
** File description:
** main
*/

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "my.h"
#include "my_printf.h"

int all_flags(char s, va_list args)
{
    struct flagf specs[] = {
        {'c', handle_char}, {'d', handle_int},
        {'i', handle_int}, {'s', handle_string},
        {'%', handle_percent}, {'o', handle_octal},
        {'p', handle_pointer}, {'u', handle_u},
        {'x', handle_x}, {'X', handle_x_upp},
        {'b', handle_flag_b}, {'f', handle_float},
        {'F', handle_float_upper}, {'e', handle_e_low},
        {'E', handle_e_upper}, {'g', handle_g_low},
        {'G', handle_g_upper}
    };

    for (int i = 0; i < sizeof(specs) / sizeof(specs[0]); i++) {
        if (s == specs[i].specifier) {
            return specs[i].handler(args);
        }
    }
    return my_putchar('%') + my_putchar(s);
}

int my_printf(const char *format, ...)
{
    int result = 0;
    va_list args;

    va_start(args, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%' && format[i + 1] != '\0') {
            result = result + all_flags(format[i + 1], args);
            i++;
        } else {
            result = result + my_putchar(format[i]);
        }
    }
    va_end(args);
    return result;
}
