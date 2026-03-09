#include <stdio.h>

int main() {
    float s1 = 72.5, s2 = 68.0, s3 = 81.0, s4 = 59.5, s5 = 77.0;
    float total = s1 + s2 + s3 + s4 + s5;
    float percent = total / 5;

    char grade =
        (percent >= 75) ? 'A' :
        (percent >= 60) ? 'B' :
        (percent >= 45) ? 'C' : 'F';

    printf("Marks: %.2f %.2f %.2f %.2f %.2f\n", s1, s2, s3, s4, s5);
    printf("Total: %.2f\n", total);
    printf("Percentage: %.2f\n", percent);
    printf("Grade: %c\n", grade);

    return 0;
}