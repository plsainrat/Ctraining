#include <stdio.h>


int globalI=10;
int globalBss;
    
int func1(int a) {
    return a*a;
}

void main()
{
    int a = 10;
    int b = func1(a);
}
