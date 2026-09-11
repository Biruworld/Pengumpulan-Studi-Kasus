#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int c;
    //scanf("%d, "%d", "%d", &a, &b, &c);
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    
    if (a-b==c)
    {
        printf("-");
    }
    else if (a+b==c)
    {
        printf("+");
    }
    else if (a*b==c)
    {
        printf("*");
    }
    return 0;
}

