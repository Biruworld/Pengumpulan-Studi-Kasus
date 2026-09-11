#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a;
    int b;
    int c;
    int d;
    int e;
    
    
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);
    scanf("%d", &e);
    
    c = a + b;
    d = a - b;
    e = a * b;
    
    if (c >= d && c >= e)
    {
        printf("+");
    }
    else if (d >= c && d >= e)
    {
        printf("-");
    }
    else if (e >= d && e >= d)
    {
        printf("*"); 
    }   
    return 0;
}

