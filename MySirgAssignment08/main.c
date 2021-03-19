#include <stdio.h>
#include <stdlib.h>

void menu_driven_geometry(void);
void month_days(void);
void menu_driven_prog(void);

int main()
{
//    month_days();
//    menu_driven_prog();
//    menu_driven_geometry();
printf("%d", fun());
    return 0;
}

void fun()
{
  return 0;
}

void menu_driven_geometry()
{
    int input, a, b, c;

    while(1)
    {
        system("cls");
        printf("1 -> Check isosceles triangle\n");
        printf("2 -> Check right angle triangle or not\n");
        printf("3 -> Check equilateral triangle or not\n");
        printf("4 -> Exit\n");

        printf("Enter your choice -> ");
        scanf("%d", &input);

        switch(input)
        {
        case 1:
            printf("\n\nEnter three angle of triangle -> ");
            scanf("%d%d%d", &a,&b,&c);

            if(a == b || a == c || b == c)
                printf("Isosceles Triangle");
            else
                printf("Not a isosceles triangle");
            break;

        case 2:
            printf("\n\nEnter three angle of triangle -> ");
            scanf("%d%d%d", &a,&b,&c);


            if(a == 90 || b == 90 || c == 90)
                printf("Right Triangle");
            else
                printf("Not a right triangle");
            break;
        case 3:
            printf("\n\nEnter three angle of triangle -> ");
            scanf("%d%d%d", &a,&b,&c);


            if(a == b && b == c && c == a)
                printf("Equilateral Triangle");
            else
                printf("Not an equilateral triangle");
            break;
        case 4:
            exit(0);
        default:
            printf("Wrong Input");
        }
        getch();
    }
    return;
}

void menu_driven_prog()
{
    int input, a, b;

    while(1)
    {
        system("cls");
        printf("1 -> Addition\n");
        printf("2 -> Subtraction\n");
        printf("3 -> Multiplication\n");
        printf("4 -> Division\n");
        printf("5 -> Exit\n");

        printf("Enter your choice -> ");
        scanf("%d", &input);

        switch(input)
        {
        case 1:
            printf("\n\nEnter two integer -> ");
            scanf("%d%d", &a,&b);
            printf("Addition of %d and %d is = %d", a, b, a + b);
            break;
        case 2:
            printf("\n\nEnter two integer -> ");
            scanf("%d%d", &a,&b);
            printf("Subtraction of %d and %d is = %d", a, b, a - b);
            break;
        case 3:
            printf("\n\nEnter two integer -> ");
            scanf("%d%d", &a,&b);
            printf("Multiplication of %d and %d is = %d", a, b, a * b);
            break;
        case 4:
            printf("\n\nEnter two integer -> ");
            scanf("%d%d", &a,&b);
            printf("Division of %d and %d is = %d", a, b, a / b);
            break;
        case 5:
            exit(0);
        default:
            printf("Wrong Input");
        }
        getch();
    }
    return;
}

void month_days()
{
    int month;

    printf("Enter month number -> ");
    scanf("%d",&month);

    switch(month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("31 Days");
        break;
    case 2:
        printf("28 Days");
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("30 Days");
        break;
    default:
        printf("Please Enter valid input");
    }

    return;
}
