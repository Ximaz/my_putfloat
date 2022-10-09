#include <limits.h>

extern int my_putchar(char c);

int my_put_nbr(int nb)
{
    if (nb >= 0 && nb < 10) {
        my_putchar(nb + '0');
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        if (nb > INT_MIN)
            return my_put_nbr(-nb);
        my_put_nbr(-(nb / 10));
        return my_put_nbr(-(nb % 10));
    }
    my_put_nbr(nb / 10);
    return my_put_nbr(nb % 10);
}
