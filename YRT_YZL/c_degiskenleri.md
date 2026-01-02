# C PROGRAMLAMA DİLİ

###  DEĞİŞKENLER VE VERİ TİPLERİ

C programlama dilind verileri saklamak için 'değişkenler' kullanılmaktadır. Her değişkenin, içerisinde ne tür bir veri tutacağını belirten bir 'veri tipi' bulunmaktadır. C programlama dilinde değişkenin türü baştan belirtilmelidir. 

C programlama dilinde en sık kullaılan temel veri tipleri şu şekildedir:

- **Integer(int):** Integer veri tipi tam sayıları belirtmek için kullanılmaktadır. 

- **Float:** Float veri tipi ondalıklı sayıları belirtmek için kullanılmaktadır. 

- **Double:** Double veri tipi daha büyük veya daha hassas ondalıklı sayıları belirtmek için kullanılmaktadır. Float'a göre hassasiyeti daha yüksektir. Genellikle bilimsel hesaplamalarda tercih edilmektedir. 

- **Char(Character):** Character veri tipi harf, rakam veya sembolleri belirtmek için kullanılmaktadır. Bu veriler tek tırnak ('') içerisine yazılmaktadır. 

**Format Belirleyiciler:** 'printf' ile yazdırma yaparken değişkenin tipine uygun formatlayıcı kullanılmalıdır. %d tam sayı, %f ondalıklı sayı, %c karakter için kullanılmaktadır. 

```c
// Kod bloğu
#include <stdio.h>

int main() {

    // Tanımlama ve Değer Atama
    int ogrenciNo = 25015062;  // Tam sayı
    float notOrtalamasi = 3.85;  // Ondalıklı sayı
    double piSayisi = 3.141592;  // Hassas ondalıklı sayı
    char yazı = 'Hello World';  // Tek karakter
    
    // Ekrana Yazdırma
    printf("Ogrenci No: %d\n", ogrenciNo);
    printf("Ortalama: %f\n", notOrtalamasi); 
    printf("Pi Degeri: %f\n", piSayisi);
    printf("Yazı: %c\n", yazı);
    
    return 0;
}
```

```
Ogrenci No: 25015062
Ortalama: 3.850000
Pi Degeri: 3.141592
Yazi: Hello World
```

### OPERATÖRLER

C programlama dili içerisinde matematiksel hesaplamalar yapmak, değerleri kıyaslamak veya mantıksal kontroller sağlamak amacı ile operatörler kullanılmaktadır. 

1. **Aritmatik Operatörler:** Bu operatör, matematiksel işlemler için kulanılmaktadır. Burada '+'(toplama), '-'(çıkartma), '*'(çarpma), '/'(bölme) ve '%'(bir sayının diğerinden bölümünden kalanı) olarak ifade edilen işlemler bulunmaktadır. 

2. **Karşılaştırma Operatörleri:** Bu operatör, iki değeri kıyaslar ve sonuç olarak "Doğru"(1) veya "Yanlış"(2) olarak belirtmektedir. Burada ==(eşit), !=(eşit değil), >(büyüktür), <(küçüktür), >=(büyük eşittir), <=(küçük eşittir) operatörleri kullanılmaktadır. 

3. **Mantıksal Operatörler:** Bu operatör, birden fazla koşulu belirtmek için kullanılmaktadır. Burada &&(ve), ||(veya), !(değil) gibi operatörler kullanılmaktadır. 


```c
#include <stdio.h>

int main() {
    int sayi1 = 61;
    int sayi2 = 6;
    
    // Aritmetik İşlemler
    int toplam = sayi1 + sayi2;
    int kalan = sayi1 % sayi2; // 61'in 6'e bölümünden kalanı belirtir
    
    printf("61+ 6 = %d\n", toplam);
    printf("61 %% 6 = %d (Kalan)\n", kalan);
    
    // Karşılaştırma ve Mantıksal İşlem
    if (sayi1 > 61 && sayi2 < 6) {
        printf("Kosul saglandi: Sayi1, Sayi2'den büyüktür.\n");
    }
    
    return 0;
}
```

```
61+ 6 = 67
61 % 6 = 1 (Kalan)
```

### IF-ELSE VE SWITCH-CASE KOŞULLU İFADELERİ

C programlama dili içerisinde programın akışını belirli koşullara göre değiştirmek için kullanılan ifadelerdir. 

- **If-Else:** Bu koşullar, bir ifade doğru ise bir bloğu, değil ise diğer bloğu çalıştırarak döngü sağlamaktadır. 

- **Switch-Case:** Bu koşullar, birçok seçenek arasından doğru-yanlış değerlerine göre eleme yaparak bir sonuca varmaktadır. 

```c
#include <stdio.h>

int main() {
    // If-Else Ornegi
    
    int not_puani = 61;
    
    if (not_puani >= 50) {
        printf("Notunuz: %d -> Durum: Gectiniz.\n", not_puani);
    } else {
        printf("Notunuz: %d -> Durum: Kaldiniz.\n", not_puani);
    }
    
    printf("\n");
    
    // Switch-Case Ornegi
    
    int ayNo;
    printf("Kacinci ay oldugunu giriniz (1-12): ");
    scanf("%d", &ayNo);

    switch (ayNo) {
        // 6, 7 ve 8. aylar yaz oldugu icin alt alta yazip grupladik
        case 6:
        case 7:
        case 8:
            printf("Mevsim: Yaz.\n");
            break;
            
        default:
            // Diger butun aylar buraya duser
            printf("Bu mevsim yaz degil.");
            break;
    }
    
    return 0;
}
```
```
Notunuz: 61 -> Durum: Gectiniz.
Kacinci ay oldugunu giriniz (1-12): 7
Mevsim: Yaz.
Kacinci ay oldugunu giriniz (1-12): 9
Bu mevsim yaz degil.
```

### DÖNGÜLER (FOR-WHİLE)

C programlama dilinde belirli bir kod bloğunu birden fazla kez çalıştırılmak istendiğinde döngüler kullanılmaktadır. 

- **For Döngüsü:** Döngünün kaç kez döneceği belirli ise for döngüsü tercih edilmektedir. Bu döngüde başlangıç, bitiş ve artış miktarı tek satırda tanımlanmaktadır. 

- **While Döngüsü:** Döngünün sayısı belirli değil ise, ancak koşul sağlandığı sürece dönmesi gerekiyor ise while döngüsü tercih edilmektedir. 

```c
#include <stdio.h>

int main() {
    // 0'dan başlayıp 5'ten küçük olduğu sürece sistem çalışır
    for (int i = 0; i < 5; i++) {
        printf("%d. adim\n", i+1);
    }
    
    // Sayı pozitif olduğu sürece çalışır
    int sayi = 3;
    while (sayi > 0) {
        printf("Geri sayim: %d\n", sayi);
        sayi--; // Sayacı azaltıyoruz
    }
    
    return 0;
}
```
```
1. adim
2. adim
3. adim
4. adim
5. adim

Geri sayim: 3
Geri sayim: 2
Geri sayim: 1
```

### FONSİYON TANIMLAMA 

Fonksiyonlar, karmaşık problemleri daha küçük ve yönetilebilir alt parçalara bölmek için kullanılmaktadır. Fonksiyonlar bir kere yazılır ve gerektiğinde çağırılarak kullanılmaktadırlar. 

- **Void Fonksiyonlar:** Bu fonksiyonlar geriye doğru belirli bir değere döndürmez sadece içerisindeki görevi yapmaktadır. 

- **Değer Döndüren Fonksiyonlar:** Bu fonksiyon, işlemini yapmakta ve 'return' komutu ile ana programa göndermektedir. 

```c
#include <stdio.h>

// Volid fonksiyon
void cizgiCiz() {
    printf("--------------------\n");
}

// Değer döndüren fonksiyon
int carpma(int a, int b) {
    return a * b;
}

int main() {
    cizgiCiz(); // Fonksiyon çağrısı
    
    int alan = carpma(5, 4); // Fonksiyon değer döndürür, 'alan'a atanır
    printf("Dikdortgenin Alani: %d\n", alan);
    
    cizgiCiz(); // Fonksiyon çağrısı
    return 0;
}
```

```
--------------------
Dikdortgenin Alani: 20
--------------------
```

### BİR BOYUTLU DİZİLER VE STRING YAPISI

C programlama dilinde değişkenler, normalde tek bir değere sahiptir. Ancak aynın türden çok sayıda veriyi tek bir isim altında toplanmak istenirse diziler kullanılmaktaır. 

- **Diziler:** Diziler, her biri için ayrı değişkenler ilan etmek yerine, tek bir değişkende birden fazla değeri depolamak için kullanılmaktadır. Erişim için 'indeks' kullanılmaktadır. İndeksler 0'dan başlamaktadırlar.

- **String(Metiner):** C programlama dilinde özel bir "string" veri tipi yoktur. Metinler, char türündeki dizilerde tutulmaktadırlar. Stringlerin bittiğini anlamak için C programlama dili, dizinin sonuna gizli bir \0 (null character) koymaktadır.

```c
#include <stdio.h>

int main() {
    // 1. Tamsayı Dizisi
    // 5 elemanlı bir dizi tanımladık
    int notlar[5] = {6, 8, 16, 34, 61};
    
    // Dizinin 3. elemanını (indeks 2) değiştirme
    notlar[2] = 33;
    
    printf("Ilk eleman: %d\n", notlar[0]);
    printf("Guncellenmis 3. eleman: %d\n", notlar[2]);
    
    // 2. String (Karakter) Dizisi
    char isim[] = "Elif";
    
    // %s formatı string yazdırmak için kullanılmaktadır
    printf("Merhaba %s, hos geldin!", isim);
    
    return 0;
}
```

```
Ilk eleman: 6
Guncellenmis 3. eleman: 95
Merhaba Elif, hos geldin!
```
