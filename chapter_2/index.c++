#include <stdio.h>
#include <cstdint>
/*
    Fundamental types / primitive /built in

    The biggest strength of specifiying the types is a clearly defining what is needed from our system,
    it is not vague, it knows what it needs i.e. i will reserve 10 seat table for my friends for dinner,
    we will have 3 vegan options etc etc instead of kinda winging it like looser languages who might be
    like oh yeah we will go in here only to find there may not be enough tables and your friends are stuck
    with there eight serving of patatas bravas - granted you can still make this mistake we c++ but
    being this anal and specific is super performant it also means its easier for other languages to work
    with our needs we have specified 10 seats not just some seats.

    ok int types are the same as rust. we use <cstdint> library.  to allow us to enforce the size.

    Literals

    THIS IS A HARDCODED VALUE

    binary - prefix 0b
    octal - prefix 0
    decimal. - default
    hexadecimal. - prefix 0x
*/

void printOutNumberTypes()
{
    unsigned short a = 0b10101010;
    printf("%hu\n", a);
    int b = 0123;
    printf("%d\n", b);
    unsigned long long d = 0xFFFFFFFFFFFFFFFF;
    printf("%llu\n", d);
}

/* the class keyword enables the enum to be used lower down */
enum class Operators : int
{
    Add,
    Subtract,
    Multiply,
    Divide
};

/** Ok structs are interesting lil beings...
 * I thought they were just objects but there like mini basic classes
 * they can have a constructor, to work as a constructor they must
 * have the same name as their parent
 * they dont return types
 *
 *
 */
struct Calculator
{
    Operators operand;
    Calculator(Operators op)
    {
        operand = op;
    }

    int calculate(int a, int b)
    {

        switch (operand)
        {
        case Operators::Add:
        {
            return a + b;
        }
        break;
        case Operators::Subtract:
        {
            return a - b;
        }
        break;
        case Operators::Multiply:
        {
            return a * b;
        }
        break;
        case Operators::Divide:
        {
            return a / b;
        }
        break;
        default:
        {
            printf(" unknown operand!");
        }
        }
    }
};

int main()
{

    printOutNumberTypes();
    Calculator Casio{Operators::Add};
    printf("adding calculator %d", Casio.calculate(4, 6));
}
