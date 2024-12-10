/*
** EPITECH PROJECT, 2023
** B-CPE-100-STG-1-1-cpoolday12-iness.el-atouani
** File description:
** my
*/

#ifndef MY_H_
    #define MY_H_

    #include <stdarg.h>

int my_putchar(char c);
int my_putstr(char const *str);
int get_digit_count(long nb, int base);
void print_special_cases(long nb, const char *str);
void print_base_digits(long nb, const char *str, int base);
void print_base_long(long nb, const char *str, int base);
int handle_octal(va_list args);
int my_put_octal(int n);
int handle_pointer(va_list args);
int display_u(unsigned long int nb);
int handle_u(va_list args);
int display_x_upp(unsigned int nb, int base);
void handle_x_upp(va_list args);
int handle_char(va_list args);
int handle_int(va_list args);
int handle_string(va_list args);
int handle_percent(va_list args);
void handle_x(va_list args);
int my_put_nbr(int nb);
int my_display_base_long(long nb, const char *str);
char *my_strcpy(char *dest, char const *src);
int my_strlen(char const *str);
int handle_flag_b(va_list args);
int handle_float(va_list args);
int float_low(double n);
int flag_e_g(double n);
int handle_float_upper(va_list args);
int handle_e_low(va_list args);
int flag_e(double n);
int handle_e_upper(va_list args);
int handle_e_low(va_list args);
int flag_g(double n);
int handle_g_upper(va_list args);
int handle_g_low(va_list args);


#endif /* !MY_H_ */
