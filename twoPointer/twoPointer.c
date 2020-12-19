#include <stdio.h>


int main(int argc, char* argv[])
{
    // suppress warnings
    (void)argc; (void)argv;

    int x = 100;
    int *p1 = &x;
    int **p2 = &p1;

    printf("&x = %p\n", &x);
    printf("&p1 = %p, p1 = %p\n", &p1, p1);
    printf("&p2 = %p, p2 = %p\n", &p2, p2);    

    printf("**p2 = %d, *p = %d\n", **p2, *p1);

  return 0;
}
