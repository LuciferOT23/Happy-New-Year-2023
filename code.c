#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BOLDGREEN "\033[1m\033[32m"
#define BOLDWHITE "\033[1m\033[37m"
#define BOLDBLUE "\033[1m\033[34m"
#define ORANGE "\033[1m\033[93m"
#define Red "\033[1m\033[31m"
#define Yellow "\033[1m\033[33m"
#define Purple "\033[0;35m"

// For Delay Read the code from txt

void delay()
{
    for (int i = 0; i < 10000; i++)
    {
        for (int j = 0; j < 100; j++)
        {
        }
    }
}

int main()
{
    const char *colors[] = {BOLDGREEN, Purple, 
    ORANGE, Red, BOLDWHITE, Yellow, BOLDBLUE};

    FILE *ptr1, *ptr2, *ptr3;

    char a, b, c;

    ptr1 = fopen("Happy.txt", "r");
    ptr2 = fopen("New.txt", "r");
    ptr3 = fopen("TwoZero.txt", "r");

    a = fgetc(ptr1);
    b = fgetc(ptr2);
    c = fgetc(ptr3);

    while (a != EOF)
    {
        delay();
        printf("%c%s", a, colors[0]);
        a = fgetc(ptr1);
    }

    while (b != EOF)
    {
        delay();
        printf("%c%s", b, colors[2]);
        b = fgetc(ptr2);
    }

    while (c != EOF)
    {
        delay();
        printf("%c%s", c, colors[3]);
        c = fgetc(ptr3);
    }

    return 0;
}