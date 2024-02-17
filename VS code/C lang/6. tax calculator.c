#include<stdio.h>

int main() {
    float salary, tempsal1, tempsal2, tax;

    // Input salary to calculate taxes
    printf("Input your salary: ");
    scanf("%f", &salary);

    // Calculate taxes
    if (salary <= 10.0) {
        tax = salary * 0.1;  // 10% of the salary
    } 
    else if (salary > 10.0 && salary <= 15.0) {
        tempsal1 = salary - 10;
        tax = (10 * 0.1) + (tempsal1 * 0.15);  // 10% on the initial 10, 15% on the remaining
    } 
    else if (salary > 15.0 && salary <= 20.0) {
        tempsal1 = salary - 10;
        tempsal2 = salary - 15;
        tax = (10 * 0.1) + (5 * 0.15) + (tempsal2 * 0.2);  // 10% on the initial 10, 15% on the next 5, 20% on the remaining
    }

    printf("Your taxes are %f, and the amount to be paid is %f\n", tax, salary + tax);

    return 0;
}
