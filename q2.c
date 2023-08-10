#include <stdio.h>

int main() {
    // Döviz kurlarını tanımla
    double alisKurlari[4][3] = {
        {3.85, 3.89, 3.90},
        {3.54, 3.57, 3.58},
        {4.50, 4.57, 4.60},
        {3.55, 3.61, 3.67}
    };

    double satisKurlari[4][3] = {
        {3.98, 3.94, 3.92},
        {3.68, 3.63, 3.62},
        {4.70, 4.66, 4.662},
        {3.75, 3.70, 3.69}
    };

    // Müşteriden döviz bilgilerini al
    int dovizCinsi;
    float miktar;
    char islemTuru;

    printf("Doviz cinsi secin:\n");
    printf("1. Euro\n2. Dolar\n3. Sterlin\n4. Isvicre Franki\n");
    scanf("%d", &dovizCinsi);

    printf("Doviz miktarini girin: ");
    scanf("%f", &miktar);

    printf("Doviz almak icin 'A' veya doviz satmak icin 'S' girin: ");
    scanf(" %c", &islemTuru);

    // İşlem türüne göre uygun kurları seç
    double kur;
    if (islemTuru == 'A') {
        if (miktar <= 1000)
            kur = satisKurlari[dovizCinsi - 1][0];
        else if (miktar <= 5000)
            kur = satisKurlari[dovizCinsi - 1][1];
        else
            kur = satisKurlari[dovizCinsi - 1][2];
    } else if (islemTuru == 'S') {
        if (miktar <= 1000)
            kur = alisKurlari[dovizCinsi - 1][0];
        else if (miktar <= 5000)
            kur = alisKurlari[dovizCinsi - 1][1];
        else
            kur = alisKurlari[dovizCinsi - 1][2];
    } else {
        printf("Gecersiz islem turu!\n");
        return 0;
    }

    // Hesaplamaları yap ve sonucu ekrana yazdır
    float tutar = miktar * kur;
    printf("Toplam tutar: %.2f\n", tutar);

    return 0;
}
