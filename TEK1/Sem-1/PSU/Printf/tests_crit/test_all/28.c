/*
** EPITECH PROJECT, 2019
**  criterion_test
** File description:
** yo
*/

#include <criterion/criterion.h>
#include <criterion/redirect.h>
#include <stdarg.h>
#include "../../inc/my.h"

Test(my_str_isupper, should_print_1_into_stdout)
{
    int i = 0;
    cr_redirect_stdout();
    i  = my_str_isupper("");
    cr_assert_eq(i, 1);
}

Test(my_str_isupper, should_print_Hello_into_stdout)
{
    int i = 0;
    cr_redirect_stdout();
    i = my_str_isupper("HELLO");
}

Test(my_str_isupper, should_print_non_printable_char_into_stdout)
{
    int i = 0;
    cr_redirect_stdout();
    i = my_str_isupper("a");
    cr_assert_eq(i, 0);
}