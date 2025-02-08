#include <stdio.h>
// kullanacağımız struct parçalarını tanımladığımız kısım
struct TarihSaat {
    int yil;
    int ay;
    int gun;
    int saat;
    int dakika;
    int saniye;
};

int main() {
    // kullanacağımız tüm değerleri tanımladığımız kısım
    struct TarihSaat ts1, ts2;
    long epoch1, epoch2, yil1, yil2, ay1, ay2, gun1, gun2, saat1, saat2, dakika1, dakika2, epochfark;

// ilk tarihi girmemizi isteyen kısım
    printf("Birinci tarihi girin (Yil ay gun saat dakika saniye siralamasi ile): ");
    scanf("%d %d %d %d %d %d", &ts1.yil, &ts1.ay, &ts1.gun, &ts1.saat, &ts1.dakika, &ts1.saniye);

// ilk tarihin yil ay gun saat ve dakika değerlerini hesaplayan kısım
    yil1 = (ts1.yil - 1970) * 31536000;

    if(ts1.ay == 1) {
        ay1 = 0; // ilk ayı 0 olarak kabul ediyoruz.
    } else if (ts1.ay == 2) {
        ay1 = 2678400;
    } else if (ts1.ay == 3) {
        ay1 = 5097600;
    } else if (ts1.ay == 4) {
        ay1 = 7776000;
    } else if (ts1.ay == 5) {
        ay1 = 10368000;
    } else if (ts1.ay == 6) {
        ay1 = 13046400;
    } else if (ts1.ay == 7) {
        ay1 = 15638400;
    } else if (ts1.ay == 8) {
        ay1 = 18316800;
    } else if (ts1.ay == 9) {
        ay1 = 20995200;
    } else if (ts1.ay == 10) {
        ay1 = 23587200;
    } else if (ts1.ay == 11) {
        ay1 = 26265600;
    } else if (ts1.ay == 12) {
        ay1 = 28944000;
    }
    gun1 = (ts1.gun - 1) * 86400; // Girişte 1. günü 0 saniye olarak kabul ediyoruz
    saat1 = ts1.saat * 3600;
    dakika1 = ts1.dakika * 60;

// epoch değerini hesaplayan kısım
    epoch1 = yil1 + ay1 + gun1 + saat1 + dakika1 + ts1.saniye;

// ikinci tarihi girmemizi isteyen kısım
    printf("Ikinci tarihi girin (Yil ay gun saat dakika saniye siralamasi ile): ");
    scanf("%d %d %d %d %d %d", &ts2.yil, &ts2.ay, &ts2.gun, &ts2.saat, &ts2.dakika, &ts2.saniye);

// ikinci tarihin yıl ay gün saat ve dakika değerlerini hesaplayan kısım
    yil2 = (ts2.yil - 1970) * 31536000;
    if(ts2.ay == 1) {
        ay2 = 0; // ilk ayı 0 olarak kabul ediyoruz
    } else if (ts2.ay == 2) {
        ay2 = 2678400;
    } else if (ts2.ay == 3) {
        ay2 = 5097600;
    } else if (ts2.ay == 4) {
        ay2 = 7776000;
    } else if (ts2.ay == 5) {
        ay2 = 10368000;
    } else if (ts2.ay == 6) {
        ay2 = 13046400;
    } else if (ts2.ay == 7) {
        ay2 = 15638400;
    } else if (ts2.ay == 8) {
        ay2 = 18316800;
    } else if (ts2.ay == 9) {
        ay2 = 20995200;
    } else if (ts2.ay == 10) {
        ay2 = 23587200;
    } else if (ts2.ay == 11) {
        ay2 = 26265600;
    } else if (ts2.ay == 12) {
        ay2 = 28944000;
    }
    gun2 = (ts2.gun - 1) * 86400; // Girişte 1. günü 0 saniye olarak kabul ediyoruz
    saat2 = ts2.saat * 3600;
    dakika2 = ts2.dakika * 60;

// epoch değerini hesaplayan kısım
    epoch2 = yil2 + ay2 + gun2 + saat2 + dakika2 + ts2.saniye;

    // tüm epoch değerlerini ekrana yazdıran kısım
    printf("Birinci tarihin epoch degeri: %ld\n", epoch1);
    printf("Ikinci tarihin epoch degeri: %ld\n", epoch2);

    // epochlar arasındaki farkı hesaplayan kısım
    epochfark = epoch1 - epoch2;
    if(epochfark >= 0) {
        printf("Epochlar arasi fark: %ld saniye\n", epochfark);
    } else {
        epochfark = epoch2 - epoch1; // çıkan sonuç 0'dan küçükse işlemi tersine çeviriyoruz bu sayede değerimiz her zaman pozitif oluyor.
        printf("Epochlar arasi fark: %ld saniye\n", epochfark);
    }

    return 0;
}
