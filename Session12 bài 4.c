#include <stdio.h>
int findMax(int arr[], int n) {
    int max = arr[0];  
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}
int main() {
    int a;
    printf("Nhap so phan tu trong mang: ");
    scanf("%d", &a);   
    int arr[a];
    printf("Nhap cac phan tu trong mang: \n");
    for (int i = 0; i < a; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int max = findMax(arr, a);
    printf("So lon nhat trong mang: %d\n", max);    
    return 0;
}

