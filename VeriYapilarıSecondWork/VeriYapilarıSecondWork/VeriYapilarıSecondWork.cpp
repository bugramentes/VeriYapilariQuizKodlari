#include <iostream>
#include <string>

using namespace std;

struct Ogrenci {
    string ad;
    int id;
    float notu;
};

int main() {
    int ogrenciSayisi;
    cout << "Lutfen ogrenci sayisini girin: ";
    cin >> ogrenciSayisi;

    Ogrenci* ogrenciler = new Ogrenci[ogrenciSayisi];


    for (int i = 0; i < ogrenciSayisi; i++) {
        cout << "\nOgrenci #" << i + 1 << " bilgilerini girin:" << endl;
        cout << "Ad: ";
        cin >> ogrenciler[i].ad;
        cout << "ID: ";
        cin >> ogrenciler[i].id;
        cout << "Not: ";
        cin >> ogrenciler[i].notu;
    }

    //seçim menüsü oluşturma
    int secim;
    cout << "\n------------------Menu------------------\n";
    cout << "1. Ogrenci numarasina gore arama\n";
    cout << "2. Ogrenci ortalamaya gore siralama\n";
    cout << "3. Tum ogrencilerin not ortalamasini hesaplama\n";
    cout << "Seciminiz: ";
    cin >> secim;

    switch (secim)
    {
    case 1: 
    {
        // Id ye göre öğrenci arama
        int arananID;
        cout << "\nAranan ogrencinin ID'sini girin: ";
        cin >> arananID;

        bool bulundu = false;
        for (int i = 0; i < ogrenciSayisi; i++) {
            if (ogrenciler[i].id == arananID) {
                bulundu = true;
                cout << "\nOgrenci Bilgileri:" << endl;
                cout << "Ad: " << ogrenciler[i].ad << endl;
                cout << "ID: " << ogrenciler[i].id << endl;
                cout << "Not: " << ogrenciler[i].notu << endl;
                break;
            }
        }

        if (!bulundu) {
            cout << "Aranan ogrenci bulunamadi." << endl;
        }
        break;
    }
    case 2:
    {
        cout << "\nOgrencilerin notlari buyukten kucuge siralanmis hali:" << endl;
        // sıralamayı dizide tutma
        for (int i = 0; i < ogrenciSayisi; i++) {
            for (int j = i + 1; j < ogrenciSayisi; j++) {
                if (ogrenciler[j].notu > ogrenciler[i].notu) {
                    Ogrenci temp = ogrenciler[i];
                    ogrenciler[i] = ogrenciler[j];
                    ogrenciler[j] = temp;
                }
            }
        }
        // ekrana bastırma
        for (int i = 0; i < ogrenciSayisi; i++) {
            cout << ogrenciler[i].ad << " ID:" << ogrenciler[i].id << "--->" << ogrenciler[i].notu << endl;
        }
        break;
    }
    case 3: 
    {
        // ort hesaplama ve sıralama
        float toplam = 0;
        for (int i = 0; i < ogrenciSayisi; i++) {
            toplam += ogrenciler[i].notu;
        }
        float ortalama = toplam / ogrenciSayisi;
        cout << "\nTum ogrencilerin not ortalamasi: " << ortalama << endl;

        for (int i = 0; i < ogrenciSayisi; i++) {
            for (int j = i + 1; j < ogrenciSayisi; j++) {
                if (ogrenciler[j].notu > ogrenciler[i].notu) {
                    Ogrenci temp = ogrenciler[i];
                    ogrenciler[i] = ogrenciler[j];
                    ogrenciler[j] = temp;
                }
            }
        }
        break;
    }
    }
    return 0;
}



