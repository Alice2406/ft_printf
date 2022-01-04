
void ft_char(char formatpoint, va_list ap)
{
    char c;
    char *str;

    if (formatpoint == 'c')
    {
        c = (char)va_arg(ap, char);
        ft_putchar(c);
    }
    else if (formatpoint == 's')
    {
        str = (char *)va_arg(ap, char *);
        ft_putstr(str);
    }
    else if (formatpoint == '%')
        ft_putchar('%');
}