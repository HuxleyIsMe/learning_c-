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
        if (this->next)
        {
            this->next->previous = new_trooper;
        };
        next = new_trooper;
    };

    // 1 2
    // 1 next is 2
    // 1 previous is null
    // 2 next is null
    // 2 previous is 1
    // insert 3 before 2
    // 1 next = 3
    // 1 previous is null
    // 3 next = 2
    // 3 previous = 1
    // 2 next is null
    // 2 previous = 3

    void insert_before(Trooper *new_trooper)
    {

        printf("howdy \n");
        new_trooper->next = this;
        new_trooper->previous = this->previous;
        if (this->previous->next)
        {
            this->previous->next = new_trooper;
        }
        this->previous = new_trooper;
    }

    char prefix[2];
    short operating_number;
};

int main()
{
    Trooper trooper1, trooper2, trooper3, trooper4, trooper5; // initialize some troops
    trooper1.prefix[0] = 'N';                                 // ok this is frustrating why can i ot just ['B','Y'] or "BY"
    trooper1.prefix[1] = '1';
    trooper1.operating_number = 423;
    trooper1.insert_next(&trooper2);
    trooper2.prefix[0] = 'N'; // ok this is frustrating why can i ot just ['B','Y'] or "BY"
    trooper2.prefix[1] = '2';
    trooper2.operating_number = 223;
    trooper2.insert_next(&trooper3);
    trooper3.prefix[0] = 'N'; // ok this is frustrating why can i ot just ['B','Y'] or "BY"
    trooper3.prefix[1] = '3';
    trooper3.operating_number = 884;
    // lets mess with the order
    trooper4.prefix[0] = 'N';
    trooper4.prefix[1] = '4';
    trooper4.operating_number = 111;
    trooper2.insert_next(&trooper4);

    trooper5.prefix[0] = 'N';
    trooper5.prefix[1] = '5';
    trooper5.operating_number = 101;
    // bug happened here because i said trooper 2 insert before trooper 2
    trooper2.insert_before(&trooper5);

    for (Trooper *cursor = &trooper1; cursor; cursor = cursor->next)
    {
        printf("stormtrooper %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
    };

    for (Trooper *cursor = &trooper3; cursor; cursor = cursor->previous)
    {
        printf("stormtrooper %c%c-%d\n", cursor->prefix[0], cursor->prefix[1], cursor->operating_number);
    };
};