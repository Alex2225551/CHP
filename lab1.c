#include <stdio.h>

int dev(int a, int b) {
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    printf("Mutqagreq tvery: ");
    scanf("%d %d", &num1, &num2);

    int result = dev(num1, num2);

    printf("%d-i ev %d-i amenamec yndhanur bajanarary %d-n e\n", num1, num2, result);

    return 0;
}
