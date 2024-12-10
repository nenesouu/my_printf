/*
** EPITECH PROJECT, 2023
** flag f
** File description:
** flag_f
*/

#include "../headers/my.h"
#include "../headers/my_printf.h"

int handle_flag_b(va_list args)
{
    unsigned int value = va_arg(args, unsigned int);

    return my_display_base_long(value, "01");
}
