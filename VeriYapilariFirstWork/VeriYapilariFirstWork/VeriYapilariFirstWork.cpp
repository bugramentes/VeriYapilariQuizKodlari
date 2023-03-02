#include <iostream>
using namespace std;
//   211307012 / Yusuf Üzeyir Kaya

double Hesapla(double vize, double final)
{
    return (vize * 0.3 + final * 0.7);
}


int main() {



    // Sıralı İki Diziyi Birleştirme
    std::cout << "Sirali Iki Diziyi Birlestirme" << std::endl;
    int dizi1[] = { 1, 3, 4, 5 ,9,11};
    int dizi2[] = { 2, 4, 6, 8 ,12};
    int dizi3[11];
    int i = 0, j = 0, k = 0;

    while (i < 6 && j < 5) {
        if (dizi1[i] < dizi2[j])
            dizi3[k++] = dizi1[i++];
        else
            dizi3[k++] = dizi2[j++];
    }

    while (i < 6)
        dizi3[k++] = dizi1[i++];

    while (j < 6)
        dizi3[k++] = dizi2[j++];

    
    for (int l = 0; l < 11; l++) {
        cout << dizi3[l] << " ";
    }
        
        std::cout << "" << std::endl;
        std::cout << "" << std::endl;







    

    //Dizi İçerisinde Yinelenen Değerleri Diziden Silme
    std::cout << "Dizi Icerisinde Yinelenen Degerleri Diziden Silme" << std::endl;
    int dizi4[] = { 0,0,1,1,1,2,2,3,3,4,5,5,5,5,5,5,5 };
    int boyut = sizeof(dizi4) / sizeof(dizi4[0]);
    int dizi5[10];
    int h = 0;

    for (int i = 0; i < boyut; i++) {
        if (dizi4[i] != dizi4[i + 1])
            dizi5[h++] = dizi4[i];
    }

    
    for (int i = 0; i < h; i++) {
        cout << dizi5[i] << " ";
    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;







    
    //Klavyeden -1 giriline kadar, girilen sayıların ortalamalarını gösteren program
    std::cout << "Klavyeden -1 giriline kadar, girilen sayilarin ortalamalarini gosteren program" << std::endl;
    int sayi, toplam = 0, adet = 0;
    double ortalama;

    cin >> sayi;

   while (sayi != -1) {
      toplam += sayi;
      adet++;
      cin >> sayi;
   }

   if (adet > 0) {
      ortalama = static_cast<double>(toplam) / adet;
      cout << "Girilen sayilarin ortalamasi: " << ortalama << endl;
      std::cout << "" << std::endl;
   } else {
      cout << "Hic sayi girilmedi." << endl;
      std::cout << "" << std::endl;
   }






   //Fonksiyon kullanarak Vize ve Final notu girilen öğrencinin ortalamasını hesaplama
   std::cout << "Fonksiyon kullanarak Vize ve Final notu girilen ogrencinin ortalamasini hesaplama" << std::endl;

   double vize, final, ort;
   cout << "Vize notunu girin: ";
   cin >> vize;
   cout << "Final notunu girin: ";
   cin >> final;
   ort = Hesapla(vize, final);
   cout << "Ortalama: " << ort << endl;
   

   

   
}
