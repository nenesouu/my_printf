/*
** EPITECH PROJECT, 2023
** my_printf
** File description:
** ptr
*/

#include "../headers/my.h"
#include "../headers/my_printf.h"

int handle_pointer(va_list args)
{
    void *ptr = va_arg(args, void *);
    int result;

    my_putstr("0x");
    result = my_display_base_long((long)ptr, "0123456789abcdef");
    return result + 2;
}
