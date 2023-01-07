#include <stdio.h>
#include <stdlib.h>

int calculate(int, int, int);

int main(int argc, char** argv)
{
    int upTo;
    int n0;
    int n1;
    if (argc == 4)
    {
        upTo = atoi(argv[1]);
        n0 = atoi(argv[2]);
        n1 = atoi(argv[3]);
    }
    else
    {
        printf("Up to: ");
        scanf("%d", &upTo);
        printf("n0: ");
        scanf("%d", &n0);
        printf("n1: ");
        scanf("%d", &n1);
    }

    for (int i = 2; i <= upTo; i++)
    {
        double num1 = calculate(i-1, n0, n1);
        double num2 = calculate(i, n0, n1);
        double result = num2 / num1;
        printf("%.0lf/%.0lf = %lf, ", num2, num1, result);
    }

}

int calculate(int n, int n0, int n1)
{
    if (n == 0)
        return n0;
    if (n == 1)
        return n1;
    return calculate(n-1, n0, n1) + calculate(n-2, n0, n1);
}