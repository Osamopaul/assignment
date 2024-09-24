#include <stdio.h>

int main() {
    char a = 'k';
    char name[50] = {}; 
    int age;
    float salary;
    double area;

    printf("Enter a character: ");
    scanf(" %c", &a);

    printf("Enter your name: ");
    scanf("%s", name);
    printf("Enter age: ");
    scanf("%d", &age);

    printf("Enter the salary: ");
    scanf("%f", &salary);

    printf("Enter the area: ");
    scanf("%lf", &area);

    printf("The character is \t %c \n", a);
    printf("The name (string) is %s \n", name);
    printf("The age (int) is %d \n", age);
    printf("The salary (float) is %.2f \n", salary);
    printf("The area (double) is %.4lf \n", area);

    return 0;
}
