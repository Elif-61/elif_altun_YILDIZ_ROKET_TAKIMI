#include <stdio.h>
#include <math.h> 

int main() {
    double a, b, c;  // Katsayilar
    double delta;  // Diskriminant
    double x1, x2;  // Kokler

    // Kullanicidan katsayilari aliyoruz
    printf("Denklemin katsayilarini giriniz (a, b, c): ");
    scanf("%lf %lf %lf", &a, &b, &c);

    // Diskriminanti hesapliyoruz
    delta = (b * b) - (4 * a * c);

    printf("\nDelta Degeri: %.2lf\n", delta);

    // Kokleri hesapliyoruz
    if (delta > 0){
        // Iki farkli kok olma ihtimali
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);

        printf("Denklemde iki farkli kok bulunmaktadir:\n");
        printf("Kok 1: %.2lf\n", x1);   
        printf("Kok 2: %.2lf\n", x2);
    }

    else if (delta == 0) {
        // Cift katli kok olma ihtimali
        x1 = -b / (2 * a);

        printf("Denklemde cift katli kok bulunmaktadir:\n");
        printf("x1 = x2 = %.2lf\n", x1);
    }

    else {
        // Reel kok olmama ihtimali
        // Deltanin sifirdan kucuk oldugu durumda reel kok yoktur
        printf("Denklemin reel koku bulunmamaktadir.\n");
    }

    return 0;
}
