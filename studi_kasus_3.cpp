#include <iostream>
int main(){
    int temp;
    int angka1,angka2;
    angka1 = 8;
    angka2 = 5;
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