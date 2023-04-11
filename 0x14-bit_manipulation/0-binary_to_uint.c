// #include <stdio.h>

unsigned int binary_to_uint(const char *binary_string)
{
    unsigned int decimal_value = 0;
    int index;

    /* if string is empty return 0 */
    if (!binary_string)
        return (0);

    /* return if the value is different to 0 or 1*/
    for (index = 0; binary_string[index] != '\0'; index++)
        if (binary_string[index]  != '0' && binary_string[index] != '1')
            return (0);

    /* converter array the number binary to int */
    for (index = 0; binary_string[index] != '\0'; index++)
    {
        decimal_value *= 2;
        if (binary_string[index] == '1')
            decimal_value += 1;
    }
    return (decimal_value);
}