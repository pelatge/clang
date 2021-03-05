#include <stdio.h>
#include <ctype.h>

int main()
{
    int x = 'd';
    int y = isalnum(x);
    printf("%d",y);
    return 0;
}