#include <stdio.h>

int main() {
    int m, n;
    double sum = 0.0;

    // Kullanıcıdan m ve n değerlerini al
    printf("m degerini girin: ");
    scanf("%d", &m);

    printf("n degerini girin: ");
    scanf("%d", &n);

    // İç içe döngülerle toplamı hesapla
    for (int i = 1; i <= m; i++) {
        for (int j = 1; j <= n; j++) {
            sum += 1.0 / (j*j + 3*i);
        }
    }

    // Sonucu ekrana yazdır
    printf("Sonuc: %f\n", sum);

    return 0;
}
