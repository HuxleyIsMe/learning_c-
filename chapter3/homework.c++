#include <cstdio>
#include <stdexcept>

// come back and neaten this
void write_to(char *arr, const int &index, const char &value)
{

    if (index < 0)
    {
        throw std::invalid_argument("received negative index");
    };

    int elements_in_x = sizeof(arr) / sizeof(arr[0]);

    if (index > (elements_in_x - 1))
    {
        throw std::invalid_argument("out of bounds");
    };

    int val = arr[1];

    arr[index] = value;
}

char *read_from(char *arr, const int &index)
{

    if (index < 0)
    {
        throw std::invalid_argument("received negative value");
    };

    int elements_in_x = sizeof(arr) / sizeof(arr[0]);

    if (index > (elements_in_x - 1))
    {
        throw std::invalid_argument("out of bounds");
    };

    char *res_ptr = &arr[index];

    return res_ptr;
}

int main()
{
    char lower[] = "abc?e";
    char upper[] = "ABC?E";
    char *upper_ptr = upper;

    int index = 3;

    lower[index] = 'd';
    upper_ptr[3] = 'D';

    char letter_d = lower[3];
    char letter_D = upper_ptr[3];

    printf("lower: %s\nupper %s", lower, upper);

    // had bug here where 1 lit up because i had marked it as a reference value
    // while it is the compiler was upset because it had really looked forward to
    // changing this value to manage expectations i had to specifiy in the function
    // this was a const reference so make your own do not update.

    /// ah bug numero uno was that i used "" not '' when referring to a single string
    // it was inelegant forgive c gods
    // 'i' "ok" '?'
    // https://stackoverflow.com/questions/14544043/operand-types-are-incompatible-char-and-const-char
    // "x" = const char *
    // 'x' = char
    write_to(lower, 1, 'J');
    char *res = read_from(upper, 3);

    printf("lower: %s\nupper %s", lower, upper);

    // bug three again these pesky strings!
    //%c prints a single char %s prints a bunch i was using the wrong one then doubting my pointing!
    printf("boy does this work? %c", *res);

    // write_to(lower, 8, 'K'); // hehe this will throw the exception!
};

// add read_from and write_to functions for lower and upper to allow safe manipulations
// they should perform bound checks.