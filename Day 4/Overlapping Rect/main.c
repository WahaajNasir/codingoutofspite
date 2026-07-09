#include <stdio.h>
#include <stdbool.h>

struct Point
{
    int x;
    int y;
};

// Pass pointers instead of creating copies
bool doOverlap(struct Point *l1, struct Point *r1, struct Point *l2, struct Point *r2)
{
    // Is far right coord of one rectangle to the left of the other
    if((l1->x > r2->x) || (l2->x > r1->x))
    {
        return false;
    }

    if ((r1->y > l2->y) || (r2->y > l1->y))
    {
        return false;
    }

    return true;
}

int main()
{
    struct Point l1 = {0, 10};
    struct Point r1 = {10, 0};

    struct Point l2 = {0, 20};
    struct Point r2 = {11, 0};

    if(doOverlap(&l1, &r1, &l2, &r2))
    {
        printf("Rectangles do overlap");
    }
    else
    {
        printf("Rectangles do not overlap");
    }

    return 0;
}