#include <iostream>
int main(){
    int temp;
    int angka1,angka2;
    std::cout << "Masukkan Angka pertama: ";
    std::cin >> angka1;
    std::cout << "Masukkan angka kedua: ";
    std::cin >> angka2;
    std::cout << "Sebelum pertukaran \n";
    std::cout << "Angka pertama: " << angka1 << std::endl;
    std::cout << "Angka kedua: " << angka2 << std::endl; 
    temp = angka1;
    angka1 = angka2;
    angka2 = temp;
    std::cout << "Sesudah pertukaran \n" << std::endl;
    std::cout << "Angka pertama: " << angka1 << std::endl;
    std::cout << "Angka kedua: " << angka2 << std::endl; 
    
    std::cin.get();
    return 0;
}