#include < stdio.h >
#include < math.h >

int main()
{
    int num, first, last, count;

    printf("Enter an integer number\n");
    scanf("%d", &num);

    count = log10(num);

    first = num / pow(10, count);
    last  = num % 10;

    printf("First Digit = %d\nLast Digit = %d\n", first, last);

    return 0;
}