#include<stdio.h>

void printNum(int n) {
    if(n == 0) return;
    printf("%d\n", n);
    printNum(n - 1);
}

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);

    printNum(n);
    return 0;
}