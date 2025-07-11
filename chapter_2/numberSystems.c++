#include <stdio.h>
#include <cmath>

/* ok so i thought i'd be able to do this already but we are heading into pointers
and references sooo i need to erm read the next bit first
*/
enum class Number_systems : int
{
    decimal,
    binary,
    octonal,
    hexidecimal

};

int *convertToBinary(int x)
{
    int curr = x;
    int *bits = new int[8];
    int turn = 0;

    while (curr > 0)
    {
        int mod = curr % 2; // technically should be mod 2 times 2 lol

        if (mod)
        {
            bits[turn] = 1;
        }
        else
        {
            bits[turn] = 0;
        };

        curr = std::floor(curr / 2);
        turn++;
    };

    return bits;
};

struct Converter
{
    int target;
    Converter(int value)
    {
        int target = value;
    }

    unsigned long long int convertTo(Number_systems type)
    {

        switch (type)
        {
        case Number_systems::decimal:
        {
        }
        break;
        case Number_systems::binary:
        {
            int result = convertToBinary(target);
            return target;
        }
        break;
        case Number_systems::octonal:
        {
        }
        break;
        case Number_systems::hexidecimal:
        {
        }
        break;
        default:
        {
            printf("Oh no un-regonized number system!");
        }
        break;
        }
    }
};

int main()
{
    Converter numby{12};
    int res = numby.convertTo(Number_systems::binary);
    printf("the result is %d", res);
}