#include <stdio.h>
#include <stdlib.h>

int main()
{
    float *a, sum = 0, avg; // a is a pointer to float
    int n, i;               // n is an integer variable

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    a = (float *)malloc(n * sizeof(float));
    printf("Enter numbers: ");

    for (i = 0; i < n; i++)
    {
        scanf("%f", (a + i));
        sum = sum + *(a + i);
    }

    avg = sum / n;

    printf("Sum: %f\n", sum);
    printf("Average: %f\n", avg);
    free(a);
}