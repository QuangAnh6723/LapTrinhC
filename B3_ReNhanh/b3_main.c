#include <stdio.h>

int main()
{
    // switch case
    int i = 0;
    printf("nhap vao 10 hoac 20: ");
    scanf("%d", &i);

    switch (i)
    {
        case 10:
            printf("i is 10\n");
            break;
        case 20:
            printf("i is 20\n");
            break;
        default:
            printf("i is neither 10 nor 20\n");
    }

    return 0;
}