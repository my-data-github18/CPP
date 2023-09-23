#include <stdio.h>
#include <stdlib.h>

struct Date
{
    int day;
    int month;
    int year;
};

void initDate()
{
    int day = 23;
    int month = 12;
    int year = 2023;
    printf("Date is %d-%d-%d \n", day, month, year);
};
void acceptDateFromConsole(struct Date *ptrDate)
{
    printf("Entrt day:");
    scanf("%d", &ptrDate->day);

    printf("Entrt month:");
    scanf("%d", &ptrDate->month);

    printf("Entrt year:");
    scanf("%d", &ptrDate->year);
};
void printDateOnConsole(struct Date ptrDate)
{

    printf("Date is %d-%d-%d \n", ptrDate.day, ptrDate.month, ptrDate.year);
};

int main()
{
    struct Date D1;
    int choice;
    while (1)
    {
        printf("Enter 1 for nitialisation of date:\n");
        printf("Enter 2 for inserting Date:\n");
        printf("Enter 3 for displaying date Date:\n ***************************\n Enter value choice here:");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            initDate();
            break;
        case 2:
            acceptDateFromConsole(&D1);
            break;
        case 3:
            printDateOnConsole(D1);
            break;
        default:
            exit(0);
            printf("");
        }
    }
    return 0;
}