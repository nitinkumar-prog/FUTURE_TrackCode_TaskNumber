//Floyd’s Triangle
#include <stdio.h>

int main() {
    int n, num = 1;
    printf("Enter the number of rows for Floyd's Triangle: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", num++);
        }
        printf("\n");
    }

 return 0;
}