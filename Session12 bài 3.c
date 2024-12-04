#include <stdio.h>
long long giaiThua(int n) {
    long long result = 1; 
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
int main() {
    int a;
    printf("Nhap so nguyen: ");
    scanf("%d", &a);
    if (a < 0) {
        printf("Khong co giai cua so am \n");
    } else {
        long long result = giaiThua(a);
        printf("Giai thua cua %d la: %lld \n", a, result);
    }
    return 0;
}

