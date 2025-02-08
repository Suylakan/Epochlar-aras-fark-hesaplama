# Epoch Zamanı Fark Hesaplayıcı

Bu proje, iki farklı tarih ve saat bilgisi girildiğinde, bu tarihler arasındaki epoch zamanını hesaplayan bir C programını içerir. Epoch zamanı, 1 Ocak 1970 UTC tarihinden itibaren geçen saniye sayısı olarak hesaplanır. Bu program, kullanıcıdan tarih ve saat bilgilerini alır, bu bilgileri epoch zamanına dönüştürür ve iki epoch zamanı arasındaki farkı saniye cinsinden hesaplayarak ekrana yazdırır.

## İçindekiler

- [Kullanılan Yapılar](#kullanılan-yapılar)
- [Programın Çalışma Prensibi](#programın-çalışma-prensibi)
- [Kullanım Talimatları](#kullanım-talimatları)
- [Örnek Kullanım](#örnek-kullanım)

## Kullanılan Yapılar

- **`struct TarihSaat`**: Tarih ve saat bilgilerini tutmak için kullanılır.
- **`long`**: Epoch zamanını hesaplamak için kullanılır.

## Programın Çalışma Prensibi

1. Kullanıcıdan birinci ve ikinci tarih ve saat bilgilerini alır.
2. Tarih ve saat bilgilerini epoch zamanına dönüştürür.
3. İki epoch zamanı arasındaki farkı hesaplar.
4. Farkı saniye cinsinden ekrana yazdırır.

## Kullanım Talimatları

1. Programı çalıştırın.
2. Birinci tarihi ve saati (Yıl, Ay, Gün, Saat, Dakika, Saniye) girin.
3. İkinci tarihi ve saati (Yıl, Ay, Gün, Saat, Dakika, Saniye) girin.
4. Program, iki tarih arasındaki epoch zaman farkını saniye cinsinden ekrana yazdıracaktır.

## Örnek Kullanım

```shell
Birinci tarihi girin (Yil ay gun saat dakika saniye siralamasi ile): 2023 4 6 10 30 0
Ikinci tarihi girin (Yil ay gun saat dakika saniye siralamasi ile): 2023 4 5 10 30 0
Birinci tarihin epoch degeri: 1680769800
Ikinci tarihin epoch degeri: 1680683400
Epochlar arasi fark: 86400 saniye
