#include <cstdio>

struct Kebab
{
    char name[28];
};

// part a
void print_names(Kebab *kebabs, size_t n_kebabs)
{
    for (size_t i = 0; i < n_kebabs; i++)
    {
        printf("%s Kebab \n", kebabs[i].name);
    };
}

int main()
{
    Kebab dinner[] = {"Magali", "Falafel", "scharf kartoffel"};
    // part b
    print_names(dinner, sizeof(dinner) / sizeof(Kebab));
}

/**
 *
 * If we look at part b we are passing in the whole array, so typically if we were to do this in c++
 * we mean we are passing the original object.....
 * but in part a we see the function declaration says Kebab *kebab, it has turned into a pointer, this is array decay.
 *
 * C++ didn't want to pass arrays around so behind the scenes it will convert this into a pointer, this is why we must pass also the length of the array.
 *
 * Arrays have a behaviour of returning only their first value if called directly, therefore we must iterate through the array to get all of the values.
 */