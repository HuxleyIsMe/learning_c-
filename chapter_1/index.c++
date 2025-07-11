#include <stdio.h>
/* The includes is refereed to as a header */
int sum(int a, int b)
{
    return a + b;
}

int absolute_value(int x)
{
    if (x >= 0)
    {
        return x;
    }

    return 0 - x;
}

int main()
{
    int test_a = 4;
    int test_b = -8;
    printf("the absolute number for test_a is %d and the absolute number for test_b is %d, there sum is %d", absolute_value(test_a), absolute_value(test_b), sum(test_a, test_b));
}

/* Interesting return zero is explicit for  main so we should be ok */

/*
    What i find very interesting is running with the debugger attached,
    we can see the actual registers in use and there values
    very cool

    The book also mentions we have to buy the standards which isnt so cool
    but heres a link to drafts: https://github.com/cplusplus/draft

    They also have this podcast: https://cppcast.com/rust_lt_eq_gt_cpp/
*/