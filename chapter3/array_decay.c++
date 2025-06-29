#include <cstdio>
/* Like the rest of us arrays decay */

struct Kebab
{
    char name[28];
};

void print_names(Kebab *kebabas, size_t n_kebabs)
{
    for (size_t i = 0; i < n_kebabs; i++)
    {
        printf("%s Kebab \n", kebabas[i].name);
    };
}

int main()
{
    Kebab dinner[] = {"Magali", "Falafel", "scharf kartoffel"};
    print_names(dinner, sizeof(dinner) / sizeof(Kebab));
}