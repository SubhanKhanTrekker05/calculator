#include <stdio.h>

float add(float x,float y) {
    return x + y;
}

float subtract(float x,float y) {
    return x-y;
}

float multiply(float x,float y) {
    return x*y;
}

float divide(float x,float y) {
    if (y==0) {
        printf("Error:Division by zero is undefined.\n");
        return 0;
    }
    return x/y;
}

void calculator() {
    int choice;
    float num1,num2,result;

    printf("Select operation:\n");
    printf("1.Add\n");
    printf("2.Subtract\n");
    printf("3.Multiply\n");
    printf("4.Divide\n");

    printf("Enter choice(1/2/3/4):");
    scanf("%d", &choice);

    if (choice<1||choice>4) {
        printf("Invalid choice!\n");
        return;
    }

    printf("Enter first number: ");
    scanf("%f",&num1);
    printf("Enter second number: ");
    scanf("%f",&num2);

    switch (choice){
        case 1:
            result=add(num1,num2);
            printf("Result:%.2f\n",result);
            break;
        case 2:
            result=subtract(num1,num2);
            printf("Result:%.2f\n",result);
            break;
        case 3:
            result=multiply(num1,num2);
            printf("Result:%.2f\n",result);
            break;
        case 4:
            result=divide(num1,num2);
            printf("Result:%.2f\n",result);
            break;
    }
}

int main(void){
    calculator();
    return 0;
}
