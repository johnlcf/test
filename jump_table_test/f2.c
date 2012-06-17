#include <stdlib.h>
#include <stdio.h>

void zero()  { printf("0"); }
void one()   { printf("1"); }
void two()   { printf("2"); }
void three() { printf("3"); }
void four()  { printf("4"); }

void foo(unsigned long i) {
    switch (i) 
    {
        case 0:
            zero();
            break;
        case 1:
            one();
            break;
        case 2:
            two();
            break;
        case 3:
            three();
            break;
        case 4:
            four();
            break;
    }
}

int main()
{
    int i;
    for (i=0; i<5000000; i++)
    {
        foo(0);
        foo(1);
        foo(2);
        foo(3);
        foo(4);
    }
}
