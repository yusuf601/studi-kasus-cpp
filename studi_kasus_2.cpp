#include <iostream>
#include <cassert>
int main(){
    int input;
    std::cout << "Masukkan angka: ";
    std::cin >> input;
    while(input < 10 || input > 20){
        std::cout << "Anda memasukkan angka di luar batas! \n";
        std::cout << "Masukkan angka kembali: ";
        std::cin >> input;
    } 

    /*
    operator || adalah OR 
    kondisi 1   kondisi 2   output
    1(true)     1(true)     1(true)
    1(true)     0(false)    1(true)
    0(false)    1(true)     1(true)
    0(false)    0(false)    0(false)

    kode diatas 
    kondisi 1 adalah input < 10 
    kondisi 2 adalah input > 20
    
    iterasi atau perulangan while akan berjalan jika kondisi bernilai true
    
    */

    std::cin.get();
    return 0;
}