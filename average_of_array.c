#include <stdio.h>

int main() {
    int n, i;
    float sum = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("Average = %.2f\n", sum / n);

    return 0;
}
