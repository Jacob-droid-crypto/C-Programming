#include <stdio.h>

int main() {
    int limit, sum = 0, i;

    printf("Enter the limit: ");
    scanf("%d", &limit);

    for (i = 0; i < limit; i++) {  
        if (i % 2 == 0) {          
            sum = sum + i;         
        }
    }

    printf("The sum of even numbers up to %d is: %d\n", limit, sum);
    return 0;
}
