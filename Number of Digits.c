#include <stdio.h>

int main() {
    int num, count = 0, number;

    printf("Enter the number: ");
    scanf("%d", &num);

    
    if (num == 0)
    {
        count = 1;
    }
    else
    {
        number = num;
        while (num != 0)
        {
            num = num / 10;
            count++;
        }
    }

    printf("The number of digits in %d is %d\n", number, count);
    return 0;
}
