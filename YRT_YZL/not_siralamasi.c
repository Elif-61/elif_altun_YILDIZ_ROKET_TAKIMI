# include <stdio.h>

int main() {
    int notlar[8];  // 8 ogrencinin notlarinin tutulacagi dizi
    int i, j, gecici;  // dongu degiskenleri
    double toplam = 0;  // notlarin toplami
    double ortalama;

    // Kullanicidan notlari aliyoruz
    printf("8 ogrencinin notlarini giriniz:\n");
    for (i = 0; i < 8; i++) {
        printf("Ogrenci %d notu: ", i + 1);
        scanf("%d", &notlar[i]);

        // Notlari alirken toplam sonuca ekliyoruz
        toplam += notlar[i];  
    }

    // Notlari siraliyoruz 
    for (i = 0; i < 7; i++) {   // kac tur bu islemi yapacagimizi belirledik (eleman sayisi - 1)
        for (j = 0; j < 7 - i; j++) {  // Her turda yan yana olan elemanlari kiyasliyoruz

            if (notlar[j] > notlar[j + 1]) {
                // Elemanlari degistiriyoruz
                gecici = notlar[j];
                notlar[j] = notlar[j + 1];
                notlar[j + 1] = gecici;
            }
        }
    }

    // Ortalama hesapliyoruz
    ortalama = toplam / 8.0;

    // Sonuclari yazdiriyoruz
    printf("\nSiralanmis notlar:\n");

    for (i = 0; i < 8; i++) {
        printf("%d ", notlar[i]);
    }

    printf("\nNot ortalamasi: %.2lf\n", ortalama);

    return 0;

}