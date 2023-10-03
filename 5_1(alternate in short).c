#include <stdio.h>
void format_of_date(int date, int month, int year)
{
    printf("%d", date);
    switch (date)
    {
    case 1:case 21:case 31: printf("st ");
        break;
    case 2:case 22:printf("nd ");
        break;
    case 3:case 23:printf("rd ");
        break;
    default:
        printf("th ");
        break;
    }
    switch (month)
    {
    case 1: printf("January, ");
        break;
    case 2: printf("February, ");
        break;
    case 3: printf("March, ");
        break;
    case 4: printf("April, ");
        break;
    case 5: printf("May, ");
        break;
    case 6: printf("June, ");
        break;
    case 7: printf("July, ");
        break;
    case 8: printf("August, ");
        break;
    case 9: printf("September, ");
        break;
    case 10: printf("October, ");
        break;
    case 11: printf("November, ");
        break;
    case 12: printf("December, ");
        break;
    default:
        printf("Invalid Input ");
        break;
    }
    printf("%d", year);
}
int main()
{
    int date, month, year,day;
    printf("Enter date:\n");
    scanf("%d", &date);
    printf("Enter month:\n");
    scanf("%d", &month); 
    printf("Enter year:\n");
    scanf("%d", &year);
format_of_date(date, month, year);

    return 0;
}
