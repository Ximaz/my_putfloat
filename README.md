# MY_PUTFLOAT

`my_putfloat` is a C hand-made function which prints a float number into the termnial. To do so, there are three C files to compile together. The first one, `my_putchar.c`, contains a function called `my_putchar` which displays any character passed as paramter into the stdout. The second one, `my_put_nbr.c` contains the `my_put_nbr` function which displays any integer passed as paramter. The last one, `my_putfloat.c`, contains the `my_putfloat` function which displays a float passed as paramter.

# Explaination

The `my_putfloat` function takes a float parameter which represents a number to be displayed on the stdout. If the number is castable as integer, it only prints the number as an int. The second paramter of the function is another integer which represents the precision of the print. It's the number of digit the function has to display after the coma. If this number is equals to 0, it only prints the left side of the number.

# Example

In a C file containing a main function, past this code :
```c
extern int my_putfloat(float nb, int precision);

int main(void)
{
    float nb = 314.151;

    my_putfloat(nb, 3);
    return 0;
}
```
Then compile it with the `my_putchar.c`, `my_put_nbr.c` and `my_putfloat.c` files. It should print ` 314.151`.
