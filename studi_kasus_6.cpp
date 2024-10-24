#include <iostream>
#include <string>
int main(){
    std::string nama;
    int JumlahPenjualan;
    float komisi = 0.1; //karena 10% = 10/100 = 0.1
    float BesarKomisi;
    std::cout << "Masukkan nama salesman: ";
    getline(std::cin,nama);
    // std::cin.ignore();
    std::cout << "Masukkan Jumlah penjualan: ";
    std::cin >> JumlahPenjualan;

    BesarKomisi = JumlahPenjualan * komisi;
    
    std::cout << "Nama Salesman: " << nama << std::endl;
    std::cout << "Besar komisi: " << BesarKomisi << std::endl;


    std::cin.get();
    return 0;
}