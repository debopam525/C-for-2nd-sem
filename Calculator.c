//CALCULATOR PROGRAM IN C
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a,b,c,choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    while(1)
    {
        printf("MENU OPTIONS \n");
        printf("**************************************");
        printf("\n1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Modulus\n");
        printf("6. Exit\n");
        printf("**************************************\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                c = a + b;
                printf("Addition: %d + %d = %d\n", a, b, c);
                break;
            case 2:
                c = a - b;
                printf("Subtraction: %d - %d = %d\n", a, b, c);
                break;
            case 3:
                c = a * b;
                printf("Multiplication: %d * %d = %d\n", a, b, c);
                break;
            case 4:
                if (b != 0) {
                    float result = (float)a / b;
                    printf("Division: %d / %d = %.2f\n", a, b, result);
                } else {
                    printf("Error: Division by zero is not allowed.\n");
                }
                break;
            case 5:
                if (b != 0) {
                    c = a % b;
                    printf("Modulus: %d %% %d = %d\n", a, b, c);
                } else {
                    printf("Error: Modulus by zero is not allowed.\n");
                }
                break;
            case 6: exit(0);
            default: printf("Invalid choice\n");
        }
    }
    return 0;
}