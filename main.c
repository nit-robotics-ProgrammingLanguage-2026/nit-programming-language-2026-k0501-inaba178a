#include <stdio.h>

int main(void)
{
    int x;
    scanf("%d", &x);
    if (0 <= x && x < 10)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
