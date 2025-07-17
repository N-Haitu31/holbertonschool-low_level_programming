#include <stdarg.h>
#include <stdio.h>

typedef void (*print_fn)(va_list args);

void print_char(va_list args)
{
    char c = va_arg(args, int);
    printf("%c", c);
}

void print_int(va_list args)
{
    int num = va_arg(args, int);
    printf("%d", num);
}

void print_float(va_list args)
{
    double f = va_arg(args, double);
    printf("%f", f);
}

void print_string(va_list args)
{
    char *s = va_arg(args, char *);
    if (s == NULL)
        s = "(nil)";
    printf("%s", s);
}

print_fn print_functions[] = {print_char, print_int, print_float, print_string};
char types[] = {'c', 'i', 'f', 's', '\0'};

void print_all(const char *const format, ...)
{
    va_list args;
    int i = 0;
    int j = 0;
    char *separator = "";

    va_start(args, format);

    while (format[i] != '\0')
    {
        j = 0;
        while (types[j] != '\0')
        {
            if (format[i] == types[j])
            {
                printf("%s", separator);
                print_functions[j](args);
                separator = ", ";
                break;
            }
            j++;
        }
        i++;
    }

    va_end(args);
    printf("\n");
}
