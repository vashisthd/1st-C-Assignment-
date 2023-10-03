  // Simple calculator using loops & switch 
#include<stdio.h>

int main()
{
    char operator;
    float n;
    printf("Enter Starting number \n");
    scanf("%f",&n);
    float result = n;

    while (1)
    {
        printf("Current result is : %f\n", result);
        printf("Enter operator or press 'C'/'c' to clear or press 'E'/'e' to exit \nAfter operator Enter Number(By pressing Enter after entering operator) \n");
        scanf(" %c", &operator);

        if (operator=='E'||operator=='e')
        {
            break;
        }

        if (operator=='C'||operator=='c')
        {
            result=0;
        }
        else
        {
            scanf("%f", &n);

            switch (operator)
            {
            case'+':
                result+=n;
                break;
            case'-':
                result-=n;
                break;
            case'*':
                result*=n;
                break;
            case'/':
                if (n!=0)
                {
                    result/=n;
                }
                else
                {
                    printf("error\n");
                }
                break;
            default:
                printf("please enter correct operator\n");
                break;
            }
        }
    }

    printf("Final result is : %f\n", result);

    return 0;
}
