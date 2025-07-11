#include <cstdio>

int main()
{
    int gettysburg{};
    printf("gettysburg: %d\n", gettysburg);
    int *gettysburg_address = &gettysburg;
    printf("&gettysburg: %p\n", gettysburg_address);
    /*  update value */
    // gettysburg_address = 43122; // this fails, because we said that this
    //  should be an address due to the &, we are trying to write over our address to a number
    //  we an number, outrageous
    /* This works and we still have the same address lets check the original */
    gettysburg = 458283;
    printf("gettysburg: %d\n", gettysburg);
    printf("&gettysburg: %p\n", gettysburg_address);
    /* Ok to dereference our address we can */

    *gettysburg_address; // dont seem to do anything?
    printf("gettysburg: %d\n", gettysburg);
    printf("&gettysburg: %p\n", gettysburg_address);

    *gettysburg_address = 564322; // gets the value and updates it
    printf("gettysburg: %d\n", gettysburg);
    printf("&gettysburg: %p\n", gettysburg_address);

    int x = 5;
    int *ptr_x = &x;
    int *cp_ptr_x = ptr_x;

    /// ooo we can keep pointing indefinitely with ****

    int **point_to_point = &ptr_x;

    printf("pointer x value %p and copy is %p and pointer pointer is %d", ptr_x, cp_ptr_x, point_to_point);
}

/*
so whats fun is the address changes each time not the value
this is due to a behind the scenes security feature that just
kind shifts things around for ya
*/