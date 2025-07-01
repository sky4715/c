#include <stdio.h>

int main(void)
{
    int a[] = {10, 20, 30, 40, 50};

    printf("a = %u\n", a);
    printf("&a[0] = %u\n", *&a[0]);
    printf("&a[1] = %u\n", *&a[1]);
    printf("&a[2] = %u\n", *&a[2]);
    printf("&a[3] = %u\n", *&a[3]);
    printf("&a[4] = %u\n", *&a[4]);

    printf("\n+++++++++++++++++++++++++++\n");
    printf("a + 0 = %u\n", *(a + 0));
    printf("a + 1 = %u\n", *(a + 1));
    printf("a + 2 = %u\n", *(a + 2));
    printf("a + 3 = %u\n", *(a + 3));
    printf("a + 4 = %u\n", *(a + 4));

    printf("\n+++++++++++++++++++++++++++\n");
    printf("*a = %d\n", *a);
    printf("*(a+1) = %d", *(a + 1));

    return 0;
}