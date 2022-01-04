
void    ft_baseten(char formatpoint, va_list ap)
{
    int nb;
    char *str;
    unsigned int nbr;

    if (formatpoint == 'd')
    {
        nb = (int)va_arg(ap, int);
        str = ft_itoa(nb);
        ft_putstr(str);
    }
    if (formatpoint == 'u')
    {
        nbr = (unsigned int)va_arg(ap, unsigned int);
        str = ft_itoa(nbr);
        ft_putstr(str);
    }
}