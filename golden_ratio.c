/*
A program for showing the golden ratio using the fibinacci sequence
Basically fib(x)/fib(x-1) will converge to roughly ~1.618
Takes either cmd line args or user input if none accepted
*/

#include <stdio.h>
#include <stdlib.h>

int fib(int);

int main(int argc, char** argv)
{
    int upTo;
    if (argc == 2)
        upTo = atoi(argv[1]);
    else
    {
        printf("Up to: ");
        scanf("%d", &upTo);
    }

    for (int i = 2; i <= upTo; i++)
    {
        double fib1 = fib(i);
        double fib2 = fib(i-1);
        double result = fib1 / fib2;
        printf("%.0lf/%.0lf = %lf, ", fib1, fib2, result);
    }

}

int fib(int n)
{
    if (n <= 1)
        return n;
    return fib(n - 1) + fib(n - 2);
}
