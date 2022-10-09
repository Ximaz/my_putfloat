extern void my_putchar(char c);
extern int my_put_nbr(int nb);

static float trim_nbr(float nb)
{
    while (nb > 0 && nb >= 1)
        nb--;
    return nb;
}

void my_putfloat(float nb, int precision)
{
    int i = 0;

    my_put_nbr(nb);
    if ((int) nb == nb || precision == 0)
        return;
    my_putchar('.');
    for (; i < precision; i++)
        nb *= 10;
    for (; i > 0; i--) {
        my_put_nbr((int) nb % 10);
        nb /= 10;
    }
}
