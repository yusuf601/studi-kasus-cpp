#include <iostream>
#include <string>
int main(){
    int N;
    std::string lirik1,lirik2,lirik3,lirik4;
    lirik1 = "Anak Ayam Turun ";
    lirik2 = "Mati ";
    lirik3 = "tinggal ";
    lirik4 = "habis semua";
    std::cout << "Masukkan nilai n: ";
    std::cin >> N;
    //int i = 0;i <= N; i++
    //
    for(int i = N; i > 0; i--){
        if(i > 1){
            std::cout << lirik1 << i << "," << lirik2 << 1 << " " << lirik3 << i -1 << std::endl;
        }else{
            std::cout << lirik1 << i << "," << lirik2 << 1 << " " << lirik4 << std::endl;
        }
    }
    std::cin.get();
    return 0;
}