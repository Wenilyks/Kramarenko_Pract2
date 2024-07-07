#include <stdio.h>

    int dilnyk(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
    int kratne(int a, int b) {
    return (a / dilnyk(a, b)) * b;
}
    int main() {
    int n;
    printf("Введіть кількість чисел: ");
    scanf("%d", &n);
    int numbers[20];
    printf("Введіть %d натуральних чисел: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &numbers[i]);
    }
    int result = numbers[0];
    for (int i = 1; i < n; i++) {
        result = kratne(result, numbers[i]);
    }
    printf("Найменше спільне кратне: %d\n", result);
    return 0;
}
