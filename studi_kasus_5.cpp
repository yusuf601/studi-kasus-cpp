#include <iostream>
int main(){
    int angka1,angka2,multiply,sum;
    float rata_rata; 
    while(true){
        std::cout << "Masukkan angka pertama: ";
        std::cin >> angka1;
        std::cout << "Masukan angka kedua: ";
        std::cin >> angka2;
        sum = angka1 + angka2;
        rata_rata = (angka1 + angka2) / 2;
        multiply = angka1 * angka2;
        if(sum > 200){
            std::cout << "*" << " \n";
        }else if(angka1 == 0 && angka2 == 0){
            break;
        }else{
            std::cout << "Rata-rata dua bilangan: " << rata_rata << std::endl;
            std::cout << "Hasil perkalian =" << angka1 << " x " << angka2 << " = " << multiply << std::endl;
        }

    }
    /*
    program harus berhenti jika kedua input bernilai 0 maka ->
    operator "~" = negasi dari kondisi angka1 != 0 && angka2 != 0
    bitwise AND
    kondisi 1   kondisi 2   output
    1(true)     1(true)     1(true)
    1(true)     0(false)    0(false)
    0(false)    1(true)     0(false)
    0(false)    0(false)    0(false)

    jika di negasikan(atau ingkaran)
    kondisi 1 kondisi 2     output
    1(true)     1(true)     0(false)
    1(true)     0(false)    1(true)
    0(false)    1(true)     1(true)
    0(false)    0(false)    1(true)

    
    */

    std::cin.get();
    return 0;
}