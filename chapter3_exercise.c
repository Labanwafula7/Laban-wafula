#include <stdio.h>

int main(void) {
    int start, end, increment, fahrenheit;
    printf("Enter the starting value: ");
    scanf("%d", &start);
    printf("Enter the ending value: ");
    scanf("%d", &end);
    printf("Enter the increment value: ");
    scanf("%d", &increment);

    fahrenheit = start;
    while (fahrenheit <= end) {
        printf("%4d degrees F = %4d degrees C\n", fahrenheit, (fahrenheit - 32) * 5 / 9);
        fahrenheit += increment;
    }
    return 0;
}
