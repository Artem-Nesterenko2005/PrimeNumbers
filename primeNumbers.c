#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number = 0;
    printf("Enter a number greater than one ");
    scanf_s("%d", &number);
    if (number > 1)
    {
        for (number; number >= 0; number--)
        {
            int counter = 0;
            for (int divider = 1; divider < number + 1; divider++)
            {
                if (number % divider == 0)
                    counter += 1;
            }
            if (counter == 2)
                printf("%d, ", number);
        }
    }
    else
        printf("Error");
}


