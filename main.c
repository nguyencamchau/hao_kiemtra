#include <stdio.h>

// Hàm nhập dãy số nguyên
void nhapMang(int a[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
}

// Hàm xuất dãy số nguyên
void xuatMang(int a[], int n) {
    
}

// Hàm sắp xếp dãy số tăng dần (Thuật toán Bubble Sort)
void sapXepTangDan(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                // Hoán đổi 2 phần tử
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

// Hàm main điều khiển chính
int main() {
    int n;
    int a[100]; // Khai báo mảng tối đa 100 phần tử

    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &n);

    // Gọi hàm nhập mảng
    printf("--- Nhap mang ---\n");
    nhapMang(a, n);

    // Gọi hàm xuất mảng ban đầu
    printf("\nMang vua nhap la: ");
    xuatMang(a, n);

    // Gọi hàm sắp xếp
    sapXepTangDan(a, n);

    // Gọi hàm xuất mảng sau khi sắp xếp
    printf("Mang sau khi sap xep tang dan: ");
    xuatMang(a, n);

    return 0;
}