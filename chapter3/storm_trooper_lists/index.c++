#include <cstdio>
/*
Oh we be making linked lists in C++, here we have a bunch of storm troopers
*/

/**
 * whats happening here?
 *
 *  new struct called Trooper
 * it has an next member that just ?
 * we have an insert_After member that will take a
 * pointer (address to a a Trooper)
 * the new address will have a next member we set this
 * equal to our next. ?
 *
 * prefix? 2 char
 *
 * ok the prefix and operating numb are just for funs
 * they are values like trooper TK-549 etc
 *
 */
struct Trooper
{
    Trooper *next{};
    Trooper *previous{};

    void insert_next(Trooper *new_trooper)
    {
        // its a swapperoo but like think through the iterations
        printf("what even is the next here %p \n", next);
        new_trooper->next = next; // what happens when next is empty?
        new_trooper->previous = this;

        next = new_trooper;
    };
    // next->previous = new_trooper;

    void insert_previous(Trooper *new_trooper)
    {
        new_trooper->previous = previous;
        previous = new_trooper;
    }

    char prefix[2];
    short operating_number;
};

int main()
{
    Trooper trooper1, trooper2, trooper3, trooper4; // initialize some troops
    trooper1.prefix[0] = 'B';                       // ok this is frustrating why can i ot just ['B','Y'] or "BY"
    trooper1.prefix[1] = 'Z';
    trooper1.operating_number = 423;
    trooper1.insert_next(&trooper2);
    trooper2.prefix[0] = 'L'; // ok this is frustrating why can i ot just ['B','Y'] or "BY"
    trooper2.prefix[1] = 'D';
    trooper2.operating_number = 223;
    trooper2.insert_next(&trooper3);
    trooper3.prefix[0] = 'P'; // ok this is frustrating why can i ot just ['B','Y'] or "BY"
    trooper3.prefix[1] = 'Y';
    trooper3.operating_number = 884;
    // lets mess with the order
    trooper4.prefix[0] = 'L';
    trooper4.prefix[1] = 'Y';
    trooper4.operating_number = 111;
    trooper2.insert_next(&trooper4);

    for (Trooper *cursor = &trooper1; cursor; cursor = cursor->next)
    {
        printf("stormtrooper %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
    };
};