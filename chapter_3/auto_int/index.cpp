/*
ah so, in C++ der Compiler wiesse dem value wann compiled.
it is sometimes smart enough to know which values it needs by whats been initailized
*/

#include <cstdio>

int main()
{
    auto original = 100;
    auto &original_ref = original;              // reference this means * & its like pointing to the original
    printf("Original: %d\n", original);         // 100
    printf("Original ref: %d\n", original_ref); // 100

    auto new_value = 200;
    original_ref = new_value;
    printf("original value: %d\n", original); // 100 <--- oops this one i got wrong....
    printf("new value: %d\n", new_value);     // 200
    printf("original ref: %d\n", new_value);  // 200
}
/**
 *
 * hmmm okay so we say hey number
 * make reference the reference is pointing to a number not an address so should be aight?
 *
 *
 * Ok so i made a mistake here.....
 *
 * essentially as we updated a reference, we updated the real value not just a copy of it...
 * that was unexpected to me.
 *
 * its the same in JS like
 *i think old js did this...
 * I cant reproduce it but i remember that objects would go strange because heap and reference situations
 * so side effects were common but it doesnt seem to happen now
 *
 */
